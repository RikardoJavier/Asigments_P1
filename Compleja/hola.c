#include "hola.h"
#include <stdio.h>
#include <stdlib.h>
Complejo sumacompleja ()
{
    Complejo c,a,b;
    printf("\nAhora Una suma");
    printf("\nDigite un num real:");
    scanf("%d",&a.real);
    printf("\nDigite un num imag:");
    scanf("%d",&a.imag);
    printf("\nDigite un num real:");
    scanf("%d",&b.real);
    printf("\nDigite un num imag:");
    scanf("%d",&b.imag);
    c.real = a.real+b.real;
    c.imag = a.imag+b.imag;
    return c;
}
Complejo restacompleja ()
{
    Complejo d,a,b;
    printf("\nAhora Una Resta");
    printf("\nDigite un num real:");
    scanf("%d",&a.real);
    printf("\nDigite un num imag:");
    scanf("%d",&a.imag);
    printf("\nDigite un num real:");
    scanf("%d",&b.real);
    printf("\nDigite un num imag:");
    scanf("%d",&b.imag);
    d.real = a.real-b.real;
    d.imag = a.imag-b.imag;
    return d;
}
Complejo Multicomplejo ()
{
    Complejo m,a,b;
    printf("\nAhora Una multiplicacion");
    printf("\nDigite un num real:");
    scanf("%d",&a.real);
    printf("\nDigite un num imag:");
    scanf("%d",&a.imag);
    printf("\nDigite un num real:");
    scanf("%d",&b.real);
    printf("\nDigite un num imag:");
    scanf("%d",&b.imag);
    m.real= (a.real*b.real)-(a.imag*b.imag);
    m.imag= (a.real*b.imag)+(a.imag*b.real);
    return m;
}
