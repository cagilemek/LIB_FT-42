*This project has been created as part of the 42 curriculum by ckurtul.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.  
The project reimplements a set of standard C library functions from scratch and provides additional utility functions and linked list management routines.  
It helps students understand memory management, string manipulation, and pointer usage in C.

The library includes:

- Character and string functions (`ft_isalpha`, `ft_strlen`, `ft_strncmp`, etc.)  
- Memory management functions (`ft_memset`, `ft_bzero`, `ft_memcpy`, etc.)  
- Additional utilities (`ft_substr`, `ft_strjoin`, `ft_split`, etc.)  
- Linked list management (`ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, etc.)

---

## Instructions

**Clone the repository:**

git clone <repo_url>
cd libft
2. **Compile the library:**

make


This will generate libft.a in the project root.

**Execution**
To use the library in your code, include the header and link the library:

C

#include "libft.h"
Bash

cc your_file.c -L. -lft
Library Description
This library (libft.a) includes:

String Manipulation: ft_strlen, ft_strjoin, ft_split, etc.

Memory Management: ft_memset, ft_calloc, ft_memmove, etc.

Character Checks: ft_isalpha, ft_isdigit, ft_tolower, etc.

Linked List: ft_lstnew, ft_lstadd_back, and more.

## Resources

C Standard Library Documentation

The C Programming Language by Kernighan & Ritchie

Tutorials and articles on memory allocation, string manipulation, and linked lists in C
AI Usage:

AI was used for guidance and explanation on:

Debugging edge cases (ft_calloc, ft_split, ft_strdup)

Double pointer usage in linked list functions (t_list **)

Optimizing memory safety and pointer manipulation

Understanding recursion and safer coding practices
