#include "Edificio.h"


#include <sstream>
#include <string>


Edificio::Edificio(string nome, int defesa, int saude, int custo)
{
	this->nome = nome;
	this->defesa = defesa;
	this->saude = saude;
	this->custo = custo;
}


Edificio::~Edificio()
{
}




//===== getters =====//
string Edificio::getAsString() const {
	ostringstream oss;
	oss << nome << "::[custo: " << custo << "; defesa: " << defesa << "; saude: " << saude << "]";
	return oss.str();
}

int Edificio::getSaude() const {
	return saude;
}
int Edificio::getDefesa() const {
	return defesa;
}
int Edificio::getCusto() const {
	return custo;
}
string Edificio::getNome() const {
	return nome;
}

//===== setters ====//
void Edificio::setDefesa(int defesa) {
	this->defesa = defesa;
}
void Edificio::setSaude(int saude) {
	this->saude = saude;
}

ostream & operator<<(ostream & os, const Edificio & ed) {
	os << ed.getAsString();
	return os;
}