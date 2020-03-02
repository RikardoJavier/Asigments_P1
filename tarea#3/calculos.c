#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, a[900],i;
    float promedio=0,suma=0,varianza=0,desviacion=0;

    printf("Digite la cantidad de promedios a realizar:");
    scanf(" %d", &n);
    printf("\n");
    for (i=0; i<n; i++)
    {
        printf("#%i Digite el numero: ",i+1);
        scanf(" %d", &a[i]);
        suma = suma+a[i];
        promedio = suma/n;
    }

    for(i=0;i<n;i++){
        varianza = varianza + pow(a[i] - promedio,2);
    }

     varianza = varianza/n;



    printf("\nSuma igual a: %.2f", suma);
    printf("\nPromedio igual a:  %.2f", promedio);
    printf("\nVarianza igual a:  %.2f", varianza);
    return 0;
}

