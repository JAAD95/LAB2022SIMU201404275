/*
Autor:          Julio Alvarado
Fecha:          mar 03 may 2022 01:21:29 CST
Compilador:     gcc (Debian 10.2.1-6) 10.2.1 20210110
Compilar:       gcc -o presionvolumen.out presionvolumen.c -lm
Librerias:      stdio, math
Resumen:        Regresion linean por minimos cuadrados para
                la presion en funcion del volumen
*/

//librerias
#include <stdio.h>
#include <math.h>

//Declaracion e inicializacion de variables
//Error volumen
#define EV 0.1
//Error presion
#define EP 0.2
//Datos de volumen y presion
float x[]={54.3,61.8,72.4,88.7,118.6,194.0};
float y[]={61.2,49.2,37.6,28.4,19.2,10.2};
//Iteraciones
int n = 6;
int i;
float V = 100.0;

//prototipar funciones
void imprimir1(float vector[]);
void imprimir2(float vector[]);
float suma(float vector[]);
float sumaMulti(float vector1[], float vector2[]);

void main(){
    //Se declaran variables del problema
    float b, errorb, m, errorm, r, p;

    imprimir1(x);
    imprimir2(y);
    //Regresion lineal por minimos cuadrados
    m = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/(n*sumaMulti(x,x)-(suma(x)*suma(x)));

    b = (suma(y)-m*suma(x))/n;

    r = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/(sqrt((n*sumaMulti(x,x)-(suma(x)*suma(x)))*(n*sumaMulti(y,y)-(suma(y)*suma(y)))));

    errorm = (sqrt(n)*EV)/(sqrt(n*sumaMulti(x,x)-(suma(x)*suma(x))));

    errorb = EV/sqrt(n);

    printf("Dependencia lineal aproximada de presion vs volumen\n");
    
    printf("y = (%.3f +/- %.3f)x + (%.3f +/- %.3f)\n",m,errorm,b,errorb);
    printf("\n");
    printf("Coeficiente de determinacion: %f\n",r*r);
    printf("\n");

    //Calculo de un valor particular de presion
    p = (m*V)+b;
    printf("Cuando el valor del volumen es V=100.0 in^3\n");
    printf("La presion es igual a P=%.1f\n",p);

}

//Datos del problema
void imprimir1(float vector[]){
    printf("\n");
    printf("*****REGRESION LINEAL PRESION VS VOLUMEN*****\n");
    printf("\n");
    puts("Mediciones de volumen");
    for (int i = 0; i < n; i++){
        printf("%f ",vector[i]);
    }
    puts("\n");
}
void imprimir2(float vector[]){
    puts("Mediciones de presion");
    for (int i = 0; i < n; i++){
        printf("%f ",vector[i]);
    }
    puts("\n");
}

//suma de los elementos del vector
float suma(float vector[]){
    float resp = 0;
    for (int i = 0; i < n; i++){
        resp += vector[i];
    }
    return resp;
}

//suma de la multiplicacion de los elementos del vector
float sumaMulti(float vector1[], float vector2[]){
    float resp = 0;
    for (int i = 0; i < n; i++){
        resp += vector1[i]*vector2[i];
    }
    return resp;
}

