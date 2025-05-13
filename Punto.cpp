#include "Punto.h"
#include <iostream>
#include <math.h>

using namespace std;
/*
Inicializer list

Punto::Punto():x(),y(){}

*/

//COSNTRUCTOR
Punto::Punto()
{
    x=0;
    y=0;
}

//MODIFIERS
void Punto::setX(){
    cout<<"Ingresa el valor de la coordenada x: ";
    cin>>x;
}

void Punto::setY(){
    cout<<"Ingresa el valor de la coordenada y: ";
    cin>>y;
}

//MODIFIERS
double Punto::getX(){
    return x;
}

double Punto::getY(){
    return y;
}

//METODOS ESPECIALIZADOS

double Punto::distanciaPuntos(Punto p2){
    return sqrt(pow(p2.getX()-x,2)+(p2.getY()-y,2));
}

/*double Punto::distanciaPuntos(double x2, double y2){
    return sqrt(pow(x2-x,2))+(y2-y,2));
}*/

void Punto::imprimeDistancia(double d){

}

Punto::~Punto()
{
    //dtor
}