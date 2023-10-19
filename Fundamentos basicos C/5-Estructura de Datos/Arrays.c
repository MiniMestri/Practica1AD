#include <stdio.h>

int main (int argc, char *argv[]){
    int num[5];
    char* agenda[3][3];
    
    agenda[0][0]="Alfonso Lopez";
    agenda[0][1]="312312";
    agenda[0][2]="alfonslopez@hotmail.com";
    
    agenda[1][0]="Pepe Garcia";
    agenda[1][1]="62343";
    agenda[1][2]="pepelopez@hotmail.com";
    
    agenda[2][0]="Lola flores";
    agenda[2][1]="3224323";
    agenda[2][2]="lolaflores@hotmail.com";
    
    printf("El 2 registro de la agenta es: %s \n",agenda[2][0]);
    
    num[0]=634324;
    num[1]=23;
    num[2]=4323;
    num[3]=23233;
    num[4]=23123213;
    
    printf("El 3 numero es: %i \n",num[2]);
    
    return 0;
}