#ifndef BODEGA_H
#define BODEGA_H
#include <vector>
#include <string>
#include "Ingredientes.h"

using namespace std;

class Bodega {
    public: 
            vector<Ingredientes* > ingredientes;
            int cantidad;
            string historial;

    public:
            Bodega();
            ~Bodega();

            //getters
            Ingredientes* getIngredientes(int);
            int getCantidad();
            string getHistorial();

            //setters
            void addIngrediente(Ingredientes*);
            void setCantidad(int);
            void setHistorial(string);



};

#endif