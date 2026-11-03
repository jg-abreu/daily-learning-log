# C++

C++ I'm studying for the C++ subject at Universidade Veiga de Almeida (UVA) and to get comfortable with the language beyond the class.

## Structure

```
cpp/
├── beginning-cpp/                         ← main course
│   ├── beginning-cpp.workspace            ← CodeLite workspace
│   └── section-XX-<topic>/                ← one folder per course section
│       └── <lesson-or-challenge>/         ← one CodeLite project per lesson with code
└── learncpp/                              ← earlier study with learncpp.com (now reference only)
    └── chapter-00-introduction/
```

- **beginning-cpp**: [Beginning C++ Programming – From Beginner to Beyond](https://www.udemy.com/course/beginning-c-plus-plus-programming/) (Frank Mitropoulos, Udemy). Each section is a folder and a branch, each lesson with code is a commit, and each section ends in a pull request. Theory-only lessons go into the section's `notes.md`.
- **learncpp**: my first chapter following [learncpp.com](https://www.learncpp.com), kept as history.

## Compiling

The course projects are built with CodeLite (MinGW g++). Any single file can also be compiled by hand:

```bash
g++ -std=c++20 -ggdb -pedantic-errors -Wall -Wextra -Wconversion -Wsign-conversion main.cpp -o main
./main
```
