#include <stdio.h>

int main(int argc, char *argv[]){
    
    printf("Es cierto que: %i \n", (2>1 && 3>1 && 4>1));
    printf("Es cierto que: %i \n", (2>1 && 3>1 && 4<1));
    
    printf("Es cierto que: %i \n", (2>1 || 3>1 || 4>1));
    printf("Es cierto que: %i \n", (2>1 || 3>1 || 4<1));
    printf("Es cierto que: %i \n", (2<1 || 3<1 || 4<1));
    
    return 0;
}