#include "Pelicula.h"

Pelicula::Pelicula() : Video() {
  fechaEstreno = "1 de enero 2023";
  director = "Guillermo del Toro";
}
Pelicula::Pelicula(std::string fecha_, std::string director_,
                   std::string nombre_, std::string genero_, int duracion_,
                   int id_, int calificacion_)
    : Video(nombre_, genero_, duracion_, id_, calificacion_) {
  setFechaEstreno(fecha_);
  setDirector(director_);
}
Pelicula::~Pelicula() {}
std::string Pelicula::getFechaEstreno() const { return fechaEstreno; }
std::string Pelicula::getDirector() const { return director; }
void Pelicula::setFechaEstreno(std::string fecha_) { fechaEstreno = fecha_; }
void Pelicula::setDirector(std::string director_) { director = director_; }
void Pelicula::imprime() {
  Video::imprime();
  std::cout << "Estreno: " << fechaEstreno
            << "\nDel Director: " << director << std::endl;
}
