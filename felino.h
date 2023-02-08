#ifndef FELINO_H_INCLUDED
#define FELINO_H_INCLUDED

#include "mamifero.cpp"

class Felino : public Mamifero
{
private:
    std::string dieta;
    std::string circo;
public:
    Felino(std::string,std::string,std::string,int,std::string,std::string);
    Felino(std::string,std::string,std::string,int,std::string);
    std::string getDieta();
    void setDieta(std::string);
    std::string getCirco();
    void setCirco(std::string);
};

#endif  // FELINO_H
