#include <iostream>
#include <string>

int main(){
    // Arrays são estruturas que permitem armazenar múltiplos valores do mesmo tipo em uma única variável.
    // Um array pode armazenar qualquer tipo de dado, como números inteiros, strings ou objetos.
    int myArry[10]; // Criando um array de inteiros com 10 posições. 
                     // Isso significa que podemos armazenar 10 números inteiros neste array.

    // Agora vamos usar um laço 'for' para percorrer o array e atribuir valores a ele.
    // O laço 'for' irá repetir 10 vezes, uma para cada índice do array (de 0 a 9).
    for (int i = 0; i < 10; i++)
    {
        // Atribuindo a cada posição do array o valor de 'i + 1'.
        // Ou seja, o primeiro elemento (índice 0) será 1, o segundo (índice 1) será 2, e assim por diante até o 10º elemento.
        myArry[i] = i + 1; 
    }

    // Agora vamos imprimir o conteúdo do array usando outro laço 'for'.
    // Vamos percorrer o array novamente e mostrar o valor de cada posição no console.
    for (int i = 0; i < 10; i++)
    {
        // Imprime o valor de cada índice do array, seguido de uma quebra de linha.
        std::cout << myArry[i] << "\n"; 
    }
    
    return 0;
}
