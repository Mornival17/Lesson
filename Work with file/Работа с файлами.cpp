#include <iostream>
#include <fstream>
#include <string>

void sort(int arr[], int n) {

    std::ofstream outFile("output.txt");

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int buf = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = buf;
            }
        }
    }

    for (int h = 0; h < n; h++) {

        outFile << arr[h]<< " ";

    }

    outFile.close();

}

int main() {
    
    std::ofstream inpFile("input.txt"); // Открыть файл на запись
                                                 // Одновременно нельзя считывать и зписывать в один файл
    std::ifstream inpFile_chit("input.txt"); // Открыть файл на считывание

    if (!inpFile) {
        std::cerr << "Не удалось открыть файл для записи." << std::endl;
        return 1; // Проверка на ошибки
    }

    int n;
    std::cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    //for (int i = 0; i < n; i++) {

    //    inpFile << arr[i] << " ";

    //}

    std::string line;
    while (std::getline(inpFile_chit, line)) {  // Считываем файл построчно
        std::cout << line << std::endl;  // Выводим строку на экран
    }

    sort(arr, n);
        
    inpFile.close();  // закрыть файл

    delete[] arr;
    return 0;
}