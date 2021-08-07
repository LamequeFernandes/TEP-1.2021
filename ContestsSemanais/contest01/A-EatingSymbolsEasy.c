/*
Sempre há um número inteiro na mente de Takahashi.

Inicialmente, o número inteiro na mente de Takahashi é 0.
Takahashi agora vai comer quatro símbolos, cada um dos quais é + ou -. Quando ele come +, o número inteiro em sua mente aumenta em 1;
quando ele come -, o número inteiro em sua mente diminui em 1.

Os símbolos que Takahashi vai comer são dados a você como uma string S.
O i-ésimo caractere em S é o i-ésimo símbolo para ele comer.

Encontre o número inteiro na mente de Takahashi depois que ele comer todos os símbolos.

Restrições
O comprimento de S é 4.
Cada caractere em S é + ou -.

A entrada é fornecida a partir da entrada padrão no seguinte formato:
S

Imprima o número inteiro na mente de Takahashi depois que ele comer todos os símbolos.

*/

#include <stdio.h>

int main(){
   
   int n = 0;
   char simbolos[4];
   scanf("%s", simbolos);

   for (int i = 0; i <4; i++){
      if (simbolos[i] == '+')
         n++;
      if (simbolos[i] == '-')
         n--;
   }

   printf("%d\n", n);

   return 0;
}