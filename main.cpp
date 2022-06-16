#include "Netflix.h"
#include <iostream>

int main() {
  int opcion;
  bool repeat;
  Netflix netflix;
  netflix.agregarArchivo("videos.txt");
  std::cout << "Videos cargados del archivo videos.txt" << std::endl
            << std::endl;

  do {
    std::cout << "Bienvenido al Catalogo" << std::endl;
    std::cout << "1. Buscar cualquier audiovisual" << std::endl;
    std::cout << "2. Buscar videos por genero" << std::endl;
    std::cout << "3. Buscar peliculas por calificacion" << std::endl;
    std::cout << "4. Buscar episodios por serie y calificacion" << std::endl;
    std::cout << "5. Calificar un video" << std::endl;
    std::cout << "6. Mostrar todos los videos" << std::endl;
    std::cout << "7. Salir" << std::endl;
    std::cin >> opcion;

    switch (opcion) {
    case 1: {
      std::string nombre;
      std::cout << "Ingrese el titulo a buscar: ";
      std::cin >> nombre;
      netflix.buscarNom(nombre);
      break;
    }
    case 2: {
      std::string genero;
      std::cout << "Ingrese el genero que quiere buscar: ";
      std::cin >> genero;
      netflix.buscarGen(genero);
      break;
    }
    case 3: {
      int cal;
      std::cout << "Ingrese la calificacion de la pelicula: ";
      std::cin >> cal;
      netflix.buscarCalPel(cal);
      break;
    }
    case 4: {
      std::string nombre;
      int cal;
      std::cout << "Ingrese la serie a buscar: ";
      std::cin >> nombre;
      std::cout << "Ingrese la calificacion a buscar: ";
      std::cin >> cal;
      netflix.buscarSerie(nombre, cal);
      break;
    }
    case 5: {
      std::string nombre;
      int cal;
      std::cout << "Ingrese la serie a calificar: ";
      std::cin >> nombre;
      std::cout << "Ingrese la calificacion: ";
      std::cin >> cal;
      netflix.calificar(nombre, cal);
      break;
    }
    case 6: {
      std::cout << netflix;
      break;
    }
    case 7: {
      std::cout << "Gracias por usar este catalogo" << std::endl;
      repeat = false;
      break;
    }
    default: {
      std::cout << "Tu opcion no esta en el menu";
    }
    }
  } while (repeat);

  return 0;
}
