#ifndef PELICULA_H
#define PELICULA_H

#include "Video.h"

class Pelicula : public Video {
public:
  Pelicula();
  Pelicula(std::string, std::string, std::string, std::string, int, int, int);
  ~Pelicula();
  std::string getFechaEstreno() const;
  std::string getDirector() const;
  void setFechaEstreno(std::string);
  void setDirector(std::string);
  void imprime() override;

private:
  std::string fechaEstreno;
  std::string director;
};
#endif
