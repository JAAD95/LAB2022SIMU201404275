/*
Autor:          Julio Alvarado
Fecha:          dom 15 may 2022 03:19:48 CST
Compilador:     gcc (Debian 10.2.1-6) 10.2.1 20210110
Compilar:       gcc -o problema1.out problema1.c
Librerias:      stdio
Resumen:        Media aritmetica de numeros positivos
*/

//librerias
#include <stdio.h>
//Se definen y declaran variables globales
float x =  0, suma = 0;
int i = 0, n = 0;

int main()
{
//Mensaje de bienvenida
    puts("Calculadora de media aritmetica\n");
//Bucle de 3 iteraciones, se solicitanb 3 numeros
    while(i<3)
    {
        puts("Ingrese un numero: ");
        scanf("%f",&x);
//Se valida que numero ingresado sea > 0
        if (x>=0)
        {
//Se registra iteracion y se almacena la suma
            n++;
            suma+=x;
        }
        i++; //Se pasa a la siguiente iteracion
    }
//si no se ingresan numeros positivos, se imprime mensaje
    if (n==0)
    { 
        puts("No ingreso numeros positivos\n");
    } else
    {
//calculo de la media artimetica de n numeros positivos
        printf("La media aritmetica de los datos es: %.1f \n", suma/n);
    }
    return 0;
}
