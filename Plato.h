#ifndef PLATO_H
#define PLATO_H
#include <string>
#include <vector>
#include "Ingredientes.h"

using namespace std;

class Plato{
    public:
            vector<Ingredientes*> cant_ingre;
            string resena;
            int cant_sabor;
            string registro;
            int precio;
            double promedio;

    public:
            Plato();
            ~Plato();
            Plato(vector<Ingredientes*>, string, int, string, int, double);

            //getter
            Ingredientes* getIngredientes(int);            
            string getResena();
            int getCantidad();
            string getRegistro();
            int getPrecio();
            double getPromedio();

            //setter
            void addIngrediente(Ingredientes*);            
            void setResena(string);
            void setCantidad(int);
            void setRegistro(string);
            void setPrecio(int);
            void setPromedio(double);

};

#endif