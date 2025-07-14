#include <iostream>

void diapozon(bool arr[], int n) {

    for (int i = 2; i <= n; i++) {
        arr[i] = true;
    }

    for (int i = 2; i * i <= n; i++) {
        if (arr[i]) {
            for (int j = i * i; j <= n; j += i) {
                arr[j] = false;
            }
        }
    }

}

void vavod(bool arr[], int n) {

    for (int y = 2; y <= n; y++) {
        if (arr[y]) {
            std::cout << y << " ";
        }
    }

}

int main()
{
    int n;
    std::cin >> n;

    if (n < 2) {
        std::cout << "Введите число больше 2!" << std::endl;
        return 0;
    }

    bool *arr = new bool[n + 1]; 


    diapozon(arr, n);
    vavod(arr, n);


    std::cout << std::endl; 
    delete[] arr; 
    return 0;
}