*This project has been created as part of the 42 curriculum by ynascime.*

---

# libft

## Description

**libft** is the very first project of the 42 school curriculum. Its goal is to re-implement a set of standard C library functions from scratch, building a personal utility library — `libft.a` — that will be reused throughout the entire cursus.

By rewriting functions like `strlen`, `memcpy`, `atoi`, or `strdup` without relying on the standard library, the project deepens understanding of low-level memory manipulation, pointer arithmetic, string handling, and the inner workings of libc. The result is a static library that can be linked to any future 42 project.

The library is divided into three parts:

- **Libc functions** — faithful re-implementations of standard C functions (prefixed with `ft_`).
- **Additional functions** — utility functions not in libc but commonly useful in C projects.
- **linked list** — linked-list manipulation functions using the `t_list` structure.

---

## Library Reference

### Part 1 — Libc Re-implementations

| Function | Prototype | Description |
|---|---|---|
| `ft_isalpha` | `int ft_isalpha(int c)` | Returns non-zero if `c` is an alphabetic character. |
| `ft_isdigit` | `int ft_isdigit(int c)` | Returns non-zero if `c` is a decimal digit. |
| `ft_isalnum` | `int ft_isalnum(int c)` | Returns non-zero if `c` is alphanumeric. |
| `ft_isascii` | `int ft_isascii(int c)` | Returns non-zero if `c` is a valid ASCII character (0–127). |
| `ft_isprint` | `int ft_isprint(int c)` | Returns non-zero if `c` is a printable character. |
| `ft_strlen` | `size_t ft_strlen(const char *s)` | Returns the length of string `s`, excluding the null terminator. |
| `ft_memset` | `void *ft_memset(void *b, int c, size_t len)` | Fills `len` bytes of memory starting at `b` with byte value `c`. |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Zeroes out `n` bytes starting at `s`. |
| `ft_memcpy` | `void *ft_memcpy(void *dst, const void *src, size_t n)` | Copies `n` bytes from `src` to `dst` (no overlap handling). |
| `ft_memmove` | `void *ft_memmove(void *dst, const void *src, size_t len)` | Copies `len` bytes handling overlapping memory regions safely. |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)` | Copies up to `dstsize - 1` characters from `src` to `dst`, null-terminating. |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize)` | Appends `src` to `dst`, ensuring the result is null-terminated within `dstsize`. |
| `ft_toupper` | `int ft_toupper(int c)` | Converts lowercase letter to uppercase. |
| `ft_tolower` | `int ft_tolower(int c)` | Converts uppercase letter to lowercase. |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | Returns a pointer to the first occurrence of `c` in `s`. |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Returns a pointer to the last occurrence of `c` in `s`. |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares up to `n` characters of `s1` and `s2`. |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | Scans `n` bytes of `s` for the first occurrence of byte `c`. |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares `n` bytes of `s1` and `s2`. |
| `ft_strnstr` | `char *ft_strnstr(const char *haystack, const char *needle, size_t len)` | Finds `needle` in the first `len` characters of `haystack`. |
| `ft_atoi` | `int ft_atoi(const char *str)` | Converts a string to an integer, skipping leading whitespace and handling sign. |
| `ft_calloc` | `void *ft_calloc(size_t count, size_t size)` | Allocates `count * size` zero-initialised bytes; returns NULL on failure. |
| `ft_strdup` | `char *ft_strdup(const char *s1)` | Allocates and returns a duplicate of string `s1`. |

---

### Part 2 — Additional Functions

| Function | Prototype | Description |
|---|---|---|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Allocates and returns a substring of `s` starting at `start`, of max length `len`. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Allocates and returns the concatenation of `s1` and `s2`. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Allocates a trimmed copy of `s1` with leading/trailing characters in `set` removed. |
| `ft_split` | `char **ft_split(char const *s, char c)` | Splits `s` by delimiter `c`; returns a NULL-terminated array of strings. |
| `ft_itoa` | `char *ft_itoa(int n)` | Converts integer `n` to its string representation. |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies function `f` to each character of `s`; returns the resulting string. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | Applies function `f` to each character of `s` in place, passing its index. |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Writes character `c` to file descriptor `fd`. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Writes string `s` to file descriptor `fd`. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Writes string `s` followed by a newline to file descriptor `fd`. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Writes integer `n` as a string to file descriptor `fd`. |

---

### Part 3 — Linked List Functions

Uses the following structure, defined in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Prototype | Description |
|---|---|---|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Allocates and returns a new node with `content`; `next` is set to NULL. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Prepends `new` to the front of list `lst`. |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | Returns the number of nodes in list `lst`. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Returns the last node of list `lst`. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Appends `new` to the end of list `lst`. |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees the node `lst`, applying `del` to its content. |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Deletes and frees all nodes of list `lst`. |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies function `f` to the content of each node. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Applies `f` to each node's content; returns a new list with results. `del` is called on failure. |

---

## Instructions

### Requirements

- A C compiler: `cc` (recommended) or `gcc`
- `make`
- A Unix-like system (Linux or macOS)

### Compilation

Clone the repository and run `make` at the root:

```bash
cd libft
make
```

This produces the static library `libft.a`.

#### Available Makefile rules

| Rule | Effect |
|---|---|
| `make` / `make all` | Compiles all mandatory source files into `libft.a` |
| `make clean` | Removes object files (`.o`) |
| `make fclean` | Removes object files **and** `libft.a` |
| `make re` | Runs `fclean` then `all` |

### Using the library in your project

Copy (or submodule) `libft/` into your project, then link against it at compile time:

```bash
gcc main.c -L./libft -lft -I./libft -o my_program
```

Include the header in your source files:

```c
#include "libft.h"
```

---

## Resources

### Documentation & References

- [The C Programming Language — Kernighan & Ritchie (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language) — The canonical reference for C programming.
- [Linux man-pages](https://man7.org/linux/man-pages/) — Official manual pages for every libc function re-implemented here.
- [cppreference.com — C standard library](https://en.cppreference.com/w/c) — Detailed specifications and behaviour descriptions for all standard C functions.
- [GNU C Library (glibc) documentation](https://www.gnu.org/software/libc/manual/) — In-depth reference for libc internals and standards compliance.
- [42 Norm](https://github.com/42School/norminette) — The coding style standard enforced across all 42 projects (`norminette` linter).

### AI Usage

AI (Claude by Anthropic) was used during this project in the following ways:

- **Understanding edge cases** — Querying how standard libc functions behave with NULL pointers, zero-length inputs, and integer overflow (e.g. `INT_MIN` in `ft_itoa`), then verifying against man pages.
- **Writing and checking this README** — The structure and content of this file were drafted with AI assistance, then reviewed and adapted to match the actual project implementation.
- **No code was generated by AI.** All `.c` and `.h` source files were written manually to comply with 42 Norm requirements and to meet the pedagogical goals of the project.
