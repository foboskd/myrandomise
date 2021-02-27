#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>



int randomize() {
    setlocale(LC_ALL,"russian");
    int a;
trynow:
    srand(time(NULL));
    a = rand() % 255 + 32;
    
    if(a > 255){
        goto trynow;
    }
    
    return a;
    //printf("%i", a);
}

int main(){
    int a;
    a = randomize();

    printf("символ = %c\n", a);
}
