/*
Autor:          Julio Alvarado
Fecha:          lun 16 may 2022 09:07:23 CST
Compilador:     g++ (Debian 10.2.1-6) 10.2.1 20210110
Compilar:       g++ -o problema02.out problema02.cpp
Librerias:      iostream
Resumen:        Programa muestra las caracteristicas de cada cohete
------------
cohete
------------
- empujeCohete
- consumoEspecificoEmpuje
- coeficienteCD
- seccionTransversal
- masaPropulsor
- masaInicialCombustible
-------------
Cohete

*/

//librerias
#include <iostream>
#include <string>

class Cohete
{
private:
    long long empujeCohete;
    float consumoEspecificoEmpuje;
    float coeficienteCD;
    float seccionTransversal;
    long long masaPropulsor;
    long long masaInicialCombustible;
    std::string nombre;

public:
    void desplegarAtributos();
    Cohete(long long empuje, float consumoEspecificoEmpuje,
           float coeficienteCD, float seccionTransversal,
           long long masaPropulsor, long long masaInicialCombustible, std::string nombre);
};

// Display de la informacion
void Cohete::desplegarAtributos()
{
    printf("\n");
    printf("Cohete: [%s]\n", nombre.c_str());
    printf("------------------------\n");
    printf("* Empuje del cohete E0: [%lld] N.\n", empujeCohete);
    printf("* Consumo especifico del empuje TSFC: [%f] Kg/(N*s).\n", consumoEspecificoEmpuje);
    printf("* Coeficiente de forma CD: [%f].\n", coeficienteCD);
    printf("* Seccion transversal del cohete A: [%f] m^2.\n", seccionTransversal);
    printf("* Masa del propulsor m0: [%lld] Kg.\n", masaPropulsor);
    printf("* Masa inicial del combustible mf0: [%lld] Kg.\n", masaInicialCombustible);
    printf("\n");
}

//Constructor de cohete
Cohete::Cohete(
    long long empujeVar, float consumoEspecificoEmpujeVar,
    float coeficienteCDVar, float seccionTransversalVar,
    long long masaPropulsorVar, long long masaInicialCombustibleVar, std::string nombreVar)
{
    empujeCohete = empujeVar;
    consumoEspecificoEmpuje = consumoEspecificoEmpujeVar;
    coeficienteCD = coeficienteCDVar;
    seccionTransversal = seccionTransversalVar;
    masaPropulsor = masaPropulsorVar;
    masaInicialCombustible = masaInicialCombustibleVar;
    nombre = nombreVar;
}

int main()
{
    //Construccion de cohetes

    Cohete cohete1(30000000, 0.0003248, 61.27, 201.06, 110000, 1500000, "Ah Mun");
    Cohete cohete2(27000000, 0.0002248, 61.27, 201.06, 110000, 1500000, "Ahau Kin");
    Cohete cohete3(25000000, 0.0002248, 70.25, 215.00, 180000, 2100000, "Chac");

    //Display de informacion

    cohete1.desplegarAtributos();
    cohete2.desplegarAtributos();
    cohete3.desplegarAtributos();

    return 0;
}

