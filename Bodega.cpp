#include "Bodega.h"

using namespace std;

Bodega::Bodega() {

}

Bodega::~Bodega() {

}

//getter
Ingredientes* Bodega::getIngredientes(int i){
	return ingredientes[i];
}

int Bodega::getCantidad(){
	return cantidad;
}

string Bodega::getHistorial(){
	return historial;
}

//setter
void Bodega::addIngrediente(Ingredientes* i)
{
	ingredientes.push_back(i);
}

void Bodega::setCantidad(int cant)
{
	cantidad = cant;
}

void Bodega::setHistorial(string histo) {
    historial = histo;
}
