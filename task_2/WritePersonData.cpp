#include"Header.h"
extern unsigned short height;
extern double salary;
void WritePersonData(const unsigned short* age, const string& name, const string& weight, const string& height)
{
	cout << " Имя " << name << endl << " Вес " << weight << endl << " Рост " << height << endl;
	cout << " Возраст " << *age << endl << " Зарплата " << to_string(salary) << endl;
}