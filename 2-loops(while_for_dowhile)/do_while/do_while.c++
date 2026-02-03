#include <iostream>

int main() {
   //Em do while
   //O código dentro do do {} 
   //sempre será executado pelo menos uma vez, mesmo que a condição seja falsa.

    //exemplo:
    int senha;
     
    do {
        std::cout << "Digite a senha: ";
        std::cin >> senha;
        std::cout << "Senha incorreta, Digite novamente.\n"; // Continua pedindo até que a senha seja correta
        
    } while (senha != 1234); { // Verifica a condição após executar o bloco
        std::cout << "Acesso permitido!\n";
    }

    

    return 0;
}


