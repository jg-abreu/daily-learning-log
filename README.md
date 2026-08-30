# 📚 Daily Learning Log

Repositório onde registro meus estudos: anotações, exercícios e pequenos projetos feitos ao longo dos cursos que faço.

Não atualizo esse README a cada estudo — quem mostra a constância aqui é o **histórico de commits**, não uma tabela manual. O README só documenta a estrutura de pastas, pra eu (e quem mais olhar) saber se localizar rapidamente.

## 🗂️ Estrutura de pastas

Apenas **nível** e **assunto** viram pasta:

```
nível → assunto → src
```

- **Nível**: a camada mais alta, agrupa vários assuntos.
- **Assunto**: dentro de cada nível, cada assunto (equivalente a um módulo do curso) é uma pasta com o projeto completo daquele assunto.

**Conjunto** e **aula** não viram pasta — são a granularidade dos **commits** dentro do projeto do assunto. Cada assunto tem 4 conjuntos, e cada conjunto tem 4 aulas; cada aula estudada vira um commit no projeto daquele assunto.

### Exemplo de pastas

```
daily-learning-log/
├── README.md
├── nivel-01/
│   ├── heranca/
│   │   ├── src/
│   │   └── ...
│   ├── spring-data-jpa/
│   │   ├── src/
│   │   └── ...
│   └── polimorfismo/
│       ├── src/
│       └── ...
├── nivel-02/
│   ├── testes-automatizados/
│   │   ├── src/
│   │   └── ...
│   └── api-rest/
│       ├── src/
│       └── ...
└── nivel-03/
```

### Exemplo de commits dentro de um assunto

Cada commit descreve o que foi feito naquela aula

```
cria classe Pessoa com atributos e construtor
implementa herança entre Pessoa e Funcionario
adiciona sobrescrita de métodos com @Override
implementa polimorfismo na classe Funcionario
...
```

Assim, o histórico de commits de cada assunto já mostra o progresso aula a aula — sem precisar duplicar isso em pastas ou em documentação manual.

---

> Repositório vivo — a estrutura de pastas acima é fixa, o conteúdo cresce conforme os estudos avançam.
