#include <iostream>

int main()
{

    char ch1, ch2, ch3;

    std::cout << "Digite um caractere: ";
    std::cin >> ch1;

    if (isupper(ch1))
    {
        std::cout << ch1 << " é uma letra maiúscula." << std::endl;
    }
    else if (islower(ch1))
    {
        std::cout << ch1 << " é uma letra minúscula." << std::endl;
    }
    else if (isdigit(ch1))
    {
        std::cout << ch1 << " é um dígito." << std::endl;
    }
    else
    {
        std::cout << ch1 << " é outro tipo de caractere." << std::endl;
    }

    ch2 = 81;
    std::cout << "ch2 em formato decimal: " << static_cast<int>(ch2) << std::endl;
    std::cout << "ch2 em formato octal: " << std::oct << static_cast<int>(ch2) << std::endl;
    std::cout << "ch2 em formato hexadecimal: " << std::hex << static_cast<int>(ch2) << std::endl;
    std::cout << "ch2 como caractere: " << ch2 << std::endl;

    ch3 = tolower(ch2);
    std::cout << "ch3 em formato decimal: " << static_cast<int>(ch3) << std::endl;
    std::cout << "ch3 em formato octal: " << std::oct << static_cast<int>(ch3) << std::endl;
    std::cout << "ch3 em formato hexadecimal: " << std::hex << static_cast<int>(ch3) << std::endl;
    std::cout << "ch3 como caractere: " << ch3 << std::endl;

    return 0;
}
