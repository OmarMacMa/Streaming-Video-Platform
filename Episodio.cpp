#include "Episodio.h"

Episodio::Episodio():Video(){
    temporada = 1;
    capitulo = 12;
}
Episodio::Episodio(int temporada_, int capitulo_, std::string nombre_, std::string genero_, int duracion_):Video(nombre_, genero_, duracion_){
    setTemporada(temporada_);
    setCapitulo(capitulo_);
}
Episodio::~Episodio(){
}
int Episodio::getTemporada()const{
    return temporada;
}
int Episodio::getCapitulo()const{
    return capitulo;
}
void Episodio::setTemporada(int temporada_){
    temporada = temporada_;
}
void Episodio::setCapitulo(int capitulo_){
    capitulo = capitulo_;
}
void Episodio::imprime(){
    Video::imprime();
    std::cout << "Capitulo :" << capitulo << " Temporada: " << temporada << std::endl;  
}