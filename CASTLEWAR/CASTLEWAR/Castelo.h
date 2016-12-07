#pragma once

/*//============
		CASTELO
----------------
~> Fabrica seres
~> nao pode ser construido nem vendido
~> pode ser reparado
 ==============*/
#include "Edificio.h"
#include <iostream>
using namespace std;

class Castelo : public Edificio
{

private:
	//valores
	static const int DEFESA = 10;
	static const int CUSTO = 0;
	static const int SAUDE = 50;
	const static string NOME; //inicializado no .cpp
public:
	Castelo(string nome=NOME, int defesa=DEFESA, int saude=SAUDE, int custo=CUSTO);
	~Castelo();


	virtual string getAsString() const;
};

