#ifndef Video_h
#define Video_h

#include <iostream>
using namespace std;

// Declarar la clase Video

class Video {
protected:
    string nombre;
    int ID;
    int duracion;
    string genero;
    int calificacion;

public:
    Video();
    Video(string _nombre, int _ID, int _duracion , string _genero, int _calificacion);

    void setNombre(string);
    void setID(int);
    void setDuracion(int);
    void setGenero(string);
    void setCalificacion(int);

    string getNombre();
    int getID();
    int getDuracion();
    string getGenero();
    int getCalificacion();

    virtual string getSerie() {return nombre;};
    virtual void mostrarDatos();
};

Video::Video(){
  nombre = "Sin nombre";
  ID = 0;
  duracion = 0;
  genero = "Sin genero";
  calificacion = 0;
};

Video::Video(string _nombre, int _ID, int _duracion, string _genero, int _calificacion){
  nombre = _nombre;
  ID = _ID;
  duracion = _duracion;
  genero = _genero;
  calificacion = _calificacion;
};

// Setters y getters
void Video::setNombre(string _nombre){
  nombre = _nombre;
};

void Video::setID(int _ID){
    ID = _ID;
};

void Video::setDuracion(int _duracion){
  duracion = _duracion;
};

void Video::setGenero(string _genero){
  genero = _genero;
};

void Video::setCalificacion(int _calificacion){
  calificacion = _calificacion;
};

string Video::getNombre(){
  return nombre;
};

int Video::getID(){
  return ID;
};

int Video::getDuracion(){
  return duracion;
};

string Video::getGenero(){
  return genero;
};

int Video::getCalificacion(){
  return calificacion;
};

void Video::mostrarDatos(){
  cout << endl;
  cout << "Nombre: " << nombre << endl;
  cout << "ID: " << ID << endl;
  cout << "Duración: " << duracion << endl;
  cout << "Genero: " << genero << endl;
  cout << "Calificación: " << calificacion << endl;
};

#endif
