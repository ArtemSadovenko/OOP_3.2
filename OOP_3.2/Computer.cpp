#include "Computer.h"

Computer::Computer()
{
	mark = "0";
	proc.set_power(0);
	cost = 0;
}

Computer::Computer(Procesor p, string s, int c)
{
	proc = p;
	mark = s;
	cost = c;
}

Computer::Computer(Computer& a)
{
	proc = a.proc;
	mark = a.mark;
	cost = a.cost;
}

Computer::~Computer()
{
}

Computer::operator string()
{
	stringstream out;
	out << "Mark: " << mark << endl
		<< "Cost: " << cost << endl
		<< "Power: " << proc.get_power() << endl;
	return out.str();
}

Computer& Computer::operator=(Computer& a)
{
	proc = a.proc;
	mark = a.mark;
	cost = a.cost;
	return *this;
	// TODO: вставьте здесь оператор return
}

ostream& operator<<(ostream& out, Computer& a)
{
	out << (string)a;
	return out;
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, Computer& a)
{
	int po;
	cout << "Mark: "; in >> a.mark; 
	cout << "Power: "; in >> po; a.proc.set_power(po);
	cout << "Cost: "; in >> a.cost;
	return in;
	// TODO: вставьте здесь оператор return
}
