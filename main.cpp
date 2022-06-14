#include "Netflix.h"
#include <iostream>

int main() {
  int opcion;
  Netflix netflix;
  netflix.agregarArchivo("videos.txt");
  std::cout << "Videos cargados de videos.txt" << std::endl << std::endl;

  std::cout << "Bienvenido al Catalogo" << std::endl;
  std::cout << "1. Buscar videos por genero" << std::endl;
  std::cout << "2. Buscar peliculas por calificacion" << std::endl;
  std::cout << "3. Buscar episodios por serie y calificacion" << std::endl;
  std::cout << "4. Calificar un video" << std::endl;
  std::cout << "5. Mostrar todos los videos" << std::endl;
  std::cout << "6. Salir" << std::endl;
  std::cin >> opcion;

  switch (opcion) {
  case 1: {
    std::string genero;
    std::cout << "Ingrese el genero que quiere buscar: ";
    std::cin >> genero;
    netflix.buscarGen(genero);
    break;
  }
  case 2: {
    int cal;
    std::cout << "Ingrese la calificacion de la pelicula: ";
    std::cin >> cal;
    netflix.buscarCalPel(cal);
    break;
  }
  case 3: {
    std::string nombre;
    int cal;
    std::cout << "Ingrese la serie a buscar: ";
    std::cin >> nombre;
    std::cout << "Ingrese la calificacion a buscar: ";
    std::cin >> cal;
    netflix.buscarSerie(nombre, cal);
    break;
  }
  case 4: {
    std::string nombre;
    int cal;
    std::cout << "Ingrese la serie a calificar: ";
    std::cin >> nombre;
    std::cout << "Ingrese la calificacion: ";
    std::cin >> cal;
    netflix.calificar(nombre, cal);
    break;
  }
  case 5: {
    std::cout << netflix;
    break;
  }
  default: {
    std::cout << "Tu opcion no esta en el menu";
    break;
  }
  }

  return 0;
}
