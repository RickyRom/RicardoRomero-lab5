#ifndef  INGREDIENTES_H
#define  INGREDIENTES_H
#include <string>

using namespace std;

class Ingredientes{
    public:
            string nombre;
            string tipo;
            int cant_aporte;
            int duracion;

    public:
            Ingredientes();
            ~Ingredientes();
            Ingredientes(string, string, int, int);

            //getters
            string getNombre();
            string getTipo();
            int getCantidadAporte();
            int getDuracion();

            //setters
            void setNombre(string);
            void setTipo(string);
            void setCantidadAporte(int);
            void setDuracion(int);
};

#endif