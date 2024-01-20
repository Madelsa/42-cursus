# Libft - Your Custom C Library
## Table of Contents

- Introduction
- Getting Started
  - Prerequisites
  - Installation
- Usage
- Functions
  - String Manipulation
  - Memory Management
  - Character Classification
  - String Conversion
  - Linked Lists
  - Additional Functions

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

## Functions

### String Manipulation

- ft_strchr

    Description: Locates the first occurrence of a character in a string.<br>
    Parameters:
    - const char *str: The string to search.
    - int c: The character to search for.<br><br>

- ft_strdup

    Description: Duplicates a string.<br>
    Parameters:
    - const char *str: The string to duplicate.<br><br>

- ft_strlcat

    Description: Concatenates two strings with size control.<br>
    Parameters:
    - char *dest: Destination string.
    - const char *src: Source string.
    - size_t size: Size of the destination buffer.<br><br>

- ft_strlcpy

    Description: Copies a string with size control.<br>
    Parameters:
    - char *dest: Destination string.
    - const char *src: Source string.
    - size_t size: Size of the destination buffer.<br><br>

- ft_strlen

    Description: Computes the length of a string.<br>
    Parameters:
    - const char *str: The string.<br><br>

- ft_strncmp

    Description: Compares two strings up to a specified number of characters.<br>
    Parameters:
    - const char *s1: The first string.
    - const char *s2: The second string.
    - size_t n: Number of characters to compare.<br><br>

- ft_strnstr

    Description: Locates a substring in a string with size control.<br>
    Parameters:
    - const char *str: The string to search.
    - const char *to_find: The substring to find.
    - size_t len: Maximum number of characters to search.<br><br>

- ft_strrchr

    Description: Locates the last occurrence of a character in a string.<br>
    Parameters:
    - const char *s: The string to search.
    - int c: The character to search for.<br><br>

- ft_strjoin

    Description: Concatenates two strings.<br>
    Parameters:
    - char const *s1: The first string.
    - char const *s2: The second string.<br><br>

- ft_strtrim

    Description: Trims leading and trailing characters from a string.<br>
    Parameters:
    - char const *s1: The string.
    - char const *set: The set of characters to trim.<br><br>

- ft_strmapi

    Description: Applies a function to each character of a string.<br>
    Parameters:
    - char const *s: The string.
    - char (*f)(unsigned int, char): The function to apply.<br><br>

- ft_striteri

    Description: Applies a function to each character of a string with its index.<br>
    Parameters:
    - char *s: The string.
    - void (*f)(unsigned int, char *): The function to apply.<br><br>

### Memory Management

- ft_bzero

    Description: Sets the first len bytes of the memory area pointed to by str to zero.<br>
    Parameters:
    - void *str: Pointer to the memory area.
    - size_t len: Number of bytes to set to zero.<br><br>

- ft_calloc

    Description: Allocates memory for an array of count elements, each of size bytes, and initializes them to zero.<br>
    Parameters:
    - size_t count: Number of elements.
    - size_t size: Size of each element.<br><br>

- ft_memchr

    Description: Locates the first occurrence of a character in a block of memory.<br>
    Parameters:
    - const void *str: Pointer to the memory area.
    - int c: The character to search for.
    - size_t n: Number of bytes to search.<br><br>

- ft_memcmp

    Description: Compares two blocks of memory.<br>
    Parameters:
    - const void *str1: Pointer to the first memory area.
    - const void *str2: Pointer to the second memory area.
    - size_t n: Number of bytes to compare.<br><br>

- ft_memcpy

    Description: Copies a block of memory.<br>
    Parameters:
    - void *dest: Destination memory.
    - const void *src: Source memory.
    - size_t numBytes: Number of bytes to copy.<br><br>

- ft_memmove

    Description: Copies a block of memory, handling overlapping regions.<br>
    Parameters:
    - void *dest: Destination memory.
    - const void *src: Source memory.
    - size_t numBytes: Number of bytes to copy.<br><br>

- ft_memset

    Description: Fills a block of memory with a specified value.<br>
    Parameters:
    - void *str: Pointer to the memory area.
    - int value: Value to set.
    - size_t len: Number of bytes to set.<br><br>

### Character Classification

-
