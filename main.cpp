#include <iostream>
#include <string>
#include "gatodomestico.cpp"

using namespace std;

int main()
{
    string myStr;

    GatoDomestico Minino("Lia","Gato","Jalisco",2020,"Croquetas","Sergio");
    Felino EstrellaCirco("Rex","Leon","Sonora",2012,"Carne","Circo del Sol");
    cout<<"Datos de Minino"<<endl<<endl;
    cout<<"Nombre: "<<Minino.getNombre()<<endl;
    cout<<"Raza: "<<Minino.getRaza()<<endl;
    cout<<"Lugar de nacimiento: "<<Minino.getLugarNacimiento()<<endl;
    cout<<"Anio de nacimiento: "<<Minino.getAnio()<<endl;
    cout<<"Dieta: "<<Minino.getDieta()<<endl;
    cout<<"Nombre del duenio: "<<Minino.getDueno()<<endl<<endl;


    cout<<"Datos de Estrella de circo"<<endl<<endl;
    cout<<"Nombre: "<<EstrellaCirco.getNombre()<<endl;
    cout<<"Raza: "<<EstrellaCirco.getRaza()<<endl;
    cout<<"Lugar de nacimiento: "<<EstrellaCirco.getLugarNacimiento()<<endl;
    cout<<"Anio de nacimiento: "<<EstrellaCirco.getAnio()<<endl;
    cout<<"Dieta: "<<EstrellaCirco.getDieta()<<endl;
    cout<<"Circo: "<<EstrellaCirco.getCirco()<<endl<<endl;

    cout<<"Ingrese el nuevo nombre para el duenio de "<<Minino.getNombre()<<": ";
    getline(cin, myStr);
    Minino.setdueno(myStr);
    cout<<"Ingrese el nuevo circo de "<<EstrellaCirco.getNombre()<<": ";
    getline(cin, myStr);
    EstrellaCirco.setCirco(myStr);
    cout<<"Cambios realizados con exito"<<endl<<endl;

    cout<<"Datos de Minino"<<endl<<endl;
    cout<<"Nombre: "<<Minino.getNombre()<<endl;
    cout<<"Raza: "<<Minino.getRaza()<<endl;
    cout<<"Lugar de nacimiento: "<<Minino.getLugarNacimiento()<<endl;
    cout<<"Anio de nacimiento: "<<Minino.getAnio()<<endl;
    cout<<"Dieta: "<<Minino.getDieta()<<endl;
    cout<<"Nombre del duenio: "<<Minino.getDueno()<<endl<<endl;


    cout<<"Datos de Estrella de circo"<<endl<<endl;
    cout<<"Nombre: "<<EstrellaCirco.getNombre()<<endl;
    cout<<"Raza: "<<EstrellaCirco.getRaza()<<endl;
    cout<<"Lugar de nacimiento: "<<EstrellaCirco.getLugarNacimiento()<<endl;
    cout<<"Anio de nacimiento: "<<EstrellaCirco.getAnio()<<endl;
    cout<<"Dieta: "<<EstrellaCirco.getDieta()<<endl;
    cout<<"Circo: "<<EstrellaCirco.getCirco()<<endl<<endl;

    return 0;
}
