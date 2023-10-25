#ifndef Pelicula_h
#define Pelicula_h

#include <iostream>
using namespace std;

#include "Video.h"

class Pelicula : public Video{

public: 
  Pelicula();
  Pelicula(string _nombre, int _ID, int _duracion, string _genero, int _calificacion);

  void mostrarDatos();

};

Pelicula::Pelicula(): Video(){
  
};

Pelicula::Pelicula(string _nombre, int _ID, int _duracion, string _genero, int _calificacion){
  nombre = _nombre;
  ID = _ID;
  duracion = _duracion;
  genero = _genero;
  calificacion = _calificacion;
}


void Pelicula::mostrarDatos(){
  cout << endl;
  Video::mostrarDatos();
};
#endif
