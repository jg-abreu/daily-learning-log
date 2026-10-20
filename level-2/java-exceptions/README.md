# Java Exceptions — Adopet API

![Java 17](https://img.shields.io/badge/Java-17-ED8B00?logo=openjdk&logoColor=white)
![Spring Boot 3.1](https://img.shields.io/badge/Spring_Boot-3.1-6DB33F?logo=springboot&logoColor=white)
![MySQL](https://img.shields.io/badge/MySQL-4479A1?logo=mysql&logoColor=white)

The Adopet pet adoption REST API, used to study how exceptions work in Java and how to handle them properly in a Spring Boot application.

Part of my [Daily Learning Log](../../README.md).

## What I practiced

- How the call stack behaves when an exception is thrown ([`PilhaDeExecucao.java`](src/main/java/PilhaDeExecucao.java))
- `try/catch` and handling exceptions inside controllers
- Checked vs. unchecked exceptions
- Creating and throwing a custom exception (`AdocaoException`) for business rule violations
- Centralizing error handling in a `GlobalExceptionHandler` that returns a structured `ResponseError`
- Bean Validation on request bodies

## Tech stack

Java 17 · Spring Boot 3.1 (Web, Data JPA, Validation) · MySQL · Flyway migrations

## Running

Requirements: Java 17 and a local MySQL server. The database `adopet_api` is created automatically; the connection uses the `root` user and the password from the `MYSQL_PASSWORD` environment variable.

```bash
export MYSQL_PASSWORD=your-password
./mvnw spring-boot:run       # http://localhost:8080
```

[`Adopet.postman_collection.json`](Adopet.postman_collection.json) has requests for pets, tutors and adoptions; `cachorro.jpg` and `gato.jpg` are sample images for the pet registration endpoint.

## Credits

Starting code and course by [Alura](https://www.alura.com.br). The commits in this folder are my work lesson by lesson.
