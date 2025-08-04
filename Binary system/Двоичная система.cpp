#include <iostream>

void dvo(int n)
{
	if (n / 2 != 0) {
		dvo(n / 2);
	}
	std::cout << n % 2;
	}

int main()
{
	std::cout << "Введите число: ";
	int n;
	std::cin >> n;
	std::cout << "Число в двоичной степени: ";
	dvo(n);

}

//#include <iostream>
//
//void dvo(int n, int v)
//{
//	if ((n / v) != 0) {
//		dvo(n / v, v);
//	}
//	std::cout << n % v;
//}
//
//int main()
//{
//  std::cout << "Введите число: ";
//	int n;
//	std::cin >> n;
// 
//  std::cout << "Введите систему счисления: ";
//	int v;
//	std::cin >> v;
//
//  std::cout << "Число в << v <<"-ой системе счисления: ";
//	dvo(n, v);
//
//}