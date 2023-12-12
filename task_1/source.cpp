#include<iostream>
#include<string>

using namespace std;

unsigned short height;

double salary;

unsigned short ReadPersonAge()
{
	cout << "Введите возраст человека: ";
	unsigned short age;
	cin >> age;
	return age;
}
string ReadPersonName()
{
	cout << "Введите имя человека: ";
	string name;
	cin >> name;
	return name;
}
void ReadPersonHeight()
{
	cout << "Введите рост человека: ";
	cin >> height;
}
void ReadPersonWeight(unsigned short &weight)
{
	cout << "Введите вес: ";
	cin >> weight;
}
void ReadPersonSalary(double* salary)
{
	cout << "Введите зарплату: ";
	cin >> *salary;
}
void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}
void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeight();
	ReadPersonWeight(weight);
	
}
void WritePersonData(const unsigned short* age,const string& name,const string& weight,const string& height)
{
	cout << " Имя " << name << " Вес " << weight << " Рост " << height;
	cout << " Возраст " << *age << " Зарплата " << to_string(salary);
}
#ifndef DO_NOT_DEFINE_MAIN
void main()
{
	setlocale(LC_ALL, "rus");
	string name;
	unsigned short age;
	unsigned short weight;
	
	ReadPersonData(name, age, height, weight);

	ReadPersonData(name, age, salary);
	WritePersonData(&age, name,to_string(weight), to_string(height));
}
#endif
