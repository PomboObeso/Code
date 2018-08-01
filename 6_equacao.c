#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

double equacao(double a,double b, double c){

  double delta = pow(b,2) - (4 * a * c);

  double x1 = ( - b + sqrt(delta))/(2 * a);
  double x2 = ( - b - sqrt(delta))/(2 * a);

  if( a != 0){
    if(delta >= 0){
    printf("%.2lf\n%.2lf\n", x1 , x2);
    }
  }
  if(a == 0){
    printf("NEESG\n");
  }
  if (delta < 0){
    printf("NRR\n");
  }
}

int main()
{
  double a,b,c;

  scanf("%lf %lf %lf", &a , &b , &c);

  equacao(a,b,c);

  return 0;
}
