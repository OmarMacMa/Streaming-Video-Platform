#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>

class Video{
    public:
        Video();
        Video(std::string, std::string, int);
        ~Video();
        std::string getNombre()const;
        std::string getGenero()const;
        int getDuracion()const;
        int getId()const;
        void setNombre(std::string);
        void setGenero(std::string);
        void setDuracion(int);
        void setId(int);
        virtual void imprime();
    protected:
        std::string nombre;
        std::string genero;
        int duracion;
        int id;
    private:
};

#endif