#include "Edificio.h"
#include "Castelo.h"
#include <vector>
using namespace std;

int main() {

	//======================
	//Teste edificios

				//string nome, int defesa, int saude, int custo
	Edificio c("edificio", 10, 10, 10);
	cout << c.getAsString() << endl;
	cout << c << endl;

	Castelo d;
	cout << d.getAsString() << endl;



	///testes vector===================================
	vector<Edificio *>lista_edificios;
	lista_edificios.push_back(new Edificio(d));
	lista_edificios.push_back(new Edificio(c));

	
	cout << "lista: " << endl;
	for (vector<Edificio*>::iterator it = lista_edificios.begin(); it != lista_edificios.end(); ++it){
		cout << (*it)->getAsString() << endl;
	}
	///===============================================

	//
	//====================
	return 0;
}