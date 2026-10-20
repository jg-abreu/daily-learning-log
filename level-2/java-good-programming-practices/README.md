# Java Good Programming Practices — Adopet API

![Java 17](https://img.shields.io/badge/Java-17-ED8B00?logo=openjdk&logoColor=white)
![Spring Boot 3.1](https://img.shields.io/badge/Spring_Boot-3.1-6DB33F?logo=springboot&logoColor=white)
![MySQL](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=white)

The Adopet REST API (tutors, shelters, pets and adoption requests), used to study good programming practices in a Spring Boot application.

Part of my [Daily Learning Log](../../README.md).

## What I practiced

- **Separation of concerns**: moving the adoption business rules out of `AdocaoController` into `AdocaoService`, leaving the controller only with HTTP concerns
- Extracting email sending into its own `EmailService`
- Signaling rule violations with a validation exception instead of returning error responses from deep inside the logic

## Features of the API

- Register and update tutors
- Register shelters and their pets
- List pets available for adoption
- Request an adoption, then approve or reject it

## Tech stack

Java 17 · Spring Boot 3.1 (Web, Data JPA, Validation, Mail) · MySQL · Flyway migrations

## Running

Requirements: Java 17 and a local MySQL server. The database `adopet` is created automatically with user `root` and password `root` (see [`application.properties`](src/main/resources/application.properties)); the mail settings are placeholders.

```bash
./mvnw spring-boot:run       # http://localhost:8080
```

The UI layout for Adopet is available in [Figma](https://www.figma.com/file/TlfkDoIu8uyjZNla1T8TpH); this module is the back end only.

## Credits

Project and course by [Alura](https://www.alura.com.br) — instructor [Rodrigo Ferreira](https://cursos.alura.com.br/user/rodrigo-ferreira). The commits in this folder are my work while following the lessons.
