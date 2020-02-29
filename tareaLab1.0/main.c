#include <stdio.h>
#include <stdlib.h>
void menu();
void tarea1();
void tarea2();

int main()
{
    menu();
    return 0;
}
void menu()
{
   int n;
   printf("Bienvenido al menu\n");
   printf("1.Tarea 7.4\n");
   printf("2.Tarea 7.8\n");
   scanf("%d",&n);
   switch (n)
   {
   case 1:
    tarea1();
    break;
   case 2:
    tarea2();
    break;
   }
}
void tarea1()//Escribir una funcion logica digito que determine si un caracter es uno de los digitos de 0 a 9.
{
  char n;
  printf("Digite  ")
}
void tarea2()//Escribir un programa recursivo que calcule los N primeros numeros naturales.
{
    int n,i;
    printf("Digite un numero: ");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        printf("%d,",i);
    }
}
