#include <vector>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << endl;

	cout << endl;

	cout << "ФУНКЦИИ";

	cout << endl;

	cout << endl;

	cout << "Длина вектора: ";
	int n; 
	cin >> n;
	vector<int> arr;

	for (int i = 0; i < n; i++) { // ЗАПОЛНЕНИЕ ВЕКТОРА РАНДОМНЫМИ ЧИСЛАМИ, ПРИМЕНЕНИЕ ФУНЦИИ PUSH_BACK():
		arr.push_back(rand() % 10); // PUSH_BACK(): ДОБОВЛЯЕТ ПО ОДНОМУ ЭЛЕМЕНТА В КОНЕЦ ВЕКТОРА
	}

	cout << "vector = ";
	for (auto& v : arr) {	// ВЫВОД ВЕКТОРА ПУТЁМ КОНСТРУКЦИИ auto& v : arr
		cout << v << " ";
	}
	cout << endl;

	cout <<"Объём выделеноё памяти: "<< arr.capacity(); // ФУНКЦИЯ capacity() УКАЗЫВАЕТ ОБЪЁМ ВЫДЕЛЕНОЙ ПАМЯТИ

	cout << endl;

	cout << "Длина вектора: " << arr.size(); // ФУНКЦИЯ size() УКАЗЫВАЕТ ДЛИНУ ВЕКТОРА

	cout << endl;

	arr.clear(); // ФУНКЦИЯ clear() ОЧИЩАЕТ ВЕКТОР

	cout << "Длина вектора_2: " << arr.size(); // ФУНКЦИЯ size() УКАЗЫВАЕТ ДЛИНУ ВЕКТОРА

	cout << endl;

	for (int i = 0; i < n; i++) { // ЗАПОЛНЕНИЕ ВЕКТОРА РАНДОМНЫМИ ЧИСЛАМИ, ПРИМЕНЕНИЕ ФУНЦИИ PUSH_BACK():
		arr.push_back(rand() % 10); // PUSH_BACK(): ДОБОВЛЯЕТ ПО ОДНОМУ ЭЛЕМЕНТА В КОНЕЦ ВЕКТОРА
	}

	cout << "vector = ";
	for (auto& v : arr) {	// ВЫВОД ВЕКТОРА ПУТЁМ КОНСТРУКЦИИ auto& v : arr
		cout << v << " ";
	}
	cout << endl;

	const int& i = arr.front(); // ФУНКЦИЯ front() ВЫВОДИТ ПЕРВЫЙ ЭЛЕМЕНТ ВЕКТОРА
	const int& j = arr.back(); // ФУНКЦИЯ back() ВЫВОДИТ ПОСЛЕДНИЙ ЭЛЕМЕНТ ВЕКТОРА
	cout << "Первый элемент вектора: " << i << endl;
	cout << "Последний элемент вектора: " << j << endl;


	cout <<"Проверяет пуст ли вектор: " << arr.empty(); // ФУНКЦИЯ empty() ПРОВЕРЯЕТ ПУСТ ЛИ ВЕКТОР FALSE В СЛУЧАЕ ЕСЛИ НЕТ

	cout << endl;

	arr.reserve(20); // ФУНКЦИЯ reserve() ОПРЕДЕЛЯЕТ НОВЫЙ РАЗМЕР ВЕКТОРА

	cout << "Текущая мощность arr = "
		<< arr.capacity() << endl;

	arr.shrink_to_fit(); // ФУНКЦИЯ shrink_to_fit() УДАЛЯЕТ ЛИШНЮЮ ЁМКОСТЬ

	cout << "Текущая мощность arr = "
		<< arr.capacity() << endl;


	vector<int> arr2, arr3;

	arr2.assign(arr.begin(), arr.end()); // ФУНКЦИЯ assign() УДАЛЯЕТ ВЕКТОР И КОПИРУЕТ УКАЗАННЫЕ ЭЛЕМЕНТЫ В ПУСТОЙ ВЕКТОР

	cout << "vector2 = ";				// ФУНКЦИЯ begin() НАЧАЛО ВЕКТОРА, end() КОНЕЦ ВЕКТОРА
	for (auto& v : arr2) {
		cout << v << " ";
	}

	cout << endl;

	arr3.assign(arr2.begin() + 4, arr2.begin() + 7); // ВЫТАСКИВАЕМ ЭЛЕМЕНТЫ С 4 ПО 7 ИНДЫКСЫ
	cout << "vector3 = ";
	for (auto& v : arr3) {
		cout << v << " ";
	}

		cout << endl;

		cout << endl;

		cout << "ИТЕРАТОРЫ";

		cout << endl;

	cout << endl;


	vector<int> vector_iter;
	vector<int>::iterator v_iter, v_iter2; // ТИП ВЕКТОРА iterator МОЖЕТ ЧИТАТЬ ЭЛЕМЕНТЫ В ВЕКТОРЕ 
	vector<int>::const_iterator v_conIter; 

	for (int i = 0; i < n; i++) {
		vector_iter.push_back(rand() % 10);
	}

	cout << "Вывод вектора через итератор: ";

	v_iter = vector_iter.begin();
	for (; v_iter != vector_iter.end(); v_iter++) {
		cout << *v_iter <<" ";
	}

	cout << endl;

	v_iter = vector_iter.begin(); // В ИТЕРАТОР МЫ ПРИСВАИВАЕМ ФУНКЦИЮ begin() НАЧАЛО ВЕКТОРА
	*v_iter = 5;	 // В ПЕРВЫЙ СИМВОЛ МЫ ПРИСВАИВАЕМ ЧИСЛО 5

	cout << "Теперь вектор содержит: ";

	for (; v_iter != vector_iter.end(); v_iter++) { // ПОКА НЕ КОНЕЦ ВЕКТОРА ИДЁМ ОТ 1 СИМВОЛА К ПОСЛЕДНЕМУ
		cout << *v_iter << " ";
	}

	cout << endl;

	vector<int>::const_reverse_iterator v_iter_rev;
	
	cout << "Реверс вектора при помощи итератора: ";

	for (v_iter_rev = vector_iter.rbegin(); v_iter_rev != vector_iter.rend(); v_iter_rev++) {
		cout << *v_iter_rev << " ";
	}

	cout << endl;

	vector<int>::pointer v_point;

	v_point = vector_iter.data();

	cout << "Вывод вектора с использованием итератора pointer: ";

	for (size_t n = vector_iter.size(); 0 < n; --n, v_point++) {
		cout << *v_point << " ";
	}

	cout << endl;

	v_point = vector_iter.data();

	*v_point = 9;

	cout << "Замена первого символа вектора при помощи итератора pointer: ";

	for (size_t n = vector_iter.size(); 0 < n; --n, v_point++) {
		cout << *v_point << " ";
	}

	cout << endl;

	v_iter = vector_iter.begin();
	v_iter2 = vector_iter.end();

	vector<int>::difference_type dif1, dif2;

	dif1 = count(v_iter, v_iter2, 2);

	dif2 = count(v_iter, v_iter2, 5);


	cout <<"Число 2 встречается: " << dif1<<" раз"<<endl;
	cout << "Число 5 встречается: " << dif1 << " раз"<<endl;

	vector<vector<int>> vec_vec;

	vec_vec.emplace(vec_vec.begin(), move(vector_iter));

	if (vec_vec.size() != 0 && vec_vec[0].size() != 0) {
		cout << "Вывод вектора векторов: ";
		for (v_iter = vec_vec[0].begin(); v_iter != vec_vec[0].end(); v_iter++) {
			cout << *v_iter<<" ";
		}
	}

	cout << endl;

	cout << "Вставка числа в любой индекс вектора: ";

	vector<int> vec_ins;
	vector<int>::iterator iter_ins;

	for (int i = 0; i < n; i++) {
		vec_ins.push_back(rand() % 10);
	}

	vec_ins.insert(vec_ins.begin() + 1, 4);

	for (iter_ins = vec_ins.begin(); iter_ins != vec_ins.end(); iter_ins++)
	{
		cout << *iter_ins << " ";
	}

	cout << endl;

	vector<int>::size_type siz;

	siz = vector_iter.max_size();

	cout<<"Максимально возможная длина вектора: "<< i;

	cout << endl;

	cout << "Вывод вектора в обратном порядки при помощи функции rend(): ";

	for (v_iter_rev = vec_ins.rbegin(); v_iter_rev != vec_ins.rend(); v_iter_rev++) {
		cout << *v_iter_rev << " ";
}

	cout << endl;


	return 0;
}







