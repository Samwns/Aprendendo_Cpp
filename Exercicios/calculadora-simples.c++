#include <iostream>
#include <string>


int multiplicar(int a, int b){
    return a * b;
}

int dividir (int a,int b){
    if (b == 0){
        std::cout << "porfavor digite outro numero  não se divide por 0";
        return 0;
    }   
    return a / b;
}

int soma (int a,int b) {
   return a + b;
}

int subtrair (int a,int b) {
    return a - b;
}

int main() {

    while (true)
    {
        
        int a ,b ,operasao;

        std::cout << "Digite o Primeiro  operador: ";

        std::cin >> a;

        std::cout << "Digite o Segundo  operador: ";

        std::cin >> b;

        std::cout << "Escolha uma operação:\n";
        std::cout <<"1) multiplicar\n" << "2) Soma \n" << "3) dividr  \n" << "4) Subtrair \n" << "5) sair \n";
    
        std::cout << "Opção: ";
        std::cin >> operasao;

        
       if (operasao == 1){
        std::cout << "o seu resultado da operação e: " << multiplicar(a,b) << "\n"; 
        }else if (operasao == 2){
        std::cout << "o seu resultado da operação e: " << soma(a,b) << "\n"; 
        }else if (operasao == 3){
        std::cout << "o seu resultado da operação e: " << dividir(a,b) << "\n"; 
        }else if (operasao == 4){
        std::cout << "o seu resultado da operação e: " << subtrair(a,b) << "\n"; 
        }else if (operasao == 5){
            std::cout << "Saindo...\n";
            break;        
        }else{
            std::cout << "Opção inválida! Tente novamente.\n";
        }

     
        std::cout << "\n-------------------------\n";
    }
    
    return 0;
}