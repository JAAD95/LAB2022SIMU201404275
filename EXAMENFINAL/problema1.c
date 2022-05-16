/*
Autor:          Julio Alvarado
Fecha:          lun 16 may 2022 09:07:23 CST
Compilador:     gcc (Debian 10.2.1-6) 10.2.1 20210110
Compilar:       gcc -o problema1.out problema1.c
Librerias:      stdio
Resumen:        Calculos de cinematica relacionados con el movimiento
                de 3 cohetes
*/

//librerias
#include <stdio.h>
#include <string.h>
void cohete1();
void cohete2();
void cohete3();

int main(){
  void cohete1;
  void cohete2;
  void cohete3;
return 0;

}

void cohete1(){
char nombre[7];
strcpy(nombre,"Ah Mun");
long long empujeCohete=30000000;
float consumoEspecificoEmpuje=0.0003248;
float coeficienteCD=61.27;
float seccionTransversal=201.06;
long long masaPropulsor=110000;
long long masaInicialCombustible=1500000;

   printf("------------------------\n");
    printf("Cohete: [%s]\n",nombre); 
    printf("------------------------\n");
    printf("* Empuje del cohete E0: [%lld] N.\n", empujeCohete);
    printf("* Consumo especifico del empuje TSFC: [%f] Kg/(N*s).\n", consumoEspecificoEmpuje);
    printf("* Coeficiente de forma CD: [%f].\n", coeficienteCD);
    printf("* Seccion transversal del cohete A: [%f] m^2.\n", seccionTransversal);
    printf("* Masa del propulsor m0: [%lld] Kg.\n", masaPropulsor);
    printf("* Masa inicial del combustible mf0: [%lld] Kg.\n", masaInicialCombustible);
    printf("\n")

}

void cohete2(){
char nombre[7];
strcpy(nombre,"Ahaukin");
long long empujeCohete=27000000;
float consumoEspecificoEmpuje=0.0002248;
float coeficienteCD=61.27;
float seccionTransversal=201.06;
long long masaPropulsor=110000;
long long masaInicialCombustible=1500000;

   printf("------------------------\n");
    printf("Cohete: [%s]\n",nombre); 
    printf("------------------------\n");
    printf("* Empuje del cohete E0: [%lld] N.\n", empujeCohete);
    printf("* Consumo especifico del empuje TSFC: [%f] Kg/(N*s).\n", consumoEspecificoEmpuje);
    printf("* Coeficiente de forma CD: [%f].\n", coeficienteCD);
    printf("* Seccion transversal del cohete A: [%f] m^2.\n", seccionTransversal);
    printf("* Masa del propulsor m0: [%lld] Kg.\n", masaPropulsor);
    printf("* Masa inicial del combustible mf0: [%lld] Kg.\n", masaInicialCombustible);
    printf("\n")

}

void cohete3(){
char nombre[7];
strcpy(nombre," Chac  ");
long long empujeCohete=25000000;
float consumoEspecificoEmpuje=0.0002248;
float coeficienteCD=70.25;
float seccionTransversal=215.00;
long long masaPropulsor=180000;
long long masaInicialCombustible=2100000;

   printf("------------------------\n");
    printf("Cohete: [%s]\n",nombre); 
    printf("------------------------\n");
    printf("* Empuje del cohete E0: [%lld] N.\n", empujeCohete);
    printf("* Consumo especifico del empuje TSFC: [%f] Kg/(N*s).\n", consumoEspecificoEmpuje);
    printf("* Coeficiente de forma CD: [%f].\n", coeficienteCD);
    printf("* Seccion transversal del cohete A: [%f] m^2.\n", seccionTransversal);
    printf("* Masa del propulsor m0: [%lld] Kg.\n", masaPropulsor);
    printf("* Masa inicial del combustible mf0: [%lld] Kg.\n", masaInicialCombustible);
    printf("\n")
}