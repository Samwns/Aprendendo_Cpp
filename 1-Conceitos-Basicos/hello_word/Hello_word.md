# 🌍 Hello World - Olá Mundo em C++

<div align="center">
<img src="https://media1.tenor.com/m/BJ-9w-MUVCMAAAAd/tis100-sad.gif" width="300" />
</div>

## 📖 O que você vai aprender aqui

- ✅ Estrutura básica de um programa C++
- ✅ Como usar `std::cout` para exibir mensagens
- ✅ Diferença entre `\n` e `std::endl`
- ✅ Como comentar seu código

---

## 📝 Código

```cpp
#include <iostream>

int main() {

   std::cout << "Hello World!\n"; //ola mundo em C++
   std::cout << "Hello\nworld";
   
   // o \n uma forma otimizada do "std::endl" subistiuido por ele nos casos:
   
    //✅ Use \n na maioria dos casos → Mais rápido e eficiente.
    //✅ Use std::endl apenas quando forçar a saída imediata for necessário (exemplo: debug).

    //  para comenta em uma linha use : //
     /*para comeenta em
     multiplas linhas*/
     // use:  /**/

   return 0;// para finaliza o programa
}
```

---

## 🔍 Explicação Linha por Linha

### `#include <iostream>`
Inclui a biblioteca padrão de entrada e saída do C++. Sem ela, não conseguimos usar `std::cout`.

### `int main() { ... }`
A função principal do programa. Todo programa C++ começa executando a partir daqui.

### `std::cout << "Hello World!\n";`
Imprime "Hello World!" no terminal seguido de uma quebra de linha (`\n`).

### `\n` vs `std::endl`
- **`\n`**: Apenas quebra a linha (mais rápido)
- **`std::endl`**: Quebra a linha E força a saída imediata do buffer

**Recomendação**: Use `\n` na maioria dos casos!

### `return 0;`
Indica que o programa terminou com sucesso.

---

## 🚀 Como Compilar e Executar

### Linux / macOS
```bash
g++ Hello_word.c++ -o hello
./hello
```

### Windows (MinGW)
```bash
g++ Hello_word.c++ -o hello.exe
hello.exe
```

### VS Code
1. Abra o arquivo `Hello_word.c++`
2. Pressione **F5** ou clique em **Run**
3. O programa será compilado e executado automaticamente

---

## 💡 Comentários em C++

```cpp
// Comentário de uma linha

/*
   Comentário de
   múltiplas linhas
*/
```

---

## 📚 Próximos Passos

Agora que você já sabe fazer o Hello World, vamos para:
- **Variáveis e Tipos de Dados** → Armazenar informações
- **Entrada e Saída** → Interagir com o usuário
- **Condicionais** → Tomar decisões no código

<div align="center">
<img src="https://media1.tenor.com/m/v-d5E2Xnv_sAAAAd/lain-serial-experiments-lain.gif" width="250" />
</div>
