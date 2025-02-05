#include <iostream>
int main(int argc, char** argv){
    int x = 0;
    std::cin >> x;
    if (x < 0) {
        std::cout << "Seu número é negativo";
    } else if (x > 0) {
        std::cout << "seu número é positivo";
    } else {
        std::cout << "valor inválido.";
    }
    //std::cout << "testando: " + std::to_string(x);
    return 0;
}
