#include<iostream>
#include <iomanip>
#include <windows.h>

    int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double valor_real, valor_dolar, cotacao;

    do
    {
        std::cout << "\nPor favor, informe o valor guardado no cofre: " << std::endl;
        std::cin >> valor_dolar;

        if (valor_dolar <= 0)
        {
            break;
        }

        std::cout << "Por favor, informe o valor da cotação atual: " << std::endl;
        std::cin >> cotacao;

        valor_real = valor_dolar * cotacao; // Corrigido o cálculo do valor_real

        std::cout << "O valor em real é: " << std::fixed << std::setprecision(2) << valor_real << std::endl;

    } while (valor_dolar != 0);

    return 0;
}
