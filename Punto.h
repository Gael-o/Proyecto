#ifndef PUNTO_H
#define PUNTO_H

class Punto
{
    private:
        double x,y;
    public:
        Punto();
        void setX();
        void setY();
        double getX();
        double getY();
        double distanciaPuntos(Punto);
        void imprimeDistancia(double d);
        virtual ~Punto();
};

#endif // PUNTO H