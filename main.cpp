#include <iostream>

using namespace std;

/*Calcular area de un rectangulo*/
class Rectangulo{
    private:
        //Declaracion de variables;
        float largo, ancho;

    public:
        //Constructores con y sin parametros
        Rectangulo(){
            largo = 0;
            ancho = 0;
        }
        Rectangulo(float pLargo, float pAncho){
            largo = pLargo;
            ancho = pAncho;
        }

        //SETS and GETS
        void setLargo(float pLargo) { largo = pLargo; }
        void setAncho(float pAncho) { ancho = pAncho; }

        float getLargo() { return largo; }
        float getAncho() { return ancho; }

        //Calcula Area
        float area(){
            return largo * ancho;
        }

        //Calcula Perimetro
        float perimetro(){
            return (2 * largo) + (2 * ancho);
        }

        //Calcula costo
        int costo(){
            return area() * 50000.0;
        }
};

int main() {
    Rectangulo r1 (5, 6);
    {
        cout<<"El area del primer terreno es:           "<<r1.area()<<"m2"<<endl;
        cout<<"El perimetro del primer terreno es:      "<<r1.perimetro()<<endl;
        cout<<"El costo de venta del primer terreno es: "<<r1.costo()<<endl;
    }

    Rectangulo r2 (11 ,10);
    {
        cout<<"======================================================="<<endl;
        cout<<"El area del segundo terreno es:          "<<r2.area()<<"m2"<<endl;
        cout<<"El perimetro del segundo terreno es:     "<<r2.perimetro()<<endl;
        cout<<"El costo del segundo terreno es:         "<<r2.costo()<<endl;
    }
    return 0;
}
