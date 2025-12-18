#include <iostream>

#include <string>


int main() {

    // no C++ não e obrigatorio definir um valor para uma variavel
    // uma variavel  nao definida aloca  um valor aleatorio(gera um lixo na memoria)


    int idade = 20;      // Número inteiro
    unsigned int numero = 10; //  unsigned e meio que um tipo de dado que so aceita numeros positivos int
    
    float altura = 1.75f; // Número decimal (menor precisão)
    double peso = 70.5;  // Número decimal (maior precisão)
    char letra = 'C';    // Um caractere
    bool ativo = true;   // Verdadeiro ou falso
    size_t size = 0; //um tipo dado de para tamanho de coisas que não aceita numeros negativos



    // apesa de não ser  considerado diretamente um dado primitivo
    // ainda sim string faz  parte deles

    std::string nome = "Julia";
    std::cout << "Nome: " << nome << std::endl;
    return 0;

}