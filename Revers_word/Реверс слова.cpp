#include <iostream>
#include <string>

void revers(std::string slovo) {
	
	int dlina = slovo.length();

	for (int i = dlina - 1; i >= 0; i--) {
		std::string clov(1, slovo[i]);
		std::cout << clov;
	}

	}


int main()
{

	std::string slovo;
	std::cin >> slovo;

	revers(slovo);


	return 0;
}