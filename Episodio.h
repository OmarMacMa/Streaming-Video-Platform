#ifndef EPISODIO_H
#define EPISODIO_H

#include "Video.h"

class Episodio:public Video{
    public:
        Episodio();
        Episodio(std::string, int, int);
        ~Episodio();
        int getTemporada();
        int getCapitulo();
        void setTemporada();
        void setCapitulo();
        void imprime() override;
    private:
        int temporada;
        int capitulo;
};
#endif