#include"Header.h"
extern unsigned short height;
extern double salary;
void WritePersonData(const unsigned short* age, const string& name, const string& weight, const string& height)
{
	cout << " ��� " << name << " ��� " << weight << " ���� " << height;
	cout << " ������� " << *age << " �������� " << to_string(salary);
}