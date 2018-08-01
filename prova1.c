#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void verificacao(double dist , double reais, double litros, double postos, double gasolina){

  /*
  d = distancia / (p+1)
  r = dinheiro
  l = tanque * 10 = distancia maxima
  p = qtd postos
  g = preco da gasolina
  eficiencia do carro = litros * 10
  */
  double efici = litros * 10;
  double dist_falta = dist - efici;
  double preco_dist_falta = (dist_falta / 10) * gasolina;
  double troco = reais - preco_dist_falta;
  double dist_posto = dist /(postos +1);

  if(efici >= dist){
    printf("Pode viajar.\nR$: %0.lf\n", reais);
    }
  else{
    if(postos == 0){
    printf("Nao pode viajar!\n");
    }
    if(posto != 0){
      if(reais >= preco_dist_falta && dist_posto <= efici){

        printf("Pode viajar.\nR$: %0.lf\n", troco);

      }
      else{
        printf("Nao pode viajar!\n");
      }
    }
}

}

int main()
{

  double dist = 0;
  double reais = 0;
  double litros = 0;
  double postos = 0;
  double gasolina = 0;

  scanf("%lf %lf %lf %lf %lf", &dist, &reais, &litros, &postos, &gasolina);

  verificacao(dist,reais,litros,postos,gasolina);

  return 0;
}
