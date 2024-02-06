Libft
Description:

The libft project at School 42 is a fundamental project that requires students to create their own library of standard C functions. This library will be used in various other projects throughout the curriculum.

Table of Contents:

Introduction
Usage
Functions
Installation
Contributing
License
Introduction
The libft project is aimed at developing a library of fundamental C functions, including those from the standard library (libc). These functions are written from scratch to understand their underlying mechanisms and improve programming skills in C.

Usage
To use the libft library in your projects, follow these steps:

Clone this repository:
bash
Copy code
git clone https://github.com/yourusername/libft.git
Compile the library:
bash
Copy code
cd libft
make
Link the library to your project during compilation:
Copy code
gcc -o your_program your_program.c -L. -lft
Functions
The libft library includes various categories of functions, such as:

Memory manipulation functions (e.g., memset, memcpy, memmove)
String manipulation functions (e.g., strlen, strcpy, strcat)
Linked list functions (e.g., ft_lstnew, ft_lstadd_front, ft_lstsize)
Character classification functions (e.g., isalpha, isdigit, isprint)
And many more!
For a comprehensive list of functions and their descriptions, please refer to the header files and corresponding source files in the libft directory.

Installation
To install the libft library, simply clone this repository and compile the library as described in the Usage section.

Contributing
Contributions to the libft project are welcome! If you have suggestions for improvements or would like to add new functions, please feel free to open an issue or submit a pull request.

License
This project is licensed under the MIT License. See the LICENSE file for details.
