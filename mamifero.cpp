#include "mamifero.h"

Mamifero::Mamifero()
{

}

Mamifero::Mamifero(std::string n, std::string r, std::string l, int a)
{
    this->anio = a;
    this->nombre = n;
    //this->dieta = d;
    this->raza = r;
    this->lugarNacimiento = l;
}

std::string Mamifero::getNombre()
{
    return nombre;
}

std::string Mamifero::getRaza()
{
    return raza;
}

std::string Mamifero::getLugarNacimiento()
{
    return lugarNacimiento;
}

int Mamifero::getAnio()
{
    return anio;
}

void Mamifero::setNombre(std::string n)
{
    nombre = n;
}

void Mamifero::setRaza(std::string r)
{
    raza = r;
}

void Mamifero::setLugarNacimiento(std::string l)
{
    lugarNacimiento = l;
}

void Mamifero::setAnio(int a)
{
    anio = a;
}

bool Mamifero::operator ==(Mamifero &m)
{
    return nombre == m.nombre;
}

bool Mamifero::operator !=(Mamifero &m)
{
    return nombre != m.nombre;
}

bool Mamifero::operator <(Mamifero &m)
{
    return nombre < m.nombre;
}

bool Mamifero::operator >(Mamifero &m)
{
    return nombre > m.nombre;
}

Mamifero Mamifero::operator +(Mamifero &m)
{
    nombre += m.nombre;
    raza += m.raza;
    //dieta += m.dieta;
    lugarNacimiento += m.lugarNacimiento;
    anio += m.anio;

    return *this;
}

