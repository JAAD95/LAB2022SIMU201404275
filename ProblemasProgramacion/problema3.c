/*
Autor:          Julio Alvarado
Fecha:          dom 15 may 2022 03:19:48 CST
Compilador:     gcc (Debian 10.2.1-6) 10.2.1 20210110
Compilar:       gcc -o problema3.out problema3.c
Librerias:      stdio
Resumen:        Se calcula la raiz cuadrada entera por defecto
                de un numero positivo dado.
*/
//Se incluyen las librerias
#include <stdio.h>

//Se definen y declaran variables
float N;
int R;
int i;

int main(){
//Se solicita el numero a calcular la raiz cuadrada
    puts("Bienvenido a la calculadora de raices cuadradas enteras por defecto");
    puts("Ingrese un numero positivo: ");
    scanf("%f",&N);
//Se inicia la validacion de cardinalidad con variables de control
    R=1;
    i=1;
//Se busca numero que al elevar al cuadrado sea menor que N
    if(N>0){
        while(i<=N){
        R++;
        i=R*R;
    }
//Si el cuadrado > N, se presenta resultado entero por defecto
        printf("La raiz entera por defacto: %d\n",R-1);
    }
//Si no se ingresa un numero positivo, solicitar uno
    else{
        puts("Ingrese un numero positivo");
    }   
return 0;
}

