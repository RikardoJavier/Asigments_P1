#include <stdio.h>
#include <stdlib.h>

//Realiza un programa que calcule la sumatoria, promedio, desviación estándar y la varianza de un conjunto de números. El programa debe ser capaz de calcular dichas métricas para un máximo de 900 números.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int n, num[900];
    float promedio=0,suma=0,varianza=0,desviacion=0;

    printf("Digite el rango del conjunto de numero:");
    scanf(" %d", &n);
    printf("\n");

    for (int i=0; i<n; i++)
    {
        printf("#%i Digite el numero: ",i+1);
        scanf(" %d", &num[i]);
        suma += num[i];
        promedio = suma/n;

    }

    for(i=0;i<n;i++){
        varianza += pow(num[i] - promedio,2);
    }

     varianza /= n;
     desviacion = sqrt(varianza);



    printf("\nLa sumatoria es: %.4f", suma);
    printf("\nEl promedio es:  %.4f", promedio);
    printf("\nLa varianza es:  %.4f", varianza);
    printf("\nLa desviacion estandar es: %.4f\n\n", desviacion);

    return 0;
}
