#ifndef NETFLIX_H
#define NETFLIX_H

#include "Episodio.h"
#include "Pelicula.h"
#include <fstream>
#include <string>
#include <vector>

class Netflix {
public:
  Netflix();
  Netflix(std::vector<Video *>);
  ~Netflix();
  std::vector<Video *> getCatalogo();
  void setCatalogo(std::vector<Video *>);
  void agregarArchivo(std::string);
  void buscarCalPel(int);
  void buscarSerie(std::string, int);
  void buscarNom(std::string);
  void buscarGen(std::string);
  void calificar(std::string, int);
  friend std::ostream &operator<<(std::ostream &salida, const Netflix &);

private:
  std::vector<Video *> catalogo;
};

#endif
