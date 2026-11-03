# Daily Learning Log

![Java 17](https://img.shields.io/badge/Java-17-ED8B00?logo=openjdk&logoColor=white)
![Spring Boot 3](https://img.shields.io/badge/Spring_Boot-3-6DB33F?logo=springboot&logoColor=white)
![Maven](https://img.shields.io/badge/Maven-C71A36?logo=apachemaven&logoColor=white)
![MySQL](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=white)

My study log: the code I write while working through courses, organized by language, with one commit per lesson so the history shows the progress step by step. Back-end Java courses live in `java/`, and C++ (for my Computer Science degree) lives in `cpp/`.

## Contents

- [What's inside](#whats-inside)
- [Repository structure](#repository-structure)
- [How I organize the commits](#how-i-organize-the-commits)
- [Running a module](#running-a-module)
- [Credits](#credits)

## What's inside

| Module | Topic | What I practiced | Stack |
|---|---|---|---|
| [`java/level-2/java-exceptions`](java/level-2/java-exceptions) | Exception handling | `try/catch`, checked vs. unchecked exceptions, custom exceptions, a global exception handler returning structured errors | Spring Boot 3.1, MySQL, Flyway |
| [`java/level-2/java-refactoring`](java/level-2/java-refactoring) | Refactoring | Extracting methods and services, removing duplication, an HTTP client layer, domain classes, Jackson, a first unit test and the Command pattern | Java 17, Jackson, JUnit |
| [`java/level-2/java-good-programming-practices`](java/level-2/java-good-programming-practices) | Good practices | Separation of concerns: moving business rules out of the controller into services | Spring Boot 3.1, MySQL, Flyway |
| [`java/level-3/java-spring-security`](java/level-3/java-spring-security) | Best practices and security | Applying good practices to a REST API and securing it with Spring Security (in progress) | Spring Boot 3, Spring Security |
| [`cpp`](cpp) | C++ fundamentals | Udemy C++ course sections and Beecrowd problems for my C++ subject at UVA (in progress) | C++20, g++ |

The level-2 modules are built around **Adopet**, a fictional pet adoption platform used throughout the courses. Each module folder has its own README with details.

The C++ work has its own overview in [`cpp/README.md`](cpp/README.md).

## Repository structure

```
daily-learning-log/
├── java/                                  ← back-end Java courses
│   ├── level-2/                           ← course level
│   │   ├── java-exceptions/               ← one complete project per topic
│   │   ├── java-refactoring/
│   │   └── java-good-programming-practices/
│   └── level-3/
│       └── java-spring-security/
└── cpp/                                   ← C++ studies
    ├── beginning-cpp/                     ← Udemy course, one folder per section
    └── beecrowd/                          ← practice problems
```

In `java/`, only the **level** and the **topic** become folders, and each topic is a self-contained Maven project that can be opened and run on its own. In `cpp/`, the course is split by section and Beecrowd problems have their own folder; see [`cpp/README.md`](cpp/README.md).

## How I organize the commits

Inside each topic, every lesson I study becomes a commit describing what was done, for example:

```
creating our exception
throwing our exception
capturing other exceptions
```

The commit history of a folder is the record of how that project evolved lesson by lesson, so I don't keep a separate progress table — `git log -- java/level-2/java-exceptions level-2/java-exceptions` tells the story (the second path covers the commits made before the Java modules moved into `java/`).

## Running a module

Each module is a standard Maven project with its own wrapper:

```bash
cd java/level-2/<module>
./mvnw spring-boot:run      # Spring Boot modules
```

Some modules need a local MySQL database or a companion API; the module README lists what it needs.

## Credits

The Adopet projects and their starting code come from [Alura](https://www.alura.com.br) courses on Java and back-end development. The changes in each module are my own work while following the lessons.

## Author

**João Abreu** — back-end developer and Computer Science student in Rio de Janeiro, Brazil.

[GitHub](https://github.com/jg-abreu) · [LinkedIn](https://www.linkedin.com/in/jo%C3%A3o-abreuuu) · jgabreudev@gmail.com
