#include <iostream>
#include <functional>

using namespace std;

class Planeta {
private:

	int nLunas;
	int nEstrellas;
	string nombre;
	function<int(int, int)> fun;

public:
	Planeta(int lu, int es, string n, function<int(int, int)> f) {
		nLunas = lu;
		nEstrellas = es;
		nombre = n;
		fun = f;
	}
	
	int LunasYEstrellas() { return fun(nLunas, nEstrellas); }
	~Planeta() {}
};

int main() {

	Planeta p1(5, 125, "Planeta X", [](int a, int b){ return a + b; });
	cout << p1.LunasYEstrellas() << endl;
}
