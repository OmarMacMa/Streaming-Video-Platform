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
  void buscarCal(int);
  void buscarNom(std::string);
  void buscarGen(std::string);

private:
  std::vector<Video *> catalogo;
};

#endif
