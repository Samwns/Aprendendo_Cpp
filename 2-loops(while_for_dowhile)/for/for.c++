#include <iostream>
#include <string>

//tambem e possivel usa um tipo de loop  chamado for
// que recebe varios parametros
// ele e um tipo de loop mais espesifico, com  mais controle

int main() {
    // O loop 'for' tem três partes:
    // 1. Inicialização: int i = 0 -> começamos com i = 0
    // 2. Condição: i <= 5 -> o loop roda enquanto i for menor ou igual a 5
    // 3. Atualização: i++ -> incrementamos i em +1 a cada repetição
    for (int i = 0; i <= 5; i++) {
        std::cout << "Numero: " << i << std::endl;
    }


    //  tambem e possivel  incrementa outros valores:
    for (int i = 0; i <= 5; i += 2) {
        std::cout << "Numero: " << i << std::endl;
    }

    for (int i = 0; i <= 100; i += 10) {
        std::cout << "Numero: " << i << std::endl;
    }

    return 0;
}
