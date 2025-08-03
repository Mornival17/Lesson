#include <iostream>

void sravnenie(int a, int b) {

	int Max = (a > b) ? a : b;

	std::cout << "Максимальное число: " << Max << std::endl;

}

void sravn(int a, int b) {

	std::cout << "_____________________________" << std::endl << std::endl;

sraavni: a, b;

	std::cout << "Введите параметр a: (goto) ";
	std::cin >> a;

	std::cout << "Введите параметр b: (goto) ";
	std::cin >> b;

	int Max2 = (a > b) ? a : b;

	std::cout << "Максимальное число: " << Max2 << std::endl;

	char r = 'q';

	std::cout << "Повторить q, Не повторять w: ";

	std::cin >> r;

	if (r == 'q') {
		std::cout << "_____________________________" << std::endl << std::endl;
		goto sraavni;
	}
	else {
		std::cout << "Пока"<< std::endl;
	}

}


int main()
{

	int a, b;

	std::cout << "Введите параметр a: ";
	std::cin >> a;

	std::cout << "Введите параметр b: ";
	std::cin >> b;

	sravnenie(a, b);

	sravn(a, b);


	return 0;
}

