#include "Lista.h"
#include <iostream>

Lista::Lista() : _primer(nullptr), _ultimo(nullptr)
{
}

Lista::~Lista()
{
    using namespace std;

    Elemento* i = _primer;
    while(i != nullptr)
    {
        Elemento* siguiente = i->GetSiguiente();
        delete i;
        i = siguiente;
    }
    cout << "Destruyendo lista" << endl;    
}

void Lista::Agregar(Elemento *elemento)
{
    if (_primer == nullptr) // Si la lista está vacía
    {
        _primer = elemento;
        _ultimo = elemento;
    }
    else // Si la lista no está vacía
    {
        _ultimo->SetSiguiente(elemento);
        _ultimo = elemento;
    }
}

Elemento *Lista::GetPrimer()
{
    return _primer;
}
