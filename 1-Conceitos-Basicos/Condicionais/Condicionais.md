# 🔀 Condicionais em C++ - if, else, else if

<div align="center">
<img src="https://media1.tenor.com/m/BJ-9w-MUVCMAAAAd/tis100-sad.gif" width="300" />
</div>

## 📖 O que você vai aprender aqui

- ✅ Como usar `if` para tomar decisões
- ✅ Como usar `else` para alternativas
- ✅ Como usar `else if` para múltiplas condições
- ✅ Operadores de comparação: `>`, `<`, `>=`, `<=`, `==`, `!=`

---

## 📝 Código

```cpp
#include <iostream>
#include <string>

int main(){

    // tambem e possivel usa conticionais como
    // if & else else if

    //exemplo:

    // definimos uma variavel idade
    // e atribuimos um valor 10 a ela:

    // vai ser do tipo inteiro
    int idade = 10;

    // definimos uma variavel individo
    int individo = idade;
    
    // agora colocamos uma condição para verifica se o inividuo e maior de idade ou menor de idade usando If
    // agora usando o if 

    if (idade >= 18) {
        std::cout << "o individuo tem " << idade << " anos,é e de maior\n";
    }
    if (idade < 18) {
        std::cout << "o individuo tem " << idade << " anos,é e de menor\n";
    }
    else{
        std::cout << "o individuo não existe\n";
    }

    system("pause");
    
    return 0;
}
```

---

## 🔍 Explicação dos Condicionais

### `if` - Se (condição verdadeira)
```cpp
if (idade >= 18) {
    std::cout << "Maior de idade\n";
}
```
Executa o bloco **apenas se** a condição for verdadeira.

### `else` - Senão
```cpp
if (idade >= 18) {
    std::cout << "Maior de idade\n";
} else {
    std::cout << "Menor de idade\n";
}
```
Executa quando o `if` é **falso**.

### `else if` - Senão Se
```cpp
if (idade >= 18) {
    std::cout << "Maior de idade\n";
} else if (idade >= 13) {
    std::cout << "Adolescente\n";
} else {
    std::cout << "Criança\n";
}
```
Testa **múltiplas condições** em sequência.

---

## ⚖️ Operadores de Comparação

| Operador | Significado | Exemplo | Resultado |
|----------|-------------|---------|-----------|
| `==` | Igual a | `5 == 5` | `true` |
| `!=` | Diferente de | `5 != 3` | `true` |
| `>` | Maior que | `10 > 5` | `true` |
| `<` | Menor que | `3 < 8` | `true` |
| `>=` | Maior ou igual | `5 >= 5` | `true` |
| `<=` | Menor ou igual | `4 <= 6` | `true` |

---

## ⚠️ Problema no Código Original

O código tem uma lógica incorreta:

```cpp
if (idade >= 18) {
    std::cout << "de maior\n";
}
if (idade < 18) {  // ❌ Este if está separado!
    std::cout << "de menor\n";
}
else{
    std::cout << "não existe\n";  // ❌ Nunca será executado!
}
```

### Por quê?
O `else` está vinculado ao **segundo `if`**, não ao primeiro! 

Se `idade = 10`:
- Primeiro `if` não executa (10 < 18)
- Segundo `if` executa e imprime "de menor"
- `else` nunca executa porque o segundo `if` foi verdadeiro

---

## ✅ Código Corrigido

### Opção 1: Usar `else if`
```cpp
if (idade >= 18) {
    std::cout << "o individuo tem " << idade << " anos, é de maior\n";
} else if (idade > 0) {
    std::cout << "o individuo tem " << idade << " anos, é de menor\n";
} else {
    std::cout << "idade inválida\n";
}
```

### Opção 2: Usar apenas `if` e `else`
```cpp
if (idade >= 18) {
    std::cout << "o individuo tem " << idade << " anos, é de maior\n";
} else {
    std::cout << "o individuo tem " << idade << " anos, é de menor\n";
}
```

---

## 💡 Exemplos Práticos

### Verificar se um número é positivo, negativo ou zero
```cpp
int numero = -5;

if (numero > 0) {
    std::cout << "Positivo\n";
} else if (numero < 0) {
    std::cout << "Negativo\n";
} else {
    std::cout << "Zero\n";
}
```

### Verificar nota de um aluno
```cpp
float nota = 7.5;

if (nota >= 7.0) {
    std::cout << "Aprovado!\n";
} else if (nota >= 5.0) {
    std::cout << "Recuperação\n";
} else {
    std::cout << "Reprovado\n";
}
```

### Validar senha
```cpp
std::string senha = "1234";

if (senha == "1234") {
    std::cout << "Acesso liberado!\n";
} else {
    std::cout << "Senha incorreta!\n";
}
```

---

## 🚀 Como Compilar

### Linux / macOS
```bash
g++ if_e_else.c++ -o condicional
./condicional
```

### Windows (MinGW)
```bash
g++ if_e_else.c++ -o condicional.exe
condicional.exe
```

### VS Code
Abra `if_e_else.c++` e pressione **F5**

---

## 🧠 Operadores Lógicos (Bônus)

Combine múltiplas condições:

| Operador | Significado | Exemplo |
|----------|-------------|---------|
| `&&` | E (AND) | `(idade >= 18 && idade < 60)` |
| `\|\|` | OU (OR) | `(dia == "sábado" \|\| dia == "domingo")` |
| `!` | NÃO (NOT) | `!(idade < 18)` |

### Exemplo
```cpp
int idade = 25;
bool temCarteira = true;

if (idade >= 18 && temCarteira) {
    std::cout << "Pode dirigir!\n";
} else {
    std::cout << "Não pode dirigir\n";
}
```

---

## 📚 Próximos Passos

Agora que você domina condicionais:
- **Loops** (`for`, `while`) → Repetir blocos de código
- **Switch-case** → Alternativa ao `else if` para múltiplas opções
- **Funções** → Organizar e reutilizar código

<div align="center">
<img src="https://media1.tenor.com/m/3B9fNHbfAxcAAAAd/anime-animecomputer.gif" width="250" />
</div>
