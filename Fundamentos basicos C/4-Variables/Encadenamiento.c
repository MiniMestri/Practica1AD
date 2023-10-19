#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    
    int num=20;
    char nombre[]="Alfonso ";
    char apellido[]="Lopez";
    
    strcat(nombre,apellido);
    printf("Mi nombre completo es: %s \n",nombre);
    
    printf("El numero es: %i \n", num);
    num+=5;
    printf("El numero mas 5 es: %i \n", num);
    num-=10;
    printf("El numero menos 10 es: %i \n", num);
    num*=4;
    printf("El numero por 4 es: %i \n", num);
    num/=2;
    printf("El numero dividido 2 es: %i \n", num);
    
    
    
    return 0;
}