#include<iostream>
#include<string>

using namespace std;

unsigned short height;

double salary;

unsigned short ReadPersonAge()
{
	cout << "������� ������� ��������: ";
	unsigned short age;
	cin >> age;
	return age;
}
string ReadPersonName()
{
	cout << "������� ��� ��������: ";
	string name;
	cin >> name;
	return name;
}
void ReadPersonHeight()
{
	cout << "������� ���� ��������: ";
	cin >> height;
}
void ReadPersonWeight(unsigned short &weight)
{
	cout << "������� ���: ";
	cin >> weight;
}
void ReadPersonSalary(double* salary)
{
	cout << "������� ��������: ";
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
	cout << " ��� " << name << " ��� " << weight << " ���� " << height;
	cout << " ������� " << *age << " �������� " << to_string(salary);
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
