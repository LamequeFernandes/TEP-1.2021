/*
Hoje, o memorável AtCoder Beginner Contest 100 acontece. Nesta ocasião, Takahashi gostaria de dar um número inteiro para Ringo.
Como o nome do concurso é AtCoder Beginner Contest 100, Ringo ficaria feliz se recebesse um número inteiro positivo que pode ser dividido por 100 exatamente D vezes.

Encontre o enésimo menor inteiro que faria Ringo feliz.

Restrições:
- D é 0, 1 ou 2.
- N é um número inteiro entre 1 e 100 (inclusive).

entrada:
- A entrada é fornecida a partir da entrada padrão no seguinte formato:
D N

saída:
Imprima o N -ésimo menor inteiro que pode ser dividido por 100 exatamente D vezes.
*/

#include <stdio.h>

int main(){
   
   int d, n;
   scanf("%d %d", &d, &n);

      if (d == 0 && n < 100)
         printf("%d\n", n);

      if (d == 1 || d == 2){      
         for (int i = 0; i < d; i++)
            n *= 100;
         printf("%d\n", n);
      }
   
   return 0;
}

/*
Hoje, o memorável AtCoder Beginner Contest 100 acontece. Nesta ocasião, Takahashi gostaria de dar um número inteiro para Ringo.
Como o nome do concurso é AtCoder Beginner Contest 100, Ringo ficaria feliz se recebesse um número inteiro positivo que pode ser dividido por 100 exatamente D vezes.

Encontre o enésimo menor inteiro que faria Ringo feliz.

Restrições:
- D é 0, 1 ou 2.
- N é um número inteiro entre 1 e 100 (inclusive).

entrada:
- A entrada é fornecida a partir da entrada padrão no seguinte formato:
D N

saída:
Imprima o N -ésimo menor inteiro que pode ser dividido por 100 exatamente D vezes.


Os inteiros que podem ser divididos por 100 exatamente 0 vezes (ou seja, não divisíveis por 100) são os seguintes:
1, 2, 3, 4, 5, 6, 7, ...
Portanto, o quinto menor número inteiro que faria Ringo feliz é 5.



Os inteiros que podem ser divididos por 100 exatamente uma vez são os seguintes:
100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, ...
Portanto, o número inteiro que estamos procurando é 1100.



Os inteiros que podem ser divididos por
100 exatamente duas vezes são os seguintes:
10.000, 20.000, 30000, ...
Portanto, o número inteiro que estamos procurando é 850000.
*/