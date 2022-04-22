#include "Procesor.h"

Procesor::Procesor()
{
	power = 0;
}

Procesor::Procesor(int a)
{
	power = a;
}

Procesor::Procesor(Procesor& a)
{
	power = a.power;
}

Procesor::~Procesor()
{
}

Procesor& Procesor::operator=(Procesor& a)
{
	power = a.power;
	return *this;
	// TODO: вставьте здесь оператор return
}

Procesor::operator string()
{
	stringstream out;
	out << "Power: " << power << " Mhz." << endl;
	return out.str();
}

ostream& operator<<(ostream& out, Procesor& a)
{
	out << "Power: " << a.power << "Mhz." << endl;
	return out;
	// TODO: вставьте здесь оператор return
}

istream& operator>>(istream& in, Procesor& a)
{
	cout << "Power: "; in >> a.power;
	return in;
	// TODO: вставьте здесь оператор return
}
