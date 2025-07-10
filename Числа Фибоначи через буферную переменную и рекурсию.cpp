
#include <iostream>


int fib(int n) {

    if (n <= 1)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int a1 = 1;
    int a2 = 1;

    for (int i = 0; i < 10; i++) {

        int buf = a1 + a2;
        std::cout << buf << " ";
        a1 = a2;
        a2 = buf;

    }

    std::cout << " " << std::endl << std::endl;

    int n = 0;

    for (int i = 0; i < 10; i++) {

        n++;

        std::cout << fib(n) << " ";

    }

    return 0;
}

