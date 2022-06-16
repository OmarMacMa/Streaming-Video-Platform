#include "Video.h"

Video::Video(std::string nombre_, std::string genero_, int duracion_, int id_,
             int calificacion_) {
  setNombre(nombre_);
  setGenero(genero_);
  setDuracion(duracion_);
  setId(id_);
  setCalificacion(calificacion_);
}
Video::~Video() {}
std::string Video::getNombre() const { return nombre; }
std::string Video::getGenero() const { return genero; }
int Video::getDuracion() const { return duracion; }
int Video::getId() const { return id; }
int Video::getCalificacion() const { return calificacion; }

void Video::setNombre(std::string nombre_) { nombre = nombre_; }
void Video::setGenero(std::string genero_) { genero = genero_; }
void Video::setDuracion(int duracion_) { duracion = duracion_; }
void Video::setId(int id_) { id = id_; }
void Video::setCalificacion(int calificacion_) { calificacion = calificacion_; }