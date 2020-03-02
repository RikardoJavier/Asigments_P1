#include <stdio.h>
#include <stdlib.h>
#include "hola.h"
int main()
{
    Complejo a,b,c,d,m;
    c=sumacompleja();
    printf ("\nEl resultado Suma es:  [%d],[%di]",c.real,c.imag);
    d=restacompleja();
    printf ("\nEl resultado resta es:  [%d],[%di]",d.real,d.imag);
    m=Multicomplejo();
    printf ("\nEl resultado multiplicacion es:  [%d],[%di]",m.real,m.imag);
    return 0;
}
