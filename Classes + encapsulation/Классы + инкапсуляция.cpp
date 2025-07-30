#include <iostream>
#include <string>

class Person {

private:

	std::string name;
	int age;

public:

	std::string GetName() {

		return name;

	}

	int GetAge() {

		return age;

	}

	void SetName(std::string Names) {

		name = Names;

	}

	void SetAge(int Ages) {

		age = Ages;

	}

		void print() {

		std::cout << "Name: " << name << std::endl;
		std::cout << "Age: " << age;

	}

};

int main()
{

	Person person;

	person.SetAge(25);

	person.SetName("Job");

	person.print();

	int age_get = person.GetAge();

	std::string name_get = person.GetName();

	std::cout << " " << std::endl;

	std::cout << "Geter name: " << name_get << std::endl;

	std::cout << "Geter age: " << age_get << std::endl;

    return 0;
}
