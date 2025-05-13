#include <iostream>
#include "Punto.h"

using namespace std;

int main()
{
    Punto p1,p2;//Instanciar y crear los objetos

    //Paso de mensajes

    p1.setX();
    p1.setY();

    p2.setX();
    p2.setY();
    
    cout<<"La distancia entre los puntos es: "<<p1.distanciaPuntos(p2);
    return 0;
}