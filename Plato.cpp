#include "Plato.h"

using namespace std;

Plato::Plato() {

}

Plato::~Plato() {

}

Plato::Plato(vector<Ingredientes*> pcant_ingr, string presena, int pcant_sbr, string pregistro, 
int pprecio, double ppromedio) {
    vector<Ingredientes*> cant_ingre = pcant_ingr;
	cant_ingre = pcant_ingr;
	resena = presena;
	cant_sabor = pcant_sbr;
	registro = pregistro;
	precio = pprecio;
	promedio = ppromedio;
}

//getter
Ingredientes* Plato::getIngredientes(int i){
	return cant_ingre[i];
}

string Plato::getResena() {
	return resena;
}

int Plato::getCantidad() {
	return cant_sabor;
}

string Plato::getRegistro() {
	return registro;
}

int Plato::getPrecio() {
	return precio;
}

double Plato::getPromedio() {
    return promedio;
}

//setters

void Plato::addIngrediente(Ingredientes* i)
{
	cant_ingre.push_back(i);
}

void Plato::setResena(string rese){
	resena = rese;
}

void Plato::setCantidad(int cant_s) {
    cant_sabor = cant_s;
}

void Plato::setRegistro(string regis) {
    registro = regis;
}

void Plato::setPrecio(int prec) {
    precio = prec;
}

void Plato::setPromedio(double prom) {
    promedio = prom;
}
