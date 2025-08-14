# 📚 Libft

[![Language](https://img.shields.io/badge/language-C-blue.svg)]()
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)]()
[![42 Project](https://img.shields.io/badge/42-Project-blue)]()

---

## 👋 About This Project
**Libft** is my first big C project at **42Amman**.  
It’s a custom implementation of functions from the standard C library — and more.  
The goal is to create my **own library** that I can reuse in future projects.

I built this to:
- **Understand how core C functions work under the hood**
- **Improve my skills with pointers, memory management, and data structures**
- **Learn how to build and use static libraries (`.a` files)**

**What’s inside?**
- Reimplemented C standard functions (`memset`, `strlcpy`, `atoi`, …)
- Extra utilities for strings and memory
- A bonus linked list API
---

## 🛠 Languages & Tools
<p>
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" width="50"/>
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/bash/bash-original.svg" width="50"/>
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/vscode/vscode-original.svg" width="50"/>
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/git/git-original.svg" width="50"/>
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/linux/linux-original.svg" width="50"/>
</p>

---

## 🚀 Build & Use
```bash
# 1️⃣ Compile the library
make

# 2️⃣ Compile your program with Libft
gcc main.c -L. -lft

# 3️⃣ Run your program
./a.out
