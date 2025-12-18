# ⌨️🖥️ Entrada e Saída de Dados em C++

<div align="center">
<img src="https://media1.tenor.com/m/o2pWh74vNLMAAAAC/welcome-to-the-nhk-yamazaki.gif" width="350" />
</div>

## 📖 O que você vai aprender aqui

- ✅ Como receber dados do usuário com `std::cin`
- ✅ Como ler strings com espaços usando `std::getline`
- ✅ Como exibir informações com `std::cout`
- ✅ Interação completa: entrada → processamento → saída

---

## 📝 Código

```cpp
//tambem e possivel fazer entrada e saida de dados em C++

//cabecario

//bibliotecas
#include <iostream>
#include <string>

//função principal
int main(){
    //definimos algumas variaveis
    std::string nome = "";
    int idade = 0;
    float peso = 0;
    float altura = 0;

    // agora vamos incia um imput para cada dado que foi armazenado ali

    std::cout << "Ola, Por Favor Digite Seu Nome: ";

    //agora vamo chama um input com "std::cin" ele joga o dado fornecido pelo usuario para uma variavel
    // atualizando o valor dela
    
    std::getline(std::cin, nome); // Lê o nome inteiro

    //agora vamos fazer isso para as outras variaveis

    std::cout << "Digite Sua Idade: ";
    std::cin >> idade;

    std::cout << "Digite Seu Peso: ";
    std::cin >> peso;

    std::cout << "Digite Sua Altura: ";
    std::cin >> altura;

    //agora vamos exibir os dados que foram coletados

    std::cout << "Você se chama: " << nome << "\n";
    std::cout << "Sua idade é: " << idade << "\n";
    std::cout << "Você Pesa: " << peso << "\n";
    std::cout << "Você Mede: " << altura << "\n";

    system("pause");
    return 0;
}
```

---

## 🔍 Explicação dos Comandos

### `std::cout` - Saída de Dados
Exibe mensagens na tela.

```cpp
std::cout << "Olá, mundo!" << std::endl;
std::cout << "Sua idade é: " << idade << "\n";
```

### `std::cin` - Entrada de Dados
Recebe dados do usuário.

```cpp
int numero;
std::cin >> numero;  // Usuário digita um número
```

### `std::getline` - Lê Strings com Espaços
O `std::cin` para de ler quando encontra espaço. Para ler nomes completos, use `std::getline`.

```cpp
std::string nome;
std::getline(std::cin, nome);  // Lê "João Silva" completo
```

---

## 🆚 Diferença entre `std::cin` e `std::getline`

### Exemplo com `std::cin`
```cpp
std::string nome;
std::cin >> nome;
// Usuário digita: "João Silva"
// nome = "João"  ❌ Perdeu o sobrenome!
```

### Exemplo com `std::getline`
```cpp
std::string nome;
std::getline(std::cin, nome);
// Usuário digita: "João Silva"
// nome = "João Silva"  ✅ Leu tudo!
```

---

## ⚠️ Problema Comum: Misturar `std::cin` e `std::getline`

```cpp
int idade;
std::string nome;

std::cin >> idade;        // Usuário digita: 25
std::getline(std::cin, nome); // ❌ Pula a leitura!
```

**Por quê?** O `std::cin` deixa o `\n` (Enter) no buffer.

**Solução:**
```cpp
std::cin >> idade;
std::cin.ignore();  // ✅ Remove o Enter do buffer
std::getline(std::cin, nome);
```

---

## 💡 Exemplo de Uso

### Entrada
```
Ola, Por Favor Digite Seu Nome: João Silva
Digite Sua Idade: 25
Digite Seu Peso: 70.5
Digite Sua Altura: 1.75
```

### Saída
```
Você se chama: João Silva
Sua idade é: 25
Você Pesa: 70.5
Você Mede: 1.75
```

---

## 🚀 Como Compilar

### Linux / macOS
```bash
g++ entrada_saida.c++ -o entrada
./entrada
```

### Windows (MinGW)
```bash
g++ entrada_saida.c++ -o entrada.exe
entrada.exe
```

### VS Code
Abra `entrada_saida.c++` e pressione **F5**

---

## 📋 Resumo

| Comando | Função | Uso |
|---------|--------|-----|
| `std::cout` | Exibir dados | `std::cout << "Texto" << variavel;` |
| `std::cin` | Ler entrada (sem espaços) | `std::cin >> variavel;` |
| `std::getline` | Ler linha completa (com espaços) | `std::getline(std::cin, variavel);` |
| `std::cin.ignore()` | Limpar buffer | `std::cin.ignore();` |

---

## 📚 Próximos Passos

Agora que você já sabe trabalhar com entrada e saída:
- **Operadores Aritméticos** → Fazer cálculos com os dados
- **Condicionais** → Tomar decisões baseadas nas entradas
- **Loops** → Repetir operações

<div align="center">
<img src="https://media1.tenor.com/m/xei0iF6HWToAAAAd/pjsk-pjsk-anime.gif" width="250" />
</div>
