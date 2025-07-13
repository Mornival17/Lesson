#include <iostream>

using namespace std;

class Point {

private:

	int x;
	int y;

public:

	Point() {
		 x = 1;
		 y = 2;

		cout << "Место в памяти: " << this << endl;
	}

	Point(int value_x, int value_y) {
		x = value_x;
		y = value_y;

		cout <<"Место в памяти: "<<this<<endl;
	}

	void setX(int x) {
		this->x = x;
	}

	void setY(int setY) {
		y = setY;
	}

	int getX() {

		return x;

	}

	int getY() {

		return y;

	}
	
	void print() {

		cout <<"Точка x: "<<x<<endl<<"Точка y: "<<y<< endl;

	}

};


class MyClass {

public:

	int *data;

	MyClass(int size) {

		this->Size = size;

		this->data = new int[size];

		for (int i = 0; i < size; i++) {
			data[i] = i;
		}

		cout << "Вызвался конструктор " << this<< endl;
	}

	MyClass(const MyClass &other) {

		this->Size = other.Size;

		this->data = new int[other.Size];
		for (int i = 0; i < other.Size; i++) {
			this->data[i] = other.data[i];
		}
		cout << "Вызвался конструктор копирования " << this << endl;
	
	}

	~MyClass() {
		cout << "Вызвался деструктор " <<this<<endl;
		delete[] data;
	}

private:
	int Size;

};

void Foo(MyClass value) {
	cout<<"Вызвалась функция Foo" << endl;
}

MyClass Foo2()
{
	MyClass temp(2);

	cout << "Вызвалась функция Foo2" << endl;

	return temp;
}


int main()
{

	setlocale(LC_ALL, "rus");

	//Foo2();

	MyClass a(10);

	MyClass b(a);

	//MyClass myclass(3);

	//Foo(myclass);

	//Point point(2,3);

	//point.print();

	//Point point_2;
	//
	//point_2.setX(5);

	//point_2.print();

	return 0;
}
