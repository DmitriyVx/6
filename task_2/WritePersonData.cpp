#include"Header.h"
extern unsigned short height;
extern double salary;
void WritePersonData(const unsigned short* age, const string& name, const string& weight, const string& height)
{
	cout << " ��� " << name << endl << " ��� " << weight << endl << " ���� " << height << endl;
	cout << " ������� " << *age << endl << " �������� " << to_string(salary) << endl;
}