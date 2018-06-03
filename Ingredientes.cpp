#include "Ingredientes.h"

using namespace std;

Ingredientes::Ingredientes() {

}

Ingredientes::~Ingredientes() {

}

Ingredientes::Ingredientes(string pname, string ptipo, int pcant_aport, int pduracion) {
    nombre = pname;
    tipo = ptipo;
    cant_aporte = pcant_aport;
    duracion = pduracion;
}

//getters
string Ingredientes::getNombre() {
    return nombre;
}

string Ingredientes::getTipo() {
    return tipo;
}

int Ingredientes::getCantidadAporte() {
    return cant_aporte;
}

int Ingredientes::getDuracion() {
    return duracion;
}

//setters
void Ingredientes::setNombre(string nom){
	nombre = nom;
}

void Ingredientes::setTipo(string tip){
	tipo = tip;
}

void Ingredientes::setCantidadAporte(int aporte) {
    cant_aporte = aporte;
}

void Ingredientes::setDuracion(int dura) {
    duracion = dura;
}


