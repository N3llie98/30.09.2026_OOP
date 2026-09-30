#pragma once
#include <iostream>
using namespace std;

class CityUA {
	string name;
	int population_city;
	static string language;
	static string capital;
	static string president;
	static int population_country;
	static int Count;
public:
	CityUA();
	CityUA(string n, int pop);
	void init(string n, int pop);
	void print()const;

	//for static objects
	static void printData();

	//GETTERS
	string getName()const;
	int getPopulation_city()const;
	//SETTERS
	void setName(string n);
	void setPopulation_city(int pop);
};

