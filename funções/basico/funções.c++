//Hoje são funções temos basicamente assim

#include <iostream>

std::string mensagem(); //isto é um prototipo de função indica que vai existir uma função que vai retornar uma string de nome mensagem
std::string dinosaur();

int main() { //Isso basicamnete cria a função principal é daqui que o programa inicializa primeiramente roda essa função
    std::cout << "Função principal \n";
    std::string palavra = dinosaur(); //armazena o retorno da função em palavra
    std::cout << palavra << std::endl; //escreve na tela o c
    return 0;
}

std::string dinosaur(){
    return "raptor";
}
