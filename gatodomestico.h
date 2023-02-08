#ifndef GATODOMESTICO_H
#define GATODOMESTICO_H

#include "felino.cpp"

class GatoDomestico : public Felino
{
private:
    std::string dueno;
public:
    GatoDomestico(std::string,std::string,std::string,int,std::string,std::string);
    std::string getDueno();
    void setdueno(std::string);
};

#endif // GATODOMESTICO_H
