#include <stdio.h>

    int main(){
      int vetor[7];
      int i, j, temp;

    printf("Digite os valores do vetor: \n");
    for(i=0; i<7; i++){
    scanf("%d", &vetor[i]);
    }

    for(i=0; i<7;i++){
    for(j=i+1; j<7; j++){
    if(vetor[i] > vetor[j]){
    temp = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = temp;
    }
   }
  }

    printf("Vetor organizado em ordem crescente: \n");
    for(i=0; i<7; i++){
    printf("%d", vetor[i]);
    }

  return 0;
 }
