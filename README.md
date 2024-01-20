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

