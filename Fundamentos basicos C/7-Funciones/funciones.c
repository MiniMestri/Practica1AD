#include <stdio.h>



int sumar(int num1, int num2){
    
    return num1+num2;
}
int restar(int num1, int num2){
    
    return num1-num2;
}
int main(int argc, char *argv[]){

   printf("El resultado de 5+6 es: %i \n", sumar(5,6));
    printf("El resultado de 5-6 es: %i \n", restar(5,6));
    
    
    return 0;
}

