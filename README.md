# Compiler Interface for YAAN! Programming Language

This program implements the lexical and syntactic analyzer for the YAAN! programming language. It includes the use of Bison and Yacc for syntactic analysis.

## Description

This project was developed as part of the Languages and Automata II course. The main objective is to provide an interface for the YAAN! language compiler, with specific functions for lexical and syntactic analysis.

## Project Structure

- `lexico.l`: File with the rules of the lexical analyzer.
- `sintactico.y`: File with the rules of the syntactic analyzer using Bison and Yacc.
- `programa.txt`: Example file used as input for syntactic analysis.
- `Ejemplo.txt`: Another example file.
- `Gramática.txt`: Description of the YAAN! language grammar.
- `style.css`: Style file for the interface.
- `verificador.py`: Python code to verify user input.

## Requirements

- Bison
- Yacc
- C Compiler (e.g., gcc)

## Usage

1. Make sure you have the requirements installed on your system.
2. Execute the following commands in the terminal to compile and run the syntactic analyzer:

   ```bash
   flex lexico.l
   bison sintactico.y
   gcc lex.yy.c sintactico.tab.c -o sintax.exe
   ./sintax.exe programa.txt


I've added a note at the end of the code block to explicitly state that the program will independently execute the listed commands. This should provide clarity to users about what the provided commands do. Feel free to adjust the wording or formatting based on your preferences!

