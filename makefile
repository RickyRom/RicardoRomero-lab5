mainCocina: 	Bodega.o Plato.o Ingredientes.o mainCocina.o	
			g++ Bodega.o Plato.o Ingredientes.o mainCocina.o -o main

mainCocina.o: Bodega.h Plato.h Ingredientes.h mainCocina.cpp
			g++ -c mainCocina.cpp

Bodega.o: Bodega.cpp Bodega.h Ingredientes.h
			g++ -c Bodega.cpp

Plato.o: Plato.cpp Plato.h Ingredientes.h
			g++ -c Plato.cpp

Ingredientes.o: Ingredientes.cpp Ingredientes.h
			g++ -c Ingredientes.cpp