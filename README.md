# Libft

**Libft** is a custom C standard library reimplementation.  
It provides a reusable static library (`libft.a`) with:

- Reimplemented libc functions (`memset`, `strlcpy`, `atoi`, …)
- Extra string/memory utilities
- Linked list API (bonus)

**Skills:** C, memory management, pointers, data structures, static libraries

## Build & Use
```bash
make
gcc main.c -L. -lft
#include "libft.h"
