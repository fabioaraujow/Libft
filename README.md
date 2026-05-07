# Libft

> My first C library

Reimplementation of standard C libc functions and additional useful functions for future projects.

---

## About

**libft** is a static library containing 43 functions implemented from scratch, divided into three parts:

- **Part 1:** Libc functions (string, memory, and character manipulation)
- **Part 2:** Additional functions (advanced manipulation and output)
- **Part 3:** Linked lists (dynamic data structures)

---

## Implemented Functions

### Part 1 - Libc (23 functions)

**Character checks:**
`ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint`

**String manipulation:**
`ft_strlen` `ft_strlcpy` `ft_strlcat` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` `ft_strdup`

**Memory manipulation:**
`ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp` `ft_calloc`

**Conversion:**
`ft_atoi` `ft_toupper` `ft_tolower`

### Part 2 - Additional Functions (11 functions)

**String manipulation:**
`ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_itoa` `ft_strmapi` `ft_striteri`

**Output:**
`ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`

### Part 3 - Linked Lists (9 functions)

`ft_lstnew` `ft_lstadd_front` `ft_lstadd_back` `ft_lstsize` `ft_lstlast` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`

---

## Compilation

```bash
make        # Compiles the libft.a library
make clean  # Removes object files (.o)
make fclean # Removes objects and library
make re     # Recompiles everything from scratch
```

---

## Usage

### 1. Include the header in your code

```c
#include "libft.h"
```

### 2. Compile with the library

```bash
cc main.c libft.a -o program
```

### 3. Usage example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = ft_strdup("Hello, 42!");
    printf("%s\n", str);
    free(str);
    return (0);
}
```

---

## Project Structure

```
Libft/
├── libft.h          # Header with prototypes
├── Makefile         # Compilation automation
├── ft_*.c           # Function files
└── README.md        # This file
```

## Author

**Fábio Araújo** - [@fabde-ar]

Developed as part of **42 School** curriculum
