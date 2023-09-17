//aluno Gregório de Albuquerque Borba Cavalcanti
//atividade busca em vetor
//1
// #include <stdio.h>
// #include <stdlib.h>
// int main(void) {
//   int vetor [10];
//   int maior;
//   for (int i= 0;i<10; i++){
//     printf("informe o vetor %d",i);
//     scanf("%d",&vetor[i]);
//   }
//   maior = vetor[0];
//   for(int i=0;i<10;i++){
//     if(vetor[i]>maior){
//       maior=vetor[i];
//     }
//   }
//   printf("O maior vetor é vetor %d",maior);
//   return 0;
// }
//2
// #include <stdio.h>
// #include<stdlib.h>
// int main (void){
//   int vetor [10];
//   int menor;
//   for (int i= 0;i<10; i++){
//     printf("informe o vetor %d",i);
//     scanf("%d",&vetor[i]);
//   }
//   maior = vetor[0];
//   for(int i=0;i<10;i++){
//     if(vetor[i]<menor){
//       menor=vetor[i];
//     }
//   }
//   printf("O menor vetor é vetor %d",menor);
//   return 0;
// }
//3
// #include <stdlib.h>
// #include <stdio.h>
// int main (void){
//   int vetor [10];
//   int maior;
//   int posicao;
//   for (int i= 0;i<10; i++){
//     printf("informe o vetor %d ",i);
//     scanf("%d",&vetor[i]);
//   }
//   maior= vetor[0];
//   posicao=0;
//   for(int i=0;i<10;i++){
//     if(vetor[i]>maior){
//       maior=vetor[i];
//       posicao = i;
//     }
//   }
//   printf("O menor vetor é vetor %d",maior);
//   printf(" e se encontra na posição %d\n",posicao);
//   return 0;
// }
//4
// #include <stdlib.h>
// #include <stdio.h>
// int main (void){
//   int valores[5];
//     int maior, menor;
//     int posicao_maior, posicao_menor;
//     printf("Digite 5 valores:\n");
//     for (int i = 0; i < 5; i++) {
//         printf("Digite o %dº valor: ", i + 1);
//         scanf("%d", &valores[i]);
//     }
//     maior = valores[0];
//     menor = valores[0];
//     posicao_maior = 0;
//     posicao_menor = 0;
//     for (int i = 1; i < 5; i++) {
//         if (valores[i] > maior) {
//             maior = valores[i];
//             posicao_maior = i;
//         }
//         if (valores[i] < menor) {
//             menor = valores[i];
//             posicao_menor = i;
//         }
//     }
//     printf("O maior valor %d . Na posição %d.", maior, posicao_maior);
//     printf("O menor valor %d . Na posição %d.", menor, posicao_menor);
//     return 0;
// }
//5
// #include <stdlib.h>
// #include <stdio.h>
// int main (void){
//   int vetor[10];
//     int valoresIguais = 0;
//     printf("Digite 10 valores inteiros:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("Digite o %dº valor: ", i + 1);
//         scanf("%d", &vetor[i]);
//     }
//     for (int i = 0; i < 9; i++) {
//         for (int j = i + 1; j < 10; j++) {
//             if (vetor[i] == vetor[j]) {
//                 valoresIguais = 1; 
//                 printf("Valores iguais encontrados: %d e %d", vetor[i], vetor[j]);
//             }
//         }
//     }
//     if (valoresIguais == 0) {
//         printf("Não foram encontrados valores iguais no vetor.");
//     }
//     return 0;
// }