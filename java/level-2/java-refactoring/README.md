# Java Refactoring — Adopet Console

![Java 17](https://img.shields.io/badge/Java-17-ED8B00?logo=openjdk&logoColor=white)
![Maven](https://img.shields.io/badge/Maven-C71A36?logo=apachemaven&logoColor=white)
![JUnit 5](https://img.shields.io/badge/JUnit-5-25A162?logo=junit5&logoColor=white)

A console client for the Adopet API (list and register shelters, list and import pets), used to practice refactoring a messy codebase step by step without changing its behavior.

Part of my [Daily Learning Log](../../README.md).

## What I practiced

- Extracting methods and removing duplicated code
- Splitting responsibilities into `AbrigoService` and `PetService`
- Extracting the HTTP calls into a dedicated client (`ClientHttpConfiguration`)
- Introducing domain classes (`Abrigo`, `Pet`) and mapping JSON with Jackson
- Writing a first unit test with JUnit and Mockito (`AbrigoServiceTest`)
- Replacing a large `switch` with the **Command pattern** (`Command`, `CommandExecutor` and one class per menu option)

## Tech stack

Java 17 · Maven · Jackson · Gson · JUnit 5 · Mockito

## Running

The console talks to the Adopet API at `http://localhost:8080`. That API is provided as `api.jar` in the Alura course material and isn't versioned here because of its size; place it in this folder and start it first:

```bash
java -jar api.jar
```

Then run `br.com.alura.AdopetConsoleApplication` from your IDE, or:

```bash
mvn compile exec:java -Dexec.mainClass=br.com.alura.AdopetConsoleApplication
```

[`pets.csv`](pets.csv) is a sample file for the "import pets" option.

## Credits

Starting code and course by [Alura](https://www.alura.com.br). The commits in this folder are my work lesson by lesson.
