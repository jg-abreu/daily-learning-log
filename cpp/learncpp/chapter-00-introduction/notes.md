# Chapter 0 — Introduction / Getting Started

Source: [learncpp.com — Chapter 0](https://www.learncpp.com/#Chapter0)

## 0.1–0.4 Introduction

### Key takeaways

- **C++ compiles straight to machine code.** There is no JVM: the compiler (`g++`) turns `.cpp` source files into a native executable for one platform. An `.exe` built on Windows doesn't run on Linux.
- **"Trust the programmer."** C++ lets you write code that makes no sense without stopping you (out-of-bounds array access, uninitialized variables). Knowing what *not* to do matters almost as much as knowing what to do, so compiler warnings should always be on.
- **The language version matters.** C++11 is the start of "modern C++"; I use **C++20** (`-std=c++20`), the newest standard my compiler supports well.

### Other notes

- Machine language is binary and specific to each CPU family; assembly is its human-readable form, translated by an assembler.
- High-level languages hide the hardware. A **compiler** translates everything ahead of time (fast, standalone executable); an **interpreter** translates while running (slower, must be installed). Java is a hybrid: it compiles to bytecode and the JVM runs it.
- C was created by Dennis Ritchie (1972, Bell Labs); C++ by Bjarne Stroustrup (from 1979) as an extension of C, adding object-oriented programming. Standards: C++98, 03, 11, 14, 17, 20, 23.
- C++ strengths: performance and fine control over memory. Used in games, embedded systems, real-time systems, finance and AI.
- Development steps: define the problem, plan the solution, write, compile, link, test, debug. Planning is the most neglected step. Most of a program's life is maintenance.
- Source files use the `.cpp` extension; the main file is usually `main.cpp`.

## 0.5 Compiler, linker and libraries

## 0.7 Compiling your first program

## 0.8 A few common C++ problems

## 0.9–0.12 Configuring the compiler
