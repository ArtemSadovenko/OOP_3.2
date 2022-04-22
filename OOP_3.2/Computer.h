#pragma once
#include "Procesor.h"

class Computer
{
private:
	Procesor proc;
	string mark;
	double cost;
public:
	void set_proc(Procesor a) { proc = a; }
	void set_mark(string a) {  mark = a; }
	void set_cost(double a) { cost = a; }
	void set_pow(int a) { proc.set_power(a); }

	Procesor get_proc() { return proc; }
	string get_mark() { return mark; }
	double get_cost() { return cost; }

	Computer();
	Computer(Procesor p, string s, int c);
	Computer(Computer& a);
	~Computer();

	operator string();
	friend ostream& operator <<(ostream& out, Computer& a);
	friend istream& operator >>(istream& in, Computer& a);

	Computer& operator =(Computer& a);
};

