#include "CityUA.h"

//STATIC FIELDS
string CityUA::language = "Ukrainian";
string CityUA::capital = "Kyiv";
string CityUA::president = "Volodymir Zelensky";
int CityUA::population_country = 45000000;
int CityUA::Count = 0;

CityUA::CityUA()
{
	name = "";
	population_city = 0;
	Count++;
}

CityUA::CityUA(string n, int pop)
{
	name = n;
	population_city = pop;
	Count++;
}

void CityUA::init(string n, int pop)
{
	name = n;
	population_city = pop;
}

void CityUA::print()const
{
	cout << "Name: " << name << "\nPopulation city: " << population_city << endl;
	printData();
}

void CityUA::printData()
{
	cout << "Language: " << language << "\nCapital: " << capital
		<< "\nPresident: " << president << "\nPopulation country: " << population_country
		<< "\nCount of objects of this type: " << Count << endl << endl;
}

string CityUA::getName()const
{
	return name;
}

int CityUA::getPopulation_city()const
{
	return population_city;
}

void CityUA::setName(string n)
{
	name = n;
}

void CityUA::setPopulation_city(int pop)
{
	population_city = pop;
}
