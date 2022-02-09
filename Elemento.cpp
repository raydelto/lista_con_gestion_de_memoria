#include "Elemento.h"
#include <iostream>


Elemento::~Elemento()
{
    std::cout << "Destruyendo el elemento " << _nombre << std::endl;
}

Elemento::Elemento(std::string nombre) : _nombre(nombre), _siguiente(nullptr)
{
}

std::string Elemento::GetNombre()
{
    return _nombre;
}

void Elemento::SetNombre(std::string nombre)
{
    _nombre = nombre;
}

Elemento *Elemento::GetSiguiente()
{
    return _siguiente;
}

void Elemento::SetSiguiente(Elemento *siguiente)
{
    _siguiente = siguiente;
}
