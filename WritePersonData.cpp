#include"Header.h"
extern unsigned short height;
extern double salary;
void WritePersonData(const unsigned short* age, const string& name, const string& weight, const string& height)
{
	cout << " Имя " << name << " Вес " << weight << " Рост " << height;
	cout << " Возраст " << *age << " Зарплата " << to_string(salary);
}