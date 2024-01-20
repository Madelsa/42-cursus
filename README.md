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

-
