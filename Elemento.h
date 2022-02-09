#pragma once

#include <string>

class Elemento
{
public:
    Elemento(std::string nombre);
    ~Elemento();
    std::string GetNombre();
    void SetNombre(std::string nombre);
    Elemento* GetSiguiente();
    void SetSiguiente(Elemento *siguiente);

private:
    std::string _nombre;
    Elemento *_siguiente;
};
