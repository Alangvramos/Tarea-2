#include "gatodomestico.h"

GatoDomestico::GatoDomestico(std::string n, std::string r, std::string l, int a, std::string d, std::string du) : Felino(n,r,l,a,d)
{
    dueno = du;
}

std::string GatoDomestico::getDueno()
{
    return dueno;
}

void GatoDomestico::setdueno(std::string d)
{
    dueno = d;
}
