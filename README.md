<h1 align="center">
	✏️ ft_printf
</h1>

<p align="center">
	<b><i>This project is a simplified version of the popular printf() function in the C language. It has notable differences compared to printf. For example, unlike printf, ft_printf does not include "Buffer Management." Additionally, while printf supports 17 formats like "diouxXfFeEgGaAcsb," ft_printf only supports 8 of them.</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/Kayraakbas/42_Istanbul_ft_printf?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/Kayraakbas/42_Istanbul_ft_printf?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/Kayraakbas/42_Istanbul_ft_printf?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/Kayraakbas/42_Istanbul_ft_printf?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/Kayraakbas/42_Istanbul_ft_printf?color=green" />
</p>

---

## 💡 About the project

## Overview
This project aims to recreate the functionality of the standard `printf` function in C. The goal is to build a custom version of `printf` from scratch, focusing on understanding how variadic functions work. This will involve creating a library that simplifies `printf` and implements some of its core features.


## 🛠️ Usage

### Requirements

- C Compiler: The project is developed in the C programming language, so a C compiler like GCC (GNU Compiler Collection) or another compatible compiler is required. GCC is typically the default compiler on Linux and Unix-based systems.
- Standard C Library: The project relies on functions and data types from the C standard library, which is included with your C compiler and usually pre-installed on most systems.
- Make: A Makefile is included in the project to automate the compilation process using the Make tool. Ensure that the Make tool is installed on your system to use this functionality.

Note: The function implemented in ubuntu and works without errors in ubuntu. In order to run with other OS, lines including (nil) should be changed to (NULL).

### Instructions

Download the project files or create a directory to store them.

Open a terminal and navigate to the project directory.

Run the make command to compile the project.

 make

This will generate a static library file named libftprintf.a.

After successful compilation, include the ft_printf.h header file in your C file that will use the library.

Compile and run your project.

 gcc -o program_name program_name.c ft_printf.a
 
This command compiles the C file program_name.c along with the library file ft_printf.a to create an executable named program_name. You can then run the program using (bash):

 ./program_name

### Usage

The ft_printf function utilizes format specifiers and variadic arguments. It processes special formatting tokens (e.g., %d, %s, %c) in the format string and outputs the result to the console.

#include "ft_printf.h"

int main()
{
    
    char *str;
    
    int  i;

    str = "World";
    i = 10;
    
    ft_printf("Hello, %s! Today is the %d day.", str, i);
    return 0;
    
}

The function substitutes the values provided for the placeholders in the format string and prints the resulting output to the console.

### What I learned ?
Variadic Functions

A key component of this project is learning variadic functions in C. These functions enable handling multiple parameters of varying types, making them perfect for implementing a versatile printf-like function. The va_list, va_start, va_arg, and va_end macros are crucial in processing variadic arguments, and i needed to use them extensively in this project.
