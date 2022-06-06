#include "Netflix.h"

Netflix::Netflix() {}

Netflix::Netflix(std::vector<Video *> catalogo_) { catalogo = catalogo_; }

Netflix::~Netflix() {}

void Netflix::agregarArchivo(std::string archivoVideo) {
  // Variables de archivo
  std::fstream archivo;
  char tipoVideo;

  // Variables rescatadas
  std::string nombre;
  std::string genero;
  int duracion;
  int id;
  std::string fechaEstreno;
  std::string director;
  int temporada;
  int capitulo;
  std::string serie;
  int calificacion;

  archivo.open(archivoVideo);
  if (archivo.is_open()) {
    while (archivo >> tipoVideo) {
      if (tipoVideo == 'p') {
        archivo >> nombre >> genero >> duracion >> id >> calificacion >>
            fechaEstreno >> director;
        Pelicula vidTemp(fechaEstreno, director, nombre, genero, duracion, id,
                         calificacion);
        catalogo.push_back(&vidTemp);
      } else {
        archivo >> nombre >> genero >> duracion >> id >> calificacion >>
            temporada >> capitulo >> serie;
        Episodio vidTemp(serie, temporada, capitulo, nombre, genero, duracion,
                         id, calificacion);
        catalogo.push_back(&vidTemp);
      }
    }
  }
}

void Netflix::buscarCal(int calInput) {
  for (auto &vid : catalogo) {
    if (vid->getCalificacion() == calInput) {
      vid->imprime();
    }
  }
}

void Netflix::buscarNom(std::string nomInput) {
  for (auto &vid : catalogo) {
    if (vid->getNombre() == nomInput) {
      vid->imprime();
    }
  }
}

void Netflix::buscarGen(std::string genInput) {
  for (auto &vid : catalogo) {
    if (vid->getGenero() == genInput) {
      vid->imprime();
    }
  }
}
