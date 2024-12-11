#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {
    
    int n, a;
    
    srand(time(NULL));
    n = (rand() % 100) +1 ;
    //printf("%d\n",n);
    for (int i = 0; i < 5; i++)
    {
        do{
        printf("Ingrese un numero 1-100 : ");
        scanf("%d",&a);
        }while(a<1 || a>100);

        if (a==n)
        {
            printf("Ganaste\n");
            break;
        }else if (a<n)
        {
            printf("El numero secreto es mayor\n");
        }else{
            printf("El numero secreto es menor\n");
        }

        if(i==4){
            printf("Perdiste");
        }
    }

    return 0;
}