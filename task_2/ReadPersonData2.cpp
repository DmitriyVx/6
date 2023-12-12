#include"Header.h"
extern unsigned short height;

void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeight();
	ReadPersonWeight(weight);

}