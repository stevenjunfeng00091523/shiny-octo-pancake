#include <iostream>

using namespace std;


class Car
{

private: 
    string marca;
    string modelo;
    string color;
    bool estado;
    int anio;
    int kilometraje;
    float capacidadTanque; 

public:
    
    string getMarca();
    void setMarca(string Marca);

    string getModelo();
    void setModelo(string Modelo);

    string getColor();
    void setColor(string Color);

    bool getEstado();
    void setEstado(bool Estado);

    int getAnio();
    void setAnio(int Anio);

    int getKilometraje();
    void setKilometraje(int Kilometraje);

    float getCapacidadTanque();
    void setCapacidadTanque(float Capacidad);

    Car();
    Car(string,string,string,bool,int,int,float);
    
    void Estado(bool);
    float CalcularKmRecorridos(int kmActual);
    float CalcularKilometraje(float KmRecorridos);
    float ActualizarCapacidadTanque(float ConsumoActual);

};

Car::Car()
{

};

Car::Car(string _marca, string _modelo, string _color, bool _estado, int _anio, int _kilometraje, float _capacidadTanque )
{

setMarca(_marca);
setModelo(_modelo);
setColor(_color);
setEstado(_estado);
setCapacidadTanque(_capacidadTanque);

};

string Car::getMarca()
{
    return marca;
};

void Car::setMarca(string Marca)
{
    marca=Marca;
};

string Car::getModelo()
{
    return modelo;
};

void Car::setModelo(string Modelo)
{
    modelo=Modelo;
};

string Car:: getColor()
{
    return color;
};

void Car:: setColor(string Color)
{
    color=Color;
};

bool Car:: getEstado()
{
    return estado;
};

void Car:: setEstado(bool Estado)
{
    estado=Estado;
};

int Car:: getAnio()
{
    return anio;
};

void Car:: setAnio(int Anio)
{
    anio=Anio;
};

int Car:: getKilometraje()
{
    return kilometraje;
};

void Car:: setKilometraje(int Kilometraje)
{
    kilometraje=Kilometraje;
};

float Car:: getCapacidadTanque()
{
    return capacidadTanque;
};

void Car:: setCapacidadTanque(float Capacidad)
{
    capacidadTanque=Capacidad;
};


void Car::Estado(bool estado)
{
    if (estado == true)
    {
        cout << "Encendido" << endl;
    }
    else
    {
        cout << "Apagado" << endl;
    }
}

float CalcularKmRecorridos(int kmActual)
{

    int kmrecorrido;

    kmrecorrido=kilometraje-kmActual;

}

float Car::CalcularKilometraje(float KmRecorridos)
{

}

float Car::ActualizarCapacidadTanque(float ConsumoActual)
{

}



int main()
{
    Car carro1;

    return 0;
}


