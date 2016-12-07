#pragma once


/*//===================
~> EDIFICIOS AUTONOMOS
----> necess�rios para fazer seres
----> fazer moedas
----> para defender
----> conjunto limitado
*/
#include<iostream>
#include<sstream>
using namespace std;

class Edificio {
	int saude;	//a vida vital do edificio
	int defesa;	//for�a da defesa
	int custo; //custo monetario
	static int num_edificios; //numero de edificios
	string nome;
public:
	Edificio(string nome, int defesa, int saude, int custo);
	~Edificio();

	//===== getters =====//
	virtual string getAsString() const;

	int getSaude() const;
	int getDefesa() const;
	int getCusto() const;
	string getNome() const;

	//===== setters ====//
	void setDefesa(int defesa);
	void setSaude(int saude);
};

ostream & operator<<(ostream & os, const Edificio & ed);