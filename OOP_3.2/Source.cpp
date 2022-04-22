#include "Screen_comp.h"

Computer f(Computer a) {
	return (a);
}

int main() {
	Procesor pr(10);
	Computer b(pr, "acer", 12000);
	Computer d;
	cout << b;
	Screen_comp a;
	cin >> a;
	cout << a;
}