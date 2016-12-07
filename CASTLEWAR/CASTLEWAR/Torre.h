#pragma once
/*//============
QUINTA
----------------
~> Ataca inimigos à distancia 2 com força ataque 3
~> cada novo nivel: 
----- custa 10
----- recebe 2 de defesa e 1 de ataque
==============*/

#include "Edificio.h"
#include <iostream>
using namespace std;

class Torre:public Edificio
{
	static const int DEFESA = 10;
	static const int CUSTO = 0;
	static const int SAUDE = 50;
	const static string NOME; //inicializado no .cpp
public:
	Torre(string nome = NOME, int defesa = DEFESA, int saude = SAUDE, int custo = CUSTO);
	~Torre();

	virtual string getAsString() const;
};

