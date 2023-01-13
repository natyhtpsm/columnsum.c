/* Name: Nathália Pimentel de Assis
  University: University of Brasilia
  Bachelor student in eletronic engineering course
  Date: June 18th 2019 */
  
  #include <stdio.h>

int main(){
double M[12][12];
int coluna, i, j;
double soma;
i = 0;
j = 0;
soma = 0;
char operacao;
    scanf("%d", &coluna);
    scanf(" %c", &operacao);
    for(i = 0; i<12; i++){
        for(j = 0; j<12; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    j=coluna;
    for(i=0;i<12;i++)
    {
        soma+=M[i][j];
    }

    if(operacao == 'M'){
        printf("%.1lf\n", soma/12);
    }
    else{
        printf("%.1lf\n", soma);
    }

return 0;
}