//	assign	Удаляет вектор и копирует указанные элементы в пустой вектор.
//
//	at	Возвращает ссылку на элемент в заданном положении в векторе.
//
//	back	Возвращает ссылку на последний элемент вектора.
//
//	begin	Возвращает итератор произвольного доступа, указывающий на первый элемент в векторе.
//
//	capacity	Возвращает число элементов, которое вектор может содержать без выделения дополнительного пространства.
//
//	cbegin	Возвращает постоянный итератор произвольного доступа, указывающий на первый элемент в векторе.
//
//	cend	Возвращает константный итератор произвольного доступа, указывающий на позицию, следующую за концом вектора.
//
//	crbegin	Возвращает константный итератор, который указывает на первый элемент в обратном векторе.
//
//	crend	Возвращает константный итератор, который указывает на последний элемент в обратном векторе.
//
//	clear	Очищает элементы вектора.
//
//	data	Возвращает указатель на первый элемент в векторе.
//
//	emplace	Вставляет элемент, созданный на месте, в указанное положение в векторе.
//
//	emplace_back	Добавляет элемент, созданный на месте, в конец вектора.
//
//	empty	Проверяет, пуст ли контейнер вектора.
//
//	end	Возвращает итератор произвольного доступа, который указывает на конец вектора.
//
//	erase	Удаляет элемент или диапазон элементов в векторе из заданных позиций.
//
//	front	Возвращает ссылку на первый элемент в векторе.
//
//	get_allocator	Возвращает объект классу allocator, используемому вектором.
//
//	insert	Вставляет элемент или многие элементы в вектор по заданной позиции.
//
//	max_size	Возвращает максимальную длину вектора.
//
//	pop_back	Удаляет элемент в конце вектора.
//
//	push_back	Добавляет элемент в конец вектора.
//
//	rbegin	Возвращает итератор, указывающий на первый элемент в обратном векторе.
//
//	rend	Возвращает итератор, который указывает на последний элемент в обратном векторе.
//
//	reserve	Резервирует минимальную длину хранилища для объекта вектора.
//
//	resize	Определяет новый размер вектора.
//
//	shrink_to_fit	Удаляет лишнюю емкость.
//
//	size	Возвращает количество элементов в векторе.
//
//	swap	Меняет местами элементы двух векторов.
//











//	const_iterator	Тип, предоставляющий итератор произвольного доступа, который может читать элемент const в векторе.
//
//	const_pointer	Тип, предоставляющий указатель на элемент const в векторе.
//
//	const_reference	Тип, предоставляющий ссылку на const элемент, хранящийся в векторе.Он используется для чтения и выполнения const операций.
//
//	const_reverse_iterator	Тип, предоставляющий итератор произвольного доступа, который может читать любой элемент const в векторе.
//
//	difference_type	Тип, представляющий различие между адресами двух элементов в векторе.
//
//	iterator	Тип, предоставляющий итератор произвольного доступа, который может читать или изменять любой элемент в векторе.
// 
//	pointer	Тип, предоставляющий указатель на элемент в векторе.
//
//	reference	Тип, предоставляющий ссылку на элемент, хранящийся в векторе.
//
//	reverse_iterator	Тип, предоставляющий итератор произвольного доступа, который может читать или изменять любой элемент в обратном векторе.
//
//	size_type	Тип, считающий количество элементов в векторе.
//
//	value_type	Тип, представляющий тип данных, хранящихся в векторе.





