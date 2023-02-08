#include "Felino.h"

Felino::Felino(std::string n, std::string r, std::string l, int a, std::string d, std::string c) : Mamifero(n,r,l,a)
{
    dieta = d;
    circo = c;
}

Felino::Felino(std::string n, std::string r, std::string l, int a, std::string d) : Mamifero(n,r,l,a)
{
    dieta = d;
}

std::string Felino::getDieta()
{
    return dieta;
}

void Felino::setDieta(std::string d)
{
    dieta = d;
}

std::string Felino::getCirco()
{
    return circo;
}

void Felino::setCirco(std::string c)
{
    circo = c;
}
