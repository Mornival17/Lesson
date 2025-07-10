#include <iostream>

void hanoy(int n, int start, int ende) {
	if (n == 1) {
		std::cout<< "Переместить блинчик " << n << " со столбика " << start << " на столбик " << ende << std::endl;
	}
	else {
		int buf = 6 - start - ende;
		hanoy(n - 1, start, buf);
		std::cout << "Переместить блинчик " << n << " со столбика " << start << " на столбик " << ende << std::endl;
		hanoy(n - 1, buf, ende);
	}
}

int main()
{

	hanoy(3,1,3);

	return 0;
}
