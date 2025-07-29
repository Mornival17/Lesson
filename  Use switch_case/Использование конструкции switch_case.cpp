#include <iostream>

int abrabochik(int a, int b) {

    char g;
    std::cout << "Введите значение операцию: ";
    std::cin>>g;

    switch (g)
    {
    case '+': {
        std::cout << a << " + " << b << " = " << a + b << std::endl;
        break;
    }
    case '-': {
        std::cout << a << " - " << b << " = " << a - b << std::endl;
        break;
    }
    case '*': {
        std::cout << a << " * " << b << " = " << a * b << std::endl;
        break;
    }
    case '/': {
        std::cout << a << " / " << b << " = " << a / b << std::endl;
        break;
    }
    default:
        std::cout << "Ты даун!" << std::endl;
        break;
     }
    return 0;
}


int main()
{

    int a, b;

    std::cout << "Введите значение а: ";
    std::cin >> a;

    std::cout << "Введите значение b: ";
    std::cin >> b;

    abrabochik(a, b);

    return 0;
}

