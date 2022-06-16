#include "Episodio.h"

Episodio::Episodio(std::string serie_, int temporada_, int capitulo_,
                   std::string nombre_, std::string genero_, int duracion_,
                   int id_, int calificacion_)
    : Video(nombre_, genero_, duracion_, id_, calificacion_) {
  setSerie(serie_);
  setTemporada(temporada_);
  setCapitulo(capitulo_);
}
Episodio::~Episodio() {}
int Episodio::getTemporada() const { return temporada; }
int Episodio::getCapitulo() const { return capitulo; }
std::string Episodio::getSerie() const { return serie; }

void Episodio::setTemporada(int temporada_) { temporada = temporada_; }
void Episodio::setCapitulo(int capitulo_) { capitulo = capitulo_; }
void Episodio::setSerie(std::string serie_) { serie = serie_; }
void Episodio::imprime() {
  std::cout << "Titulo: " << nombre << std::endl;
  std::cout << "Duracion: " << duracion << std::endl;
  std::cout << "Genero: " << genero << std::endl;
  std::cout << "Calificacion: " << calificacion << std::endl;
  std::cout << "Serie: " << serie << std::endl;
  std::cout << "Capitulo: " << capitulo << " Temporada: " << temporada
            << std::endl;
}
