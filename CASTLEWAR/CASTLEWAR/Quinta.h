#pragma once

/*//============
		QUINTA
----------------
~> Fabrica 2 moedas por cada instante
~> cada novo nivel: custa 10
~> recebe 1 de defesa e 1 moeda adcional por cada instante
==============*/

#include "Edificio.h"
#include <iostream>
using namespace std;


class Quinta:public Edificio
{
	static const int DEFESA = 10;
	static const int CUSTO = 0;
	static const int SAUDE = 50;
	const static string NOME; //inicializado no .cpp
public:
	Quinta(string nome = NOME, int defesa = DEFESA, int saude = SAUDE, int custo = CUSTO);
	~Quinta();

	virtual string getAsString() const;
};

