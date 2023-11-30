import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QTextEdit, QPushButton, QVBoxLayout, QWidget, QLabel, QMessageBox, QFileDialog, QGridLayout
from PyQt5.QtCore import QFile
import subprocess
import platform

ejecutable = "sintax.exe" if platform.system() == "Windows" else "./sintax.exe"
subprocess.run("flex lexico.l", shell=True)
subprocess.run("bison sintactico.y", shell=True)
subprocess.run("gcc lex.yy.c sintactico.tab.c -o sintax.exe", shell=True)

subprocess.run("flex analizador_lexico.l", shell=True)
subprocess.run("gcc lex.yy.c -o lex.exe", shell=True)

sentences = "seman.exe" if platform.system() == "Windows" else "./seman.exe"
subprocess.run("flex lexico.l", shell=True)
subprocess.run("bison semantico.y", shell=True)
subprocess.run("gcc lex.yy.c semantico.tab.c -o seman.exe", shell=True)

class VerificadorSintacticoApp(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Compilador (Léxico, Sintáctico, Semántico)")
        self.setGeometry(100, 100, 1200, 600)

        # Crear botón para abrir archivo
        self.boton_verificar_sintactico = QPushButton("Abrir archivo")

        self.boton_limpiar_pantalla = QPushButton("Limpiar pantalla")

        # Crear caja de texto para la verificación sintáctica
        self.entrada_texto_sintactico = QTextEdit()
        self.entrada_texto_sintactico.setPlaceholderText("Abre un archivo o escribe tu código aquí...")

        # Crear botón para el análisis léxico
        self.boton_analizar_lexico = QPushButton("Analizar Léxico")

        # Crear caja de texto y botón para el análisis léxico
        self.entrada_texto_lexico = QTextEdit()
        self.entrada_texto_lexico.setReadOnly(True)  # Hacer la caja de texto no editable

        # Crear botón para el análisis sintáctico
        self.boton_analizar_sintactico = QPushButton("Analizar Sintáctico")

        # Crear caja de texto y botón para el análisis sintáctico
        self.entrada_texto_sintactico_analisis = QTextEdit()
        self.entrada_texto_sintactico_analisis.setReadOnly(True)

        # Crear botón para el análisis semántico
        self.boton_analizar_semantico = QPushButton("Analizar Semántico")

        # Crear caja de texto y botón para el análisis semántico
        self.entrada_texto_semantico = QTextEdit()
        self.entrada_texto_semantico.setReadOnly(True)

        # Establecer el diseño con QGridLayout
        layout = QGridLayout()

        # Colocar elementos en la parte superior
        layout.addWidget(self.boton_verificar_sintactico, 0, 0)
        layout.addWidget(self.entrada_texto_sintactico, 1, 0)
        layout.addWidget(self.boton_analizar_lexico, 0, 1)
        layout.addWidget(self.entrada_texto_lexico, 1, 1)

        # Colocar elementos en la parte inferior
        layout.addWidget(self.boton_analizar_sintactico, 2, 0)
        layout.addWidget(self.entrada_texto_sintactico_analisis, 3, 0)
        layout.addWidget(self.boton_analizar_semantico, 2, 1)
        layout.addWidget(self.entrada_texto_semantico, 3, 1)

        # Colocar botón de limpiar pantalla y etiqueta informativa
        layout.addWidget(self.boton_limpiar_pantalla, 4, 1)
        info_label = QLabel("Alumnos: González Hernández Yael Guillermo - 20211785, "
                            "Morales Castillo Cesar Andree - 20211816\n"
                            "Nombre del Docente: M.C. Luis Alfonso Gaxiola Vega\n"
                            "Materia: Lenguajes y Autómatas II")
        layout.addWidget(info_label, 4, 0)  # Ocupa 1 fila y 2 columnas

        central_widget = QWidget()
        central_widget.setLayout(layout)
        self.setCentralWidget(central_widget)

        # Cargar el archivo CSS y aplicar los estilos
        css_file = QFile("style.css")
        css_file.open(QFile.ReadOnly | QFile.Text)
        styleSheet = css_file.readAll().data().decode("utf-8")
        self.setStyleSheet(styleSheet)

        # Conectar los botones a las funciones correspondientes
        self.boton_limpiar_pantalla.clicked.connect(self.limpiar_pantalla)
        self.boton_verificar_sintactico.clicked.connect(self.abrir_archivo)
        self.boton_analizar_lexico.clicked.connect(self.analizar_lexico)
        self.boton_analizar_sintactico.clicked.connect(self.analizar_sintactico)
        self.boton_analizar_semantico.clicked.connect(self.analizar_semantico)
    
    def limpiar_pantalla(self):
        # Limpiar todos los cuadros de texto
        self.entrada_texto_sintactico.clear()
        self.entrada_texto_lexico.clear()
        self.entrada_texto_sintactico_analisis.clear()
        self.entrada_texto_semantico.clear()
    
    def abrir_archivo(self):
        opciones = QFileDialog.Options()
        opciones |= QFileDialog.ReadOnly
        archivo, _ = QFileDialog.getOpenFileName(self, "Abrir archivo de texto", "", "Archivos de Texto (*.txt);;Todos los archivos (*)", options=opciones)

        if archivo:
            with open(archivo, "r") as file:
                contenido = file.read()
                self.entrada_texto_sintactico.setPlainText(contenido)

    def analizar_lexico(self):
        codigo = self.entrada_texto_sintactico.toPlainText()  # Obtiene el código del área de texto
        with open("programa.txt", "w") as archivo:
            archivo.write(codigo)  # Escribe el código en un archivo
        # Ejecuta el analizador sintáctico
        proceso = subprocess.Popen(["./lex.exe", "programa.txt"], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        salida, error = proceso.communicate()
        
        resultado = salida.decode('utf-8') if proceso.returncode == 0 else f"Error de compilación:\n{salida.decode('utf-8')}"

        self.entrada_texto_lexico.setPlainText(resultado)

    def analizar_sintactico(self):
        codigo = self.entrada_texto_sintactico.toPlainText()  # Obtiene el código del área de texto
        with open("programa.txt", "w") as archivo:
            archivo.write(codigo)  # Escribe el código en un archivo
        # Ejecuta el analizador sintáctico
        proceso = subprocess.Popen([ejecutable, "programa.txt"], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        salida, error = proceso.communicate()
        
        resultado = salida.decode('utf-8') if proceso.returncode == 0 else f"Error de compilación:\n{salida.decode('utf-8')}"

        self.entrada_texto_sintactico_analisis.setPlainText(resultado)

    def analizar_semantico(self):
        codigo = self.entrada_texto_sintactico.toPlainText()  # Obtiene el código del área de texto
        with open("programa.txt", "w") as archivo:
            archivo.write(codigo)  # Escribe el código en un archivo
        # Ejecuta el analizador sintáctico
        proceso = subprocess.Popen([sentences, "programa.txt"], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        salida, error = proceso.communicate()
        
        resultado = salida.decode('utf-8') if proceso.returncode == 0 else f"Error de compilación:\n{salida.decode('utf-8')}"

        self.entrada_texto_semantico.setPlainText(resultado)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    ventana = VerificadorSintacticoApp()
    ventana.show()
    sys.exit(app.exec_())
