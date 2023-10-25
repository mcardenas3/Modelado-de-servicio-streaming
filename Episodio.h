#ifndef Episodio_h
#define Episodio_h

#include <iostream>
#include "Video.h"

using namespace std;

class Episodio: public Video{

private:
  int temporada;
  string serie;

public:
  Episodio();
  Episodio(string _serie, int _temporada, string _nombre, int _ID, int _duracion , string _genero, int _calificacion);

  void setTemporada(int);
  void setSerie(string);

  int getTemporada();
  string getSerie() {return serie;};

  void mostrarDatos();

};


Episodio::Episodio(): Video(){
  serie = "Sin serie";
  temporada = 0;
};

Episodio::Episodio(string _serie, int _temporada, string _nombre, int _ID, int _duracion , string _genero, int _calificacion): Video(_nombre, _ID, _duracion, _genero, _calificacion){
  serie = _serie;
  temporada = _temporada;
};

void Episodio::mostrarDatos() {
  cout << endl;
  cout << "Serie: " << serie << endl;
  cout << "Temporada: " << temporada;
  Video::mostrarDatos();
  cout << endl;
}


#endif
