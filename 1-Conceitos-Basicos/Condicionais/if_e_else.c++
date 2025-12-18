#include <iostream>
#include <string>


int main(){

    // tambem e possivel usa conticionais como
// if & else else if

    //exemplo:

    // definimos  uma variavel idade
//e atribuimos um valor 10 a ela:

    // vai ser do tipo inteiro
    int idade = 10;

    
    // definimos uma variavel individo

    int individo = idade;
    // agora colocamos uma condição para verifica se o  inividuo e maior de idade ou menos  de  idade usando If
    //agora usando o if 

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