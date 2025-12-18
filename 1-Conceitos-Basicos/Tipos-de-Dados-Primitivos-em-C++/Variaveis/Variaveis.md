# 📦 Variáveis em C++

<div align="center">
<img src="https://media1.tenor.com/m/vPxOcuipoksAAAAd/bocchi-punch.gif" width="300" />
</div>

## 📖 O que você vai aprender aqui

- ✅ O que são variáveis
- ✅ Como declarar e inicializar variáveis
- ✅ Por que sempre inicializar variáveis
- ✅ Boas práticas para nomear variáveis

---

## 🧩 O que é uma Variável?

Uma **variável** é como uma caixa que guarda um valor na memória do computador. Ela tem:
- **Nome**: Como você vai chamar ela no código
- **Tipo**: Que tipo de dado ela guarda (`int`, `float`, `string`, etc.)
- **Valor**: O conteúdo que ela armazena

```cpp
int idade = 25;
//  ↑    ↑    ↑
// tipo nome valor
```

---

## 📝 Declaração e Inicialização

### Declaração
Criar a variável **sem** valor inicial:
```cpp
int numero;  // ⚠️ Contém lixo da memória!
```

### Inicialização
Criar a variável **com** valor inicial:
```cpp
int numero = 10;  // ✅ Valor definido
```

### ⚠️ Perigo: Variáveis Não Inicializadas
```cpp
int numero;  // Contém valor aleatório (lixo)
std::cout << numero << std::endl;  // 🚨 Comportamento indefinido!
```

**Resultado possível**: `42`, `-1827364`, `0`, qualquer coisa!

**Sempre inicialize suas variáveis!**

---

## 💡 Exemplos de Tipos de Variáveis

```cpp
// Números inteiros
int idade = 20;
unsigned int pontos = 100;  // Apenas positivos

// Números decimais
float altura = 1.75f;
double peso = 70.5;

// Caracteres
char letra = 'C';

// Booleanos
bool ativo = true;

// Strings
std::string nome = "Julia";

// Tamanhos
size_t tamanho = 0;
```

---

## 📏 Escopo de Variáveis

### Variáveis Locais
Existem apenas dentro de um bloco `{ }`:

```cpp
int main() {
    int x = 10;  // Existe apenas dentro de main()
    
    if (x > 5) {
        int y = 20;  // Existe apenas dentro do if
        std::cout << x << y << "\n";  // ✅ Funciona
    }
    
    std::cout << x << "\n";  // ✅ Funciona
    std::cout << y << "\n";  // ❌ ERRO! y não existe aqui
    
    return 0;
}
```

---

## 🏷️ Boas Práticas para Nomear Variáveis

### ✅ Bons Nomes
```cpp
int idade = 25;
float salario = 5000.0f;
std::string nomeCompleto = "João Silva";
bool estaAtivo = true;
```

### ❌ Nomes Ruins
```cpp
int a = 25;           // O que é "a"?
float x = 5000.0f;    // Muito genérico
std::string str = "João Silva";  // Não diz nada
bool flag = true;     // Flag de quê?
```

### 📋 Regras de Nomenclatura
- Use **camelCase**: `nomeCompleto`, `idadeUsuario`
- Seja **descritivo**: `salarioBruto` em vez de `s`
- **Não comece com número**: `1variavel` ❌ | `variavel1` ✅
- **Não use espaços**: `nome completo` ❌ | `nomeCompleto` ✅
- **Evite acentos**: `número` ❌ | `numero` ✅

---

## 🔄 Modificando Variáveis

```cpp
int contador = 0;
std::cout << contador << "\n";  // 0

contador = 5;
std::cout << contador << "\n";  // 5

contador = contador + 10;
std::cout << contador << "\n";  // 15

contador += 5;  // Atalho para: contador = contador + 5
std::cout << contador << "\n";  // 20
```

---

## 🎯 Constantes

Variáveis que **não podem ser modificadas**:

```cpp
const int MAX_JOGADORES = 4;
MAX_JOGADORES = 5;  // ❌ ERRO! Constante não pode mudar
```

**Convenção**: Constantes em MAIÚSCULAS.

---

## 🚀 Exemplo Prático Completo

```cpp
#include <iostream>
#include <string>

int main() {
    // Declaração e inicialização
    std::string nome = "João";
    int idade = 25;
    float altura = 1.75f;
    bool estudante = true;
    
    // Modificando variáveis
    idade = idade + 1;  // Aniversário!
    
    // Exibindo valores
    std::cout << "Nome: " << nome << "\n";
    std::cout << "Idade: " << idade << " anos\n";
    std::cout << "Altura: " << altura << "m\n";
    std::cout << "É estudante? " << (estudante ? "Sim" : "Não") << "\n";
    
    return 0;
}
```

**Saída:**
```
Nome: João
Idade: 26 anos
Altura: 1.75m
É estudante? Sim
```

---

## 📚 Arquivos Relacionados

- [`var.c++`](var.c++) - Exemplos de tipos de dados
- [`entrada_saida.c++`](entrada_saida.c++) - Lendo variáveis do usuário

---

## 📚 Próximos Passos

Agora que você domina variáveis:
- **Operadores** → Fazer cálculos com variáveis
- **Condicionais** → Tomar decisões baseadas em valores
- **Arrays** → Armazenar múltiplos valores

<div align="center">
<img src="https://media1.tenor.com/m/xei0iF6HWToAAAAd/pjsk-pjsk-anime.gif" width="250" />
</div>
