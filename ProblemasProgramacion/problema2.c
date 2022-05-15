/*
Autor:          Julio Alvarado
Fecha:          dom 15 may 2022 03:19:48 CST
Compilador:     gcc (Debian 10.2.1-6) 10.2.1 20210110
Compilar:       gcc -o problema2.out problema2.c
Librerias:      stdio
Resumen:        Calculo de media aritmetica, maximo y minimo de numero
                indeterminado de alturas, altura negativa finaliza programa
*/
#include <stdio.h>
//Declaracion y definicion de variables
int n=0;
float med=0, x=0, max=0, min=0;

int main()
{
//Se leen los datos ingresados
    puts("Calculo de media, maxima y minima altura");
    puts("Ingrese una altura negativa para finalizar programa");
    puts("Ingrese una altura: ");
    scanf("%f",&x);
//Se almacena el valor ingresado en variables max y min
    max=x;
    min=x;
//Validar signo de la altura
    while (x>0)
    {
// Acumular los datos de conteo y media
        n++;
        med+=x;
//Validar si valor ingresado es mayor o menor que el anterior
        if (x>max)max=x;
        if (x<min)min=x;
//Se solicita una nueva altura
        puts("Ingrese otra altura: ");
        scanf("%f",&x);
    }
// Se valida si ninguna altura fue positiva
    if (n==0)puts("No ingreso alturas validas");
    else{
//Se muestra el valor de la media, maximo y minimo
        printf("La media es: %.2f, \n El maximo es: %.2f, \n El minimo es: %.2f\n",med/n,max,min);

    }

}