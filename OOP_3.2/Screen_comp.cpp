#include "Screen_comp.h"

Screen_comp::Screen_comp()
{
	get_proc().set_power(0);
	set_cost(0);
	set_mark("0");
	diag = 0;
	
}

Screen_comp::Screen_comp(Procesor p, string s, int c, double d)
{
	set_proc(p);
	set_cost(c);
	set_mark(s);
	diag = d;
}

Screen_comp::Screen_comp(Screen_comp& a)
{
	Procesor pp(a.get_proc().get_power());
	set_proc(pp);
	set_mark(a.get_mark());
	set_cost(a.get_cost());
	set_diag(a.get_diag());
	
}

Screen_comp::~Screen_comp()
{
}

ostream& operator<<(ostream& out, Screen_comp& a)
{
	out << "Mark: " << a.get_mark() << endl
		<< (string)a.get_proc() 
		<< "Cost: " << a.get_cost() << endl
		<< "Diagonal: " << a.get_diag() << endl;
	return out;
	
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, Screen_comp& a)
{
	int po;
	string m;
	double co;
	cout << "Mark: "; in >> m;  a.set_mark(m);
	cout << "Power: "; in >> po; a.set_pow(po);
	cout << "Cost: "; in >> co; a.set_cost(co);
	cout << "Diagonal: "; in >> a.diag;
	return in;
	// TODO: вставьте здесь оператор return
}
