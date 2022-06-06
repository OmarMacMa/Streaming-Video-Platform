#include "Video.h"

Video::Video(){
    nombre = "Video generico";
    genero = "Accion";
    duracion = 90;
    id = 15146;
}
Video::Video(std::string nombre_, std::string genero_, int duracion_){
    setNombre(nombre_);
    setGenero(genero_);
    setDuracion(duracion_);
}
Video::~Video(){
}
std::string Video::getNombre()const{
    return nombre;
}
std::string Video::getGenero()const{
    return genero;
}
int Video::getDuracion()const{
    return duracion;
}
int Video::getId()const{
    return id;
}
void Video::setNombre(std::string nombre_){
    nombre = nombre_;
}
void Video::setGenero(std::string genero_){
    genero = genero_;
}
void Video::setDuracion(int duracion_){
    duracion = duracion_;
}
void Video::setId(int id_){
    id = id_;
}
void Video::imprime(){
    std::cout << "Titulo: " << nombre << std::endl;
    std::cout << "Duracion: " << duracion << std::endl;
    std::cout << "Genero: " << genero << std::endl;
}