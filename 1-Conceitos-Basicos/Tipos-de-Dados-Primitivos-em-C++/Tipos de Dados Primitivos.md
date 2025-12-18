# 🔢 Tipos de Dados Primitivos em C++

<div align="center">
<img src="https://media1.tenor.com/m/3B9fNHbfAxcAAAAd/anime-animecomputer.gif" width="350" />
</div>

## 📖 O que você vai aprender aqui

- ✅ Tipos numéricos: `int`, `unsigned int`, `float`, `double`
- ✅ Caracteres: `char`
- ✅ Booleanos: `bool`
- ✅ Strings: `std::string`
- ✅ Tamanhos: `size_t`
- ✅ Diferença entre tipos e quando usar cada um

---

## 📝 Código

```cpp
#include <iostream>
#include <string>

int main() {

    // no C++ não e obrigatorio definir um valor para uma variavel
    // uma variavel nao definida aloca um valor aleatorio(gera um lixo na memoria)

    int idade = 20;           // Número inteiro
    unsigned int numero = 10; // unsigned = só aceita números positivos
    
    float altura = 1.75f;     // Número decimal (menor precisão)
    double peso = 70.5;       // Número decimal (maior precisão)
    char letra = 'C';         // Um caractere
    bool ativo = true;        // Verdadeiro ou falso
    size_t size = 0;          // Tipo para tamanhos (sempre positivo)

    // apesar de não ser considerado diretamente um dado primitivo
    // ainda sim string faz parte deles
    std::string nome = "Julia";
    
    std::cout << "Nome: " << nome << std::endl;
    return 0;
}
```

---

## 🔍 Tabela de Tipos de Dados

| Tipo | Tamanho | Descrição | Exemplo |
|------|---------|-----------|---------|
| `int` | 4 bytes | Números inteiros (-2 bilhões a +2 bilhões) | `int idade = 25;` |
| `unsigned int` | 4 bytes | Apenas números positivos (0 a 4 bilhões) | `unsigned int pontos = 100;` |
| `float` | 4 bytes | Números decimais (6-7 dígitos de precisão) | `float altura = 1.75f;` |
| `double` | 8 bytes | Números decimais (15 dígitos de precisão) | `double peso = 70.5;` |
| `char` | 1 byte | Um único caractere | `char letra = 'A';` |
| `bool` | 1 byte | Verdadeiro ou falso | `bool ativo = true;` |
| `size_t` | 8 bytes | Tamanhos e índices (sempre ≥ 0) | `size_t tamanho = 10;` |
| `std::string` | variável | Texto (sequência de caracteres) | `std::string nome = "João";` |

---

## ⚠️ Importante: Variáveis Não Inicializadas

```cpp
int numero;  // ⚠️ CUIDADO! Contém "lixo" da memória
std::cout << numero << std::endl;  // Valor imprevisível!
```

**Sempre inicialize suas variáveis!**

```cpp
int numero = 0;  // ✅ Correto
```

---

## 💡 Quando Usar Cada Tipo?

### `int` vs `unsigned int`
```cpp
int temperatura = -10;     // ✅ Pode ser negativo
unsigned int pontuacao = 100; // ✅ Nunca será negativo
```

### `float` vs `double`
```cpp
float pi = 3.14159f;       // ✅ Para valores menos precisos (economia de memória)
double piPreciso = 3.14159265358979; // ✅ Para cálculos científicos
```

### `char` vs `std::string`
```cpp
char inicial = 'J';        // ✅ Um único caractere
std::string nome = "João"; // ✅ Texto completo
```

### `size_t`
```cpp
size_t tamanho = texto.length(); // ✅ Para tamanhos e índices
```

---

## 🚀 Como Compilar

### Linux / macOS
```bash
g++ var.c++ -o var
./var
```

### Windows (MinGW)
```bash
g++ var.c++ -o var.exe
var.exe
```

### VS Code
Abra `var.c++` e pressione **F5**

---

## 📚 Próximos Passos

Agora que você já conhece os tipos de dados:
- **Entrada e Saída** → Receber valores do usuário
- **Operadores** → Fazer cálculos
- **Condicionais** → Tomar decisões baseadas em valores

<div align="center">
<img src="https://media1.tenor.com/m/vPxOcuipoksAAAAd/bocchi-punch.gif" width="250" />
</div>
