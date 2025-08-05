#include <iostream>
#include <vector>

void summ(std::vector<int> arr) {

	int y = arr.size();

	arr.push_back(y);

	std::cout << "Заполнение вектора: " << std::endl;

	for (int j = 0; j < y+1; j++) {
		std::cout << arr[j] << ' ';
	}
	}

int main()
{

	std::cout << "Введите длину вектора: ";

	int a; 
	std::cin >> a;
	std::vector<int> arr (a);


	for (int i = 0; i < a; i++) {
		arr[i] = i * i + 1;
	}
	std::cout << "Заполнение вектора: " << std::endl;

		for (int j = 0; j < a; j++) {
		std::cout << arr[j] << ' ';
	}

		std::cout << " " << std::endl;

	summ(arr);

	return 0;
}
