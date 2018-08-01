#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
 double salario = 0;

 scanf("%lf", &salario);

 double total = 0;

 double perc = 0;

 if(salario > 500){
   perc = salario * 0.1;
   total = salario + perc;
   printf("%.2lf\n", total);
 }
 if(salario > 300 && salario <= 500){
   perc = salario * 0.07;
   total = salario + perc;
   printf("%.2lf\n", total);
 }
 if(salario <= 300){
   perc = salario * 0.05;
   total = salario + perc;
   printf("%.2lf\n", total);
 }



  return 0;
}
