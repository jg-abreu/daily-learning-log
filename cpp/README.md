# C++

C++ I'm studying for the Bases de Programação subject at Universidade Veiga de Almeida (UVA) and to get comfortable with the language beyond it.

- **Course:** [Beginning C++ Programming – From Beginner to Beyond](https://www.udemy.com/course/beginning-c-plus-plus-programming/) (Frank Mitropoulos, Udemy)
- **Practice:** problems from [Beecrowd](https://judge.beecrowd.com/) on the same topic as each lesson

## Structure

```
cpp/
├── beginning-cpp/                    ← the Udemy course
│   └── section-04-getting-started/   ← one folder per course section
│       ├── notes.md                  ← short notes from the lessons
│       └── <lesson-or-exercise>/     ← one folder per lesson with code
│           └── main.cpp
└── beecrowd/
    └── 1000-hello-world.cpp          ← one file per problem: <id>-<short-name>.cpp
```

Each section is a branch, each lesson with code is a commit, the section exercise has its own commit, and each section ends in a pull request. Theory-only lessons go into the section `notes.md`.

## Compiling

I write and run the code in VS Code with g++ (MinGW). Each lesson is a single file, compiled from its folder with:

```bash
g++ -std=c++20 -Wall -Wextra -pedantic-errors main.cpp -o main
./main
```
