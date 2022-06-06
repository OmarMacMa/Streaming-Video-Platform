#ifndef EPISODIO_H
#define EPISODIO_H

#include "Video.h"

class Episodio:public Video{
    public:
        Episodio();
        Episodio(int, int, std::string, std::string, int);
        ~Episodio();
        int getTemporada()const;
        int getCapitulo()const;
        void setTemporada(int);
        void setCapitulo(int);
        void imprime() override;
    private:
        int temporada;
        int capitulo;
};
#endif