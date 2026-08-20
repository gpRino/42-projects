# 🖥️ 42-projects - gleccia

<p align="center">
  <img src="https://img.shields.io/badge/School-42-8A2BE2?style=for-the-badge&logo=42&logoColor=white" alt="42 School"/>
  <img src="https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=black" alt="C"/>
  <img src="https://img.shields.io/badge/Language-Python-3776AB?style=for-the-badge&logo=python&logoColor=white" alt="Python"/>
  <img src="https://img.shields.io/badge/Shell-Bash-4EAA25?style=for-the-badge&logo=gnubash&logoColor=white" alt="Shell"/>
</p>

<p align="center">
  <i>Where I store all my 42 projects and ideas, more of a way to save and sync my files than a formal portfolio, but if you dig deep enough, you'll find plenty of useful resources.</i>
</p>

<p align="center">
  🔗 <a href="https://42roma.it/">42roma.it</a>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/42-8A2BE2?style=flat-square" alt="42"/>
  <img src="https://img.shields.io/badge/42--school-8A2BE2?style=flat-square" alt="42-school"/>
  <img src="https://img.shields.io/badge/42network-8A2BE2?style=flat-square" alt="42network"/>
  <img src="https://img.shields.io/badge/42roma-8A2BE2?style=flat-square" alt="42roma"/>
  <img src="https://img.shields.io/badge/exercises-007ACC?style=flat-square" alt="exercises"/>
  <img src="https://img.shields.io/badge/programming-007ACC?style=flat-square" alt="programming"/>
  <img src="https://img.shields.io/badge/projects-007ACC?style=flat-square" alt="projects"/>
</p>

---

## 📌 About This Repository

This is my personal workspace, archive, and sync hub for everything I build during my curriculum at **42** a project-based, peer-to-peer coding school with no classes or teachers.

It's not meant to be a polished portfolio, think of it more as a **working lab notebook**: a functional backup of curriculum exercises, personal notes, and low-level programming practice. Dig into the folders and you'll find source code, PDFs, logs, and setup files from my day-to-day work at 42 Roma.

---

## 🛠️ Repository Structure

```text
42-projects/
├── Exam_02/          # Exam 02 exercises (Python)
├── Libft/            # Custom C standard library implementation
├── PY pdf/           # Python course PDFs and reference material
├── Piscine/          # The Piscine (bootcamp) — foundational modules
├── Python_00/        # Python curriculum, module 00
├── Python_01/        # Python curriculum, module 01
├── get_next_line/    # Reads a file line-by-line, one call at a time
├── main && test/     # Test/main files for printf
├── printf/           # Custom recreation of the printf() function
├── vs_setup.txt      # My personal VS Code setup notes
└── README.md         # You are here
```

---

## 📚 Featured Projects

| Project | Description | Status |
|---|---|---|
| **Libft** | A custom C standard library, rebuilt from scratch | ✅ Passed |
| **printf** | A recreation of the classic `printf()` function | ✅ Passed |
| **get_next_line** | Reads a text file line by line, one call at a time | ✅ Passed |
| **Piscine** | The Piscine bootcamp exercises | ✅ Passed |
| **Exam_02** | Exam 02 exercises (Python) | ⚙️ in progress... |
| **Python_00 / Python_01** | Python curriculum modules | ✅ Up to Date, 100/100 norm OK |

---

## 🏊 February 2026 Piscine

The **Piscine** is 42's intensive, full-immersion bootcamp, the entry point into the curriculum. Here's what it covered:

| Module | Description |
|---|---|
| **printf** | Recreating the standard `printf()` function from scratch |
| **libft** | Building a personal C standard library |
| **python** | Intro to Python fundamentals and scripting |
| **shell** | Unix shell basics — commands, scripting, permissions |
| **get_next_line** | Reading a file line by line, one call at a time |

---

## ⚙️ Tech Stack

- **Languages:** C, Python, Shell
- **Tools:** Make, GCC (with -Wall -Wextra -Werror, Norminette (42's code style checker), Vanguard (memory leaks)
- **Environment:** Unix/Linux

---

## 🧩 My VS Code Setup

My personal VS Code configuration and notes for working on 42 exercises live in vs_setup.txt. It's built around a clean, distraction-free interface with solid C/C++ and Python tooling on top.

**Look & feel**

- A **dark synthwave-style** theme (Aura Dracula Spirit) paired with the Material Icon Theme, a custom title bar, and a minimal UI — minimap, breadcrumbs, startup tips, and the empty-editor hint are all switched off to keep the workspace distraction-free.

**Core extensions**

- **C/C++ tooling:** the full Microsoft C/C++ pack (IntelliSense, debugging, DevTools, themes) plus CMake and Makefile Tools for building 42 projects
- **42-specific:** the official 42 Header extension for auto-generating the standard 42 file headers
- **Python:** Pylance, the Python extension, Python Debugger, and Python Environments
- **Git & productivity:** GitLens for inline blame/history (with AI-assisted commit help via Copilot), Better Comments for color-coded annotations (todos, warnings, questions...), Prettier as the default formatter with format-on-save enabled
- **Extras:** WSL integration, Live Server, a GitHub-style theme, Rainbow CSV, and a PDF viewer for reading course material directly in the editor

**A few personal touches**

- Norminette-friendly formatting habits, a slightly tighter tree indent, and the 42 header pre-filled with my school credentials so every new file starts correctly formatted.
- Integrated flake8 and mypy for strict static type checking to catch type errors early and maintain clean Python code.


---

## 🚀 Getting Started

Each project lives in its own folder. Where a `Makefile` is present, build with:

```bash
$> make
```

If it is a `C` file, compile with:

```bash
$> gcc -Wall -Wextra -Werror <example.name>
```

`Python` needs:

```bash
$> python3 <example.name>
```

---

## 📄 License

This project is part of the 42 School curriculum. Feel free to browse the code for learning purposes, but please respect 42's academic integrity policy if you're a fellow student.

---

<p align="center">
  Made with 💜 and a lot of debugging during my time at 42 Roma.<br>
  Gianmarco Leccia
</p>
