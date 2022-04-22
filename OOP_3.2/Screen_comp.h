#pragma once
#include"Computer.h"
class Screen_comp:
	Computer
{
private:
	double diag;
	
public:
	void set_diag(double a) { diag = a; }
	double get_diag() { return diag; }

	Screen_comp();
	Screen_comp(Procesor p, string s, int c, double d);
	Screen_comp(Screen_comp& a);
	~Screen_comp();

	friend ostream& operator << (ostream& out, Screen_comp& a);
	friend istream& operator >> (istream& in, Screen_comp& a);
};

