
#include <iostream>
#include <string>

class Person {

private:

    std::string name;
        int age;

public:

    Person(std::string imia, int vozrast) {

        name = imia;
        age = vozrast;
        std::cout << "Вызвался конструктор 321" << std::endl;

    }

    ~Person() {

        std::cout << "Вызвался деструктор 123" << std::endl;

    }

    void print() {

        std::cout << "Имя: " << name << std::endl;
        std::cout << "Возраст: " << age << std::endl;

    }

};

int main()
{

    setlocale(LC_ALL, "ru");
    
    Person person("Мария", 23);

    person.print();

    return 0;

}

