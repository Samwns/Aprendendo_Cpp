#include <iostream>
#include <string>
#include <any>

int main (){
    std::string teste;

     while (true){

    std::cout << "Digite algum pra String teste: ";
    
    
    std::cin >> teste;
    
    

    std::cout<< "exibindo string teste: " << "\n" << teste;

    std::cout << "" << "\n" ;
    
    if (teste == "5")
    {
        break;
    }
    
    
    }



}