#include <iostream>
#include "Bodega.h"
#include "Plato.h"
#include "Ingredientes.h"
#include <vector>
#include <fstream>
#include <string>

using namespace std;
using std::cout;

void lectura();

int main() {
	int opcion;
	string nombre = "";
	string tipo = "";
	int cant_aport = 0, duracion = 0;
	do{
	Ingredientes* ingre;
	vector<Ingredientes> ingres;
	
		
		cout<<"Bienvenido al Menu de Opciones"<<endl;
		cout<<"1.- Agregar Ingrediente"<<endl;
		cout<<"2.- Agregar Platos"<<endl;
		cout<<"3.- Comprar"<<endl;
		cout<<"4.- Salir"<<endl;		
		cin>> opcion;
		switch (opcion) {

			case 1:
				cout<<"Ingrese un Ingrediente"<<endl;
				cin>> nombre;
				cout<<"Ingrese el Tipo(Lacteos, Vegetales, Frutas): "<<endl;				
				cin>> tipo;
				cout<<"Ingrese la cantidad de aporte: "<<endl;
				cin>> cant_aport;
				cout<<"Ingrese la Duracion: "<<endl;
				cin>> duracion;

				ingre = new Ingredientes(nombre, tipo, cant_aport, duracion);
				ingres.push_back(*ingre);
				break;
			case 2:
				/*cout << ingres.size() << endl;
				for(int i = 0; i < ingres.size(); i++){
					cout<<".."<<ingres[i].getNombre()<<endl;
				}*/
				lectura();
				break;
			case 3:

				break;
			case 4:
				cout<<"Tenga Buen Dia"<<endl;				
				break;	
		}
	}while(opcion != 4);

	return 0;
}

void lectura() {
	ifstream archivo;
	string texto;

	archivo.open("/home/rickyrom/Labs/lab_RicardoRomero/Ingedientes.txt", ios::in);//abrimos archivo

	if(archivo.fail()) {
		cout<<"No se pudo abrir el archivo"<<endl;
		exit(1);
	}

	while(!archivo.eof()) {//mientras no sea el final del archivo
		getline(archivo, texto);
		cout<<texto<<endl;
	}

	archivo.close();//cerramos archivo
}
