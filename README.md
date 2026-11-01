*This project has been created as part of the 42 curriculum by ztoura.*

# Libft

## Description

Libft is a C library developed as the first project of the 42/1337 Common Core. It reimplements commonly used C library functions and adds functions for string allocation, conversions, output and linked-list manipulation.

The project builds a static library named `libft.a`, which can be linked with other C programs. It contains 43 functions covering all three mandatory parts of subject version 19.3, including the nine linked-list functions.

The main learning goals are understanding pointers, strings, byte-level memory operations, dynamic allocation, callbacks, linked lists and the compilation process.

## Instructions

### Requirements

- A C compiler available through `cc`.
- `make` and the `ar` archive tool.
- An environment providing `<unistd.h>` and `write`, such as Linux or macOS.

### Build the library

```sh
git clone https://github.com/zakariat01/libft.git
cd libft
make
```

The Makefile compiles the source files using `-Wall -Wextra -Werror`, creates the corresponding `.o` object files, and collects them into `libft.a` using `ar rcs`.

| Command | Action |
|---|---|
| `make` or `make all` | Build the library and update files that need rebuilding. |
| `make clean` | Remove the generated object files. |
| `make fclean` | Remove the object files and `libft.a`. |
| `make re` | Remove the generated files and rebuild the library. |

Object files depend on their matching `.c` file and on `libft.h`. Changing a source file rebuilds its object file; changing the header rebuilds the dependent objects. Running `make` again without changes leaves an up-to-date library unchanged.

### Use the library

Include `libft.h` in your program and link the program with `libft.a`.

For a local example, save the following as `main.c` beside the library:

```c
#include "libft.h"

int main(void)
{
    char *text;

    text = ft_strjoin("Hello, ", "Libft!");
    if (text == NULL)
        return (1);
    ft_putendl_fd(text, 1);
    free(text);
    return (0);
}
```

Compile and run it from the library directory:

```sh
cc -Wall -Wextra -Werror main.c libft.a -o example
./example
```

Expected output:

```text
Hello, Libft!
```

The example program is for local testing and is not part of the submitted library sources.

## Library contents

All nine linked-list functions belong to the mandatory part in subject version 19.3 and are built by `make`.

| Group | Functions | Purpose |
|---|---|---|
| Character classification and conversion | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` | Test character classes and convert letter case. The classification functions return exactly `1` or `0`. |
| String length, search and comparison | `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` | Measure string length, locate characters or a substring, and compare a bounded number of characters. |
| Bounded string copying and concatenation | `ft_strlcpy`, `ft_strlcat` | Copy or append strings within a destination-size limit and return the lengths specified by their contracts. |
| Memory operations | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` | Fill, clear, copy, search and compare memory in bytes. `ft_memmove` supports overlapping source and destination ranges. |
| Allocation and string creation | `ft_calloc`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split` | Allocate zeroed memory, duplicate a string, extract a substring, join strings, trim characters from both ends, or split a string into separately allocated words. |
| Number conversion | `ft_atoi`, `ft_itoa` | Convert an initial numeric portion of a string to an integer, or allocate a string representing an integer. |
| String callbacks | `ft_strmapi`, `ft_striteri` | Apply a function to each character with its index. `ft_strmapi` creates a new string; `ft_striteri` passes character addresses so the original string can be modified. |
| File descriptor output | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a character, string, newline-terminated string or integer to a chosen file descriptor. |
| Linked lists | `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` | Create, link, count, locate, delete, traverse and transform nodes in a singly linked list. |

### Linked-list structure

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

`content` stores a pointer to the node's data. `next` points to the following node, or is `NULL` at the end. Creating a node stores the supplied content pointer without duplicating the data.

The callback supplied to the deletion functions defines how content is cleaned up. `ft_lstclear` also sets the caller's list pointer to `NULL`. `ft_lstmap` builds new nodes from callback results and uses the supplied deletion callback to clean up partial results if node allocation fails.

### Memory ownership

The caller is responsible for freeing successfully returned allocations when they are no longer needed. Allocating functions return `NULL` when their allocation fails.

For `ft_split`, free each returned string first, then free the pointer array. For linked lists, choose a deletion callback that matches how the content was allocated; node allocation and content allocation are separate responsibilities.

## Resources

- The 42/1337 Libft subject, version 19.3, for the project requirements and function contracts.
- Local manual pages, including `man strlen`, `man memcpy`, `man malloc` and `man write`, for C library and system-call documentation.
- [GNU Make manual](https://www.gnu.org/software/make/manual/) for targets, dependencies, variables and pattern rules.
- [GCC compilation options](https://gcc.gnu.org/onlinedocs/gcc/Overall-Options.html) for compilation stages and object files.
- [GNU ar documentation](https://sourceware.org/binutils/docs/binutils/ar.html) for static-library archives.
- [Abdul Bari: Mastering Data Structures & Algorithms using C and C++](https://www.udemy.com/course/datastructurescncpp/) as an additional learning resource for linked lists and data structures.

### AI assistance

ChatGPT was used as a learning assistant to explain pointers, memory representation, dynamic allocation, callbacks and linked lists; discuss function behavior; review code attempts; and help interpret compiler errors. It also helped generate test cases and explain the Makefile step by step.

AI assistance was also used to draft this README and prepare a Codex prompt for planning a repository audit, running tests and explaining failures.
