#include <iostream>

void diapozon(int a, int b) {

    for (int i = a; i < b; i++) {

        bool g = true;

        for (int j = 2; j <= i / 2; j++) {

            if ((i % j) == 0) {

                g = false;

                break;

            }
        }

        if (g) {

            std::cout << i << " ";

        }
    }

}

int main()
{
    
    int a, b;

    std::cout << "Введите нижyюю границу промежутка: ";
    std::cin >> a;

    std::cout << "Введите верхнюю границу промежутка: ";
    std::cin >> b;

    diapozon(a, b);

    return 0;

}

