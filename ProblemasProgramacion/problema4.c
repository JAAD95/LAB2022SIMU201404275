/*
Autor:          Julio Alvarado
Fecha:          dom 15 may 2022 03:19:48 CST
Compilador:     gcc (Debian 10.2.1-6) 10.2.1 20210110
Compilar:       gcc -o problema4.out problema4.c
Librerias:      stdio
Resumen:        El programa determina si un numero ingresado, siendo
                mayor a 1, es primo o no.
*/
#include <stdio.h>
//se declaran variables.
int N, i, primo;

int main(){
//Bienvenida y solicitud de numero
    puts("Bienvenido, ingrese un numero entero mayor que 1");
    scanf("%d",&N);
//se inicializan variables de control
    i=2;
    primo=1;
//se verifica que el número ingresado sea positivo
    if(N>1){
//valida si numero ingresado es mayor a 3 para ingresar a bucle
        while(i<(N-1)){
//Se verifica si hay residuo para modificar variable de control o continuar iteracion     
         if(N%i==0)primo=0;
         i++;    
        }
 //Se valida estatus de variable de control para decidir si es primo o no   
        if(primo==0){
            puts("no es primo\n");
        }
        if(primo!=0){
            puts("es primo\n");
         }
    }
//si numero ingresado no es mayor que 1, solicitar uno
    else{
        puts("Ingrese un numero entero mayor que 1\n");
    }
    return 0;
}
