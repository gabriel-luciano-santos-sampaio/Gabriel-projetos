#include <iostream>
#include <iomanip> // Para usar std::fixed e std::setprecision
#include <windows.h> // Para usar SetConsoleOutputCP no Windows

int main(){
    SetConsoleOutputCP(CP_UTF8);
    double base, altura, area, perimetro;
    do {
        std::cout << "\nPor favor, informe a base da sala: ";
        std::cin >> base;
        if (base <= 0) {
            break;
        }
        std::cout << "Por favor, informe a altura da sala: ";
        std::cin >> altura;
        
        area = base * altura;
        perimetro = 2 * (base + altura);
        
        std::cout << "A área da sala é: " << std::fixed << std::setprecision(2) << area << " unidades de área" << std::endl;
        std::cout << "O perímetro da sala é: " << std::fixed << std::setprecision(2) << perimetro << " unidades de comprimento" << std::endl;
    } while (base != 0);
    
    return 0;
}
