#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <string.h>
#include <iostream>

class Mamifero
{
private:
    std::string nombre;
    std::string raza;
    std::string lugarNacimiento;
    int anio;


public:
    Mamifero();
    Mamifero(std::string,std::string,std::string,int);

    std::string getNombre();
    std::string getRaza();
    std::string getLugarNacimiento();
    int getAnio();

    void setNombre(std::string);
    void setRaza(std::string);
    void setLugarNacimiento(std::string);
    void setAnio(int);

     bool operator == (Mamifero&);
     bool operator != (Mamifero&);
     bool operator < (Mamifero&);
     bool operator > (Mamifero&);
     Mamifero operator + (Mamifero&);
};

#endif // MAMIFERO_H
