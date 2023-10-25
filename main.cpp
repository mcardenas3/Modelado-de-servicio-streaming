#include <iostream>
#include <vector>
using namespace std;

#include "Pelicula.h"
#include "Episodio.h"


int main() {
    int opcion;
    string nombre, genero, serie;
    double ID, duracion, calificacion, temporada;



    Pelicula p1("The Super Mario Bros. Movie",1001,92,"Comedia",9), p2("Black Widow", 1002, 133, "Acción", 8), p3("Cruella", 1003, 134, "Comedia", 8), p4("A Quiet Place Part II", 1004, 97, "Terror", 8), p5("Luca", 1005, 95, "Animación", 7), p6("F9: The Fast Saga", 1006, 145, "Acción", 7), p7("Raya and the Last Dragon", 1007, 114, "Animación", 8), p8("Godzilla vs. Kong", 1008, 113, "Acción", 6),  p9("Mortal Kombat", 1009, 110, "Acción", 6), p10("Nobody", 1010, 92, "Acción", 7), p11("Soul", 1011, 100, "Animación", 8), p12("Wonder Woman 1984", 1012, 151, "Acción", 5), p13("Zack Snyder's Justice League", 1013, 242, "Acción", 8), p14("Nomadland", 1014, 108, "Drama", 7), p15("The Father", 1015, 97, "Drama", 8), p16("Tenet", 1016, 150, "Acción", 7),  p17("Minari", 1017, 115, "Drama", 7), p18("Judas and the Black Messiah", 1018, 126, "Drama", 7), p19("The Suicide Squad", 1019, 132, "Acción", 7),  p20("Free Guy", 1020, 115, "Acción", 8);
  
    Episodio e1("The Office",1,"Piloto", 2001, 42,"Accion", 9), e2("The Office",1,"El dia de la diversidad",2002, 37,"Comedia", 3), e3("The Office",1,"Me multaron", 2003, 45,"Comedia", 3), e4("The Office",1,"Me multaron", 2004, 43,"Comedia", 4), e5("The Office",1,"Me multaron", 2005, 38,"Comedia", 7), e6("The Office",1,"Me multaron", 2006, 41,"Comedia", 9), e7("The Office",1,"Me multaron", 2007, 48,"Comedia", 3), e8("The Office",1,"Me multaron", 2008, 42,"Comedia", 5), e9("The Office",1,"Me multaron", 2009, 52,"Comedia", 7), e10("Suits",1,"Pilot", 2010, 38,"Drama", 6), e11("Suits",1,"Errors and Omissions", 2011, 42,"Drama", 7), e12("Suits",1,"Inside Track", 2012, 45,"Drama", 8), e13("Suits",1,"Dirty Little Secrets", 2013, 36,"Drama", 7), e14("Suits",1,"Bail Out", 2014, 40,"Drama", 8), e15("Suits",1,"Tricks of the Trade", 2015, 44,"Drama", 9), e17("Suits",1,"Play the Man", 2016, 47,"Drama", 8),e18("Suits",1,"Identity Crisis", 2017, 43,"Drama", 7), e19("Suits",1,"Undefeated", 2018, 49,"Drama", 9),e20("Suits",1,"The shelf life", 2019, 52,"Drama", 8);

    Video *video[50] = {&p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9, &p10, &p11, &p12, &p13, &p14, &p15, &p16, &p17, &p18, &p19, &p20,&e1, &e2, &e3, &e4, &e5, &e6, &e7, &e8, &e9, &e10, &e11, &e12, &e13, &e14, &e15, &e17, &e18, &e19, &e20};
    int cantVideosActual = 38;
    int ID_PeliculaActual = 1020;
    int ID_EpisodioActual = 2019;


while (opcion != 8) {
  cout << "Menu de opciones" << endl;
  cout << endl;
  cout << "1) Cargar Archivo de Datos " << endl;
  cout << "2) Mostrar la lista de Peliculas" << endl;
  cout << "3) Mostrar la lista de Episodios" << endl;
  cout << "4) Mostar los videos con cierto genero" << endl;
  cout << "5) Mostrar los episodios de una determinada serie" << endl;
  cout << "6) Mostrar las peliculas con cierta calificacion" << endl;
  cout << "7) Calificar un video" << endl;
  cout << "8) Salir " << endl;
  cout << "Seleccione una opcion: ";
    
  cin >> opcion;

switch (opcion) {

  case 1:
    for (int i = 0; i <= 38; i++){
      video[i] -> mostrarDatos();
    };
  break;

  case 2:
    for (int i = 0; i <=cantVideosActual; i++){
      video[i] -> mostrarDatos();
    }
  break;
  
  case 3:
    for (int i = 20; i <= 38; i++){
      video[i] -> mostrarDatos();
    }
  break;

case 4:
    cout << "Seleccione el género: " << endl;
    cout << "1) Comedia" << endl;
    cout << "2) Animación" << endl;
    cout << "3) Drama" << endl;
    cout << "4) Acción" << endl;
    cout << "5) Terror" << endl;
    
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Videos de género Comedia:" << endl;
            for (int i = 0; i <= 38; i++) {
                if (video[i] -> getGenero() == "Comedia") {
                    video[i] -> mostrarDatos();
                }
            }
            break;
            
        case 2:
            cout << "Videos de género Animación:" << endl;
            for (int i = 0; i <= 38; i++) {
                if (video[i] -> getGenero() == "Animación") {
                    video[i] -> mostrarDatos();
                }
            }
            break;
            
        case 3:
            cout << "Videos de género Drama:" << endl;
            for (int i = 0; i <= 38; i++) {
                if (video[i] -> getGenero() == "Drama") {
                    video[i] -> mostrarDatos();
                }
            }
            break;
            
        case 4:
            cout << "Videos de género Acción:" << endl;
            for (int i = 0; i <= 38; i++) {
                if (video[i] -> getGenero() == "Acción") {
                    video[i] -> mostrarDatos();
                }
            }
            break;
            
        case 5:
            cout << "Videos de género Terror:" << endl;
            for (int i = 0; i <= 38; i++) {
                if (video[i] -> getGenero() == "Terror") {
                    video[i] -> mostrarDatos();
                }
            }
            break;
            
        default:
            cout << "Opción inválida" << endl;
            break;
    }
    break;

  case 5:
    cout << "Seleccione la serie: " << endl;
    cout << "1) The Office" << endl;
    cout << "2) Suits" << endl;
    
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Episodios de la serie The Office:" << endl;
            for (int i = 20; i <= 38; i++) {
                if (video[i] -> getSerie() == "The Office") {
                    video[i] -> mostrarDatos();
                }
            }
            break;
            
        case 2:
            cout << "Episodios de la serie Suits:" << endl;
            for (int i = 20; i <= 38; i++) {
                if (video[i] -> getSerie() == "Suits") {
                    video[i] -> mostrarDatos();
                }
            }
            break;
            
        default:
            cout << "Opción inválida" << endl;
            break;
    }
    break;

  case 6: 
    cout << "Seleccione la calificación: " << endl;
    cout << "1) 1" << endl;
    cout << "2) 2" << endl;
    cout << "3) 3" << endl;
    cout << "4) 4" << endl;
    cout << "5) 5" << endl;
    cout << "6) 6" << endl;
    cout << "7) 7" << endl;
    cout << "8) 8" << endl;
    cout << "9) 9" << endl;
    cout << "10) 10" << endl;
    
    cin >> opcion;

    bool existe;
    switch (opcion) {
        case 1:
            cout << "Peliculas con calificación 1:" << endl;
            for (int i = 0; i <= 19; i++) {
                if (video[i] -> getCalificacion() == 1) {
                    video[i] -> mostrarDatos();
                    existe = true;
                }
            }
            if (existe == false) {
                cout << "No hay peliculas con esa calificación" << endl;
            }
            break;
            
        case 2:
            cout << "Peliculas con calificación 2:" << endl;
            for (int i = 0; i <= 19; i++) {
                if (video[i] -> getCalificacion() == 2) {
                    video[i] -> mostrarDatos();
                    existe = true;
                }
            }
            if (existe == false) {
                cout << "No hay peliculas con esa calificación" << endl;
            }
            break;
            
        case 3:
            cout << "Peliculas con calificación 3:" << endl;
            for (int i = 0; i <= 19; i++) {
                if (video[i] -> getCalificacion() == 3) {
                    video[i] -> mostrarDatos();
                    existe = true;
                }
            }
            if (existe == false) {
                cout << "No hay peliculas con esa calificación" << endl;
            }
            break;
            
        case 4:
            cout << "Peliculas con calificación 4:" << endl;
            for (int i = 0; i <= 19; i++) {
                if (video[i] -> getCalificacion() == 4) {
                    video[i] -> mostrarDatos();
                    existe = true;
                }
            }
            if (existe == false) {
                cout << "No hay peliculas con esa calificación" << endl;
            }
            break;
            
        case 5:
            cout << "Peliculas con calificación 5:" << endl;
            for (int i = 0; i <= 19; i++) {
                if (video[i] -> getCalificacion() == 5) {
                    video[i] -> mostrarDatos();
                    existe = true;
                }
            }
            if (existe == false) {
                cout << "No hay peliculas con esa calificación" << endl;
            }
            break;

        case 6:
            cout << "Peliculas con calificación 6:" << endl;
            for (int i = 0; i <= 19; i++) {
                if (video[i] -> getCalificacion() == 6) {
                    video[i] -> mostrarDatos();
                    existe = true;
                }
            }
            if (existe == false) {
                cout << "No hay peliculas con esa calificación" << endl;
            }
            break;
        
        case 7:
            cout << "Peliculas con calificación 7:" << endl;
            for (int i = 0; i <= 19; i++) {
                if (video[i] -> getCalificacion() == 7) {
                    video[i] -> mostrarDatos();
                    existe = true;
                }
            }
            if (existe == false) {
                cout << "No hay peliculas con esa calificación" << endl;
            }
            break;
        
        case 8:
            cout << "Peliculas con calificación 8:" << endl;
            for (int i = 0; i <= 19; i++) {
                if (video[i] -> getCalificacion() == 8) {
                    video[i] -> mostrarDatos();
                    existe = true;
                }
            }
            if (existe == false) {
                cout << "No hay peliculas con esa calificación" << endl;
            }
            break;
        
        case 9:
            cout << "Peliculas con calificación 9:" << endl;
            for (int i = 0; i <= 19; i++) {
                if (video[i] -> getCalificacion() == 9) {
                    video[i] -> mostrarDatos();
                    existe = true;
                }
            }
            if (existe == false) {
                cout << "No hay peliculas con esa calificación" << endl;
            }
            break;
        
        case 10:
            cout << "Peliculas con calificación 10:" << endl;
            for (int i = 0; i <= 19; i++) {
                if (video[i] -> getCalificacion() == 10) {
                    video[i] -> mostrarDatos();
                    existe = true;
                }
            }
            if (existe == false) {
                cout << "No hay peliculas con esa calificación" << endl; 
            }
            break;
            
        default:
            cout << "Opción inválida" << endl;
            break;
    }
    break;
    
  case 7:
    cout << "Su video es una pelicula o un episodio de una serie? (p/e): ";
    char tipo;
    cin >> tipo;
    cin.ignore();
    cout << "Ingrese el nombre del video: ";
    getline(cin, nombre);
    cout << "Ingrese la duracion del video: ";
    cin >> duracion;
    cin.ignore();
    cout << "Ingrese el genero del video: ";
    getline(cin, genero);
    cout << "Ingrese la calificacion: ";
    cin >> calificacion;
    cin.ignore();
    if (tipo == 'e') {
        ID = ID_EpisodioActual + 1;
        cout << "Ingrese el nombre de la serie: ";
        getline(cin, serie);
        cout << "Ingrese el numero de temporada: ";
        cin >> temporada;
        video[cantVideosActual+1] = new Episodio(serie, temporada, nombre, ID, duracion, genero, calificacion);
        cantVideosActual++;
    } else {
        ID = ID_PeliculaActual + 1;
        video[cantVideosActual+1] = new Pelicula(nombre, ID, duracion, genero, calificacion);
        cantVideosActual++;
    }
    cantVideosActual++;

    cout << endl << "Video agregado exitosamente" << endl << endl;

    break;

return 0;
}
}
}
