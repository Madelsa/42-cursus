# Libft - Your Custom C Library
## Table of Contents

- [Introduction](#introduction)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Functions](#functions)
  - [String Manipulation](#string-manipulation)
  - [Memory Management](#memory-management)
  - [Character Classification](#character-classification)
  - [String Conversion](#string-conversion)
  - [Char Conversion](#char-conversion)
  - [Linked Lists](#linked-lists)
  - [Printing](#printing)
  - [Additional Functions (upcoming projects)](#additional-functions-upcoming-projects)


## Introduction

Libft is a custom C library developed as part of the 42 curriculum. It contains a collection of functions that are commonly used in C programming, providing an essential set of tools for future projects. The library is designed to be robust, efficient, and to follow the 42 coding standards.

## Getting Started

### Prerequisites

To use the Libft library, you need:

    1) A C compiler (e.g., GCC)
    2) Make

### Installation

1) Clone the repository:
```bash
git clone https://github.com/Madelsa/42-libft.git
```

2) Navigate to the project directory:
```bash
cd libft
```

3) Compile the library:
```bash
make
```
This will generate the '<b>libft.a</b>' library file.

### Usage

To use the library in your C project, include the '<b>libft.h</b>' header file and link against the '<b>libft.a</b>' library as shown below:
```c
#include "libft.h"

int main() {
    ft_putstr("Hello, Libft!\n");
    return 0;
}
```

Compile your program using:
```bash
gcc my_program.c libft.a
```

## Getting Started

## Functions

### String Manipulation

- ft_strchr
<pre>Description: Locates the first occurrence of a character in a string.
Parameters:
- const char *str: The string to search.
- int c: The character to search for.
</pre>

- ft_strdup
<pre>Description: Duplicates a string.
Parameters:
- const char *str: The string to duplicate.
</pre>

- ft_strlcat
<pre>Description: Concatenates two strings with size control.
Parameters:
- char *dest: Destination string.
- const char *src: Source string.
- size_t size: Size of the destination buffer.
</pre>

- ft_strlcpy
<pre>Description: Copies a string with size control.
Parameters:
- char *dest: Destination string.
- const char *src: Source string.
- size_t size: Size of the destination buffer.
</pre>

- ft_strlen
<pre>Description: Computes the length of a string.
Parameters:
- const char *str: The string.
</pre>

- ft_strncmp
<pre>Description: Compares two strings up to a specified number of characters.
Parameters:
- const char *s1: The first string.
- const char *s2: The second string.
- size_t n: Number of characters to compare.
</pre>

- ft_strnstr
<pre>Description: Locates a substring in a string with size control.
Parameters:
- const char *str: The string to search.
- const char *to_find: The substring to find.
- size_t len: Maximum number of characters to search.
</pre>

- ft_strrchr
<pre>Description: Locates the last occurrence of a character in a string.
Parameters:
- const char *s: The string to search.
- int c: The character to search for.
</pre>

- ft_substr
<pre>Description: Extracts a substring from a string.
Parameters:
- char const *s: The string.
- unsigned int start: The start index of the substring.
- size_t len: The length of the substring.
</pre>

- ft_strjoin
<pre>Description: Concatenates two strings.
Parameters:
- char const *s1: The first string.
- char const *s2: The second string.
</pre>

- ft_strtrim
<pre>Description: Trims leading and trailing characters from a string.
Parameters:
- char const *s1: The string.
- char const *set: The set of characters to trim.
</pre>

- ft_split
<pre>Description: Splits a string into an array of substrings based on a delimiter.
Parameters:
- char const *str: The string to split.
- char c: The delimiter.
</pre>

- ft_strmapi
<pre>Description: Applies a function to each character of a string.
Parameters:
- char const *s: The string.
- char (*f)(unsigned int, char): The function to apply.
</pre>

- ft_striteri
<pre>Description: Applies a function to each character of a string with its index.
Parameters:
- char *s: The string.
- void (*f)(unsigned int, char *): The function to apply.
</pre>

### Memory Management

- ft_bzero
<pre>Description: Sets the first len bytes of the memory area pointed to by str to zero.
Parameters:
- void *str: Pointer to the memory area.
- size_t len: Number of bytes to set to zero.
</pre>

- ft_calloc
<pre>Description: Allocates memory for an array of count elements, each of size bytes, and initializes them to zero.
Parameters:
- size_t count: Number of elements.
- size_t size: Size of each element.
</pre>

- ft_memchr
<pre>Description: Locates the first occurrence of a character in a block of memory.
Parameters:
- const void *str: Pointer to the memory area.
- int c: The character to search for.
- size_t n: Number of bytes to search.
</pre>

- ft_memcmp
<pre>Description: Compares two blocks of memory.
Parameters:
- const void *str1: Pointer to the first memory area.
- const void *str2: Pointer to the second memory area.
- size_t n: Number of bytes to compare.
</pre>
  
- ft_memcpy
<pre>Description: Copies a block of memory.
Parameters:
- void *dest: Destination memory.
- const void *src: Source memory.
- size_t numBytes: Number of bytes to copy.
</pre>

- ft_memmove
<pre>Description: Copies a block of memory, handling overlapping regions.
Parameters:
- void *dest: Destination memory.
- const void *src: Source memory.
- size_t numBytes: Number of bytes to copy.
</pre>

- ft_memset
<pre>Description: Fills a block of memory with a specified value.
Parameters:
- void *str: Pointer to the memory area.
- int value: Value to set.
- size_t len: Number of bytes to set.
</pre>

### Character Classification

- ft_isalnum
<pre>Description: Checks if the given character is alphanumeric.
Parameters:
- int x: The character to check.
</pre>

- ft_isalpha
<pre>Description: Checks if the given character is an alphabetic character.
Parameters:
- int x: The character to check.
</pre>

- ft_isascii
<pre>Description: Checks if the given character is an ASCII character.
Parameters:
- int x: The character to check.
</pre>

- ft_isdigit
<pre>Description: Checks if the given character is a digit.
Parameters:
- int x: The character to check.
</pre>

- ft_isprint
<pre>Description: Checks if the given character is a printable character.
Parameters:
- int x: The character to check.
</pre>

### String Conversion

- ft_atoi
<pre>Description: Converts a string to an integer.
Parameters:
- const char *str: The string to convert to an integer.
</pre>

- ft_itoa
<pre>Description: Converts an integer to a string.
Parameters:
- int n: The integer to convert.
</pre>

### Char Conversion

- ft_tolower
<pre>Description: Converts an uppercase letter to lowercase.
Parameters:
- int i: The character to convert.
</pre>

- ft_toupper
<pre>Description: Converts a lowercase letter to uppercase.
Parameters:
- int i: The character to convert.
</pre>

### Linked Lists

- ft_lstnew
<pre>Description: Creates a new linked list node.
Parameters:
- void *content: The content of the node.
</pre>

- ft_lstadd_front
<pre>Description: Adds a new node to the beginning of a linked list.
Parameters:
- t_list **lst: A pointer to the pointer to the list.
- t_list *new_node: The new node to add.
</pre>

- ft_lstsize
<pre>Description: Returns the number of elements in a linked list.
Parameters:
- t_list *lst: The linked list.
</pre>

- ft_lstlast
<pre>Description: Returns the last element of a linked list.
Parameters:
- t_list *lst: The linked list.
</pre>

- ft_lstadd_back
<pre>Description: Adds a new node to the end of a linked list.
Parameters:
- t_list **lst: A pointer to the pointer to the list.
- t_list *new_node: The new node to add.
</pre>

- ft_lstdelone
<pre>Description: Deletes a node in a linked list.
Parameters:
- t_list *lst: The node to delete.
- void (*del)(void *): The function to delete the content of the node.
</pre>

- ft_lstclear
<pre>Description: Deletes an entire linked list.
Parameters:
- t_list **lst: A pointer to the pointer to the list.
- void (*del)(void *): The function to delete the content of each node.
</pre>

- ft_lstiter
<pre>Description: Iterates over a linked list and applies a function to each node.
Parameters:
- t_list *lst: The linked list.
- void (*f)(void *): The function to apply.
</pre>

- ft_lstmap
<pre>Description: Creates a new linked list by applying a function to each node.
Parameters:
- t_list *lst: The linked list.
- void *(*f)(void *): The function to apply.
- void (*del)(void *): The function to delete the content of each node.
</pre>

### Printing

- ft_putchar_fd
<pre>Description: Writes a character to a given file descriptor.
Parameters:
- char c: The character to write.
- int fd: The file descriptor.
</pre>

- ft_putstr_fd
<pre>Description: Writes a string to a given file descriptor.
Parameters:
- char *s: The string to write.
- int fd: The file descriptor.
</pre>

- ft_putendl_fd
<pre>Description: Writes a string followed by a newline to a given file descriptor.
Parameters:
- char *s: The string to write.
- int fd: The file descriptor.
</pre>

- ft_putnbr_fd
<pre>Description: Writes an integer to a given file descriptor.
Parameters:
- int n: The integer to write.
- int fd: The file descriptor.
</pre>

- ft_putnbr
<pre>Description: Writes an integer to the standard output.
Parameters:
- int n: The integer to write.
</pre>

### Additional Functions (upcoming projects)

- ft_printf
<pre>Description: A formatted output function similar to the standard printf.
Parameters:
- const char *str: The format string.
- ...: Variable number of arguments.
</pre>

- ft_put_char
<pre>Description: Writes a character to the standard output.
Parameters:
- int c: The character to write.
</pre>

- ft_put_string
<pre>Description: Writes a string to the standard output.
Parameters:
- char *str: The string to write.
</pre>

- ft_put_hex_pointer
<pre>Description: Writes a pointer value in hexadecimal format to the standard output.
Parameters:
- size_t ptr: The pointer value.
</pre>

- ft_putnbr_unsigned
<pre>Description: Writes an unsigned integer to the standard output.
Parameters:
- unsigned int n: The unsigned integer to write.
</pre>

- ft_put_hex_uint_lower
<pre>Description: Writes an unsigned integer in lowercase hexadecimal format to the standard output.
Parameters:
- unsigned int i: The unsigned integer to write.
</pre>

- ft_put_hex_uint_upper
<pre>Description: Writes an unsigned integer in uppercase hexadecimal format to the standard output.
Parameters:
- unsigned int i: The unsigned integer to write.
</pre>

- get_next_line
<pre>Description: Reads a line from a file descriptor.
Parameters:
- int fd: The file descriptor.
</pre>
