#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Procesor
{
private:
	int power;
public:

	void set_power(int a) { power = a; }
	int get_power() { return power; }

	Procesor();
	Procesor(int a);
	Procesor(Procesor& a);
	~Procesor();

	Procesor& operator =(Procesor& a);

	friend ostream& operator << (ostream & out, Procesor & a);
	friend istream& operator >>(istream& in, Procesor& a);
	
	operator string();
};

