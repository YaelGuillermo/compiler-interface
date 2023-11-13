import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QTextEdit, QPushButton, QVBoxLayout, QWidget, QLabel, QMessageBox
from PyQt5.QtCore import QFile
import subprocess
import platform

ejecutable = "sintax.exe" if platform.system() == "Windows" else "./sintax.exe"
subprocess.run("flex lexico.l", shell=True)
subprocess.run("bison sintactico.y", shell=True)
subprocess.run("gcc lex.yy.c sintactico.tab.c -o sintax.exe", shell=True)

class VerificadorSintacticoApp(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Verificador Sintáctico")
        self.setGeometry(100, 100, 800, 600)

        # Crear una etiqueta para el título
        titulo_label = QLabel("Título")
        titulo_label.setObjectName("titulo_label")  # Asigna un identificador a la etiqueta

        # Crear un área de texto para ingresar el código
        self.entrada_texto = QTextEdit()
        self.entrada_texto.setPlaceholderText("Escribe tu código aquí...")

        # Crear un botón para verificar el código
        self.boton_verificar = QPushButton("Verificar")

        # Establecer diseños y estilos
        layout = QVBoxLayout()
        layout.addWidget(titulo_label)  # Agrega la etiqueta del título
        layout.addWidget(self.entrada_texto)
        layout.addWidget(self.boton_verificar)

        central_widget = QWidget()
        central_widget.setLayout(layout)
        self.setCentralWidget(central_widget)

        # Cargar el archivo CSS y aplicar los estilos
        css_file = QFile("style.css")
        css_file.open(QFile.ReadOnly | QFile.Text)
        styleSheet = css_file.readAll().data().decode("utf-8")
        self.setStyleSheet(styleSheet)

        # Conectar el botón a la función de verificación
        self.boton_verificar.clicked.connect(self.verificar_codigo)

    def verificar_codigo(self):
        codigo = self.entrada_texto.toPlainText()  # Obtiene el código del área de texto
        with open("programa.txt", "w") as archivo:
            archivo.write(codigo)  # Escribe el código en un archivo
        # Ejecuta el analizador sintáctico
        proceso = subprocess.Popen([ejecutable, "programa.txt"], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        salida, error = proceso.communicate()
        if proceso.returncode == 0:
            QMessageBox.information(self, "Éxito", "Compilación realizada correctamente.")
        else:
            QMessageBox.critical(self, "Error", f"Error de compilación:\n{salida.decode('utf-8')}")

if __name__ == "__main__":
    app = QApplication(sys.argv)
    ventana = VerificadorSintacticoApp()
    ventana.show()
    sys.exit(app.exec_())