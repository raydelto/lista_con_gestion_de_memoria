#include "Lista.h"
#include <iostream>

using namespace std;

int main()
{
    Elemento *elemento1 = new Elemento("arroz");
    Elemento *elemento2 = new Elemento("habichuela");
    Elemento *elemento3 = new Elemento("chorizo");
    Elemento *elemento4 = new Elemento("pan");
    Lista *lista = new Lista();
    lista->Agregar(elemento1);
    lista->Agregar(elemento2);
    lista->Agregar(elemento3);
    lista->Agregar(elemento4);

    Elemento *i = lista->GetPrimer();

    while (i != nullptr)
    {
        cout << i->GetNombre() << endl;
        i = i->GetSiguiente();
    }

    delete lista;
    return 0;
}
