#ifndef EPISODIO_H
#define EPISODIO_H

#include "Video.h"

class Episodio : public Video {
public:
  Episodio();
  Episodio(std::string, int, int, std::string, std::string, int, int, int);
  ~Episodio();
  int getTemporada() const;
  int getCapitulo() const;
  std::string getSerie() const;
  void setTemporada(int);
  void setCapitulo(int);
  void setSerie(std::string);
  void imprime() override;

private:
  int temporada;
  int capitulo;
  std::string serie;
};
#endif
