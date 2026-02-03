#include <iostream>
#include <string>

int main()
{
    std::string nome = "";
    std::cout << "Digite seu nome:";

    getline(std::cin, nome);

    int idade = 0;
    std::cout << "Digite sua idade:";

    std::cin >> idade;

    std::cout << "Seu nome e: " << nome << "\n";
    std::cout << "Sua idade e: " << idade << "\n";

   
    return 0;
}
