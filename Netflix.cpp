#include "Netflix.h"
#include <iostream>

Netflix::Netflix() {}

Netflix::Netflix(std::vector<Video *> catalogo_) { catalogo = catalogo_; }

Netflix::~Netflix() {}

void Netflix::agregarArchivo(std::string archivoVideo) {
  // Variables de archivo
  std::ifstream archivo;
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
        catalogo.push_back(new Pelicula(fechaEstreno, director, nombre, genero,
                                        duracion, id, calificacion));
      } else if (tipoVideo == 'e') {
        archivo >> nombre >> genero >> duracion >> id >> calificacion >>
            temporada >> capitulo >> serie;
        catalogo.push_back(new Episodio(serie, temporada, capitulo, nombre,
                                        genero, duracion, id, calificacion));
      }
    }
  }
}

void Netflix::buscarCalPel(int calInput) {
  try{
    if (calInput < 0 || calInput > 5){
      throw "Calificacion invalida debe ser entre 0 y 5";
    }
    for (int i = 0; i < catalogo.size(); i++) {
      if (Pelicula *ptrPel = dynamic_cast<Pelicula *>(catalogo[i])) {
        if (calInput == ptrPel->getCalificacion()) {
          ptrPel->imprime();
          std::cout << std::endl;
        }
      }
    }
  }
  catch (const char *msgCal){
    std::cerr << msgCal << std::endl;
  }
}

void Netflix::buscarSerie(std::string nomInput, int calInput) {
  try{
    if (calInput < 0 || calInput > 5){
      throw "Calificacion invalida debe ser entre 0 y 5";
    }
    int nomCounter = 0;
    for (int i = 0; i < catalogo.size(); i++) {
      if (Episodio *ptrEp = dynamic_cast<Episodio *>(catalogo[i])) {
        if (nomInput == ptrEp->getSerie()) {
          if (calInput == ptrEp->getCalificacion()) {
            ptrEp->imprime();
            std::cout << std::endl;
            nomCounter ++;
          }
        }
      }
    }
    try{
      if (nomCounter == 0){
        throw "Esa pelicula no esta en el catalogo, lo sentimos";
      }
    }
    catch(const char *msgNom){
      std::cerr << msgNom << std::endl;
    }
  }
  catch (const char *msgCal){
    std::cerr << msgCal << std::endl;
  }
}

void Netflix::buscarNom(std::string nomInput) {
  int nomCounter = 0;
  for (auto &vid : catalogo) {
    if (vid->getNombre() == nomInput) {
      vid->imprime();
      nomCounter ++;
    }
  }
  try{
    if (nomCounter == 0){
      throw "Ese audiovisual no esta en el catalogo, lo sentimos";
    }
  }
  catch(const char *msgNom){
    std::cerr << msgNom << std::endl;
  }
}

void Netflix::buscarGen(std::string genInput) {
  int genCounter = 0;
  for (int i = 0; i < catalogo.size(); i++) {
    if (catalogo[i]->getGenero() == genInput) {
      catalogo[i]->imprime();
      std::cout << std::endl;
      genCounter ++;
    }
  }
  try{
    if (genCounter == 0){
      throw "No hay peliculas de este genero, pruebe otro";
    }
  }
  catch (const char *msgGen){
    std::cerr << msgGen << std::endl;
  }
}

void Netflix::calificar(std::string nombre, int calificacion) {
  try{
    if (calificacion < 0 || calificacion > 5){
      throw "Calificacion invalida debe ser entre 0 y 5";
    }
    int nomCounter = 0;
    for (int i = 0; i < catalogo.size(); i++) {
      if (catalogo[i]->getNombre() == nombre) {
        catalogo[i]->setCalificacion(calificacion);
        nomCounter ++;
      }
    }
    try{
      if (nomCounter == 0){
        throw "Esa pelicula no esta en el catalogo, lo sentimos";
      }
    }
    catch(const char *msgNom){
      std::cerr << msgNom << std::endl;
    }
  }
  catch (const char *msgCal){
  std::cerr << msgCal << std::endl;
  }
}


void Netflix::mostrar() {
  for (auto vid : catalogo) {
    vid->imprime();
    std::cout << std::endl;
  }
}

std::ostream &operator<<(std::ostream &salida, const Netflix &netflix_) {
  for (int i = 0; i < netflix_.catalogo.size(); i++) {
    netflix_.catalogo[i]->imprime();
    std::cout << std::endl;
  }
  return salida;
}
