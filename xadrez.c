#include <stdio.h>

int main()
{
//Variáveis
int contador_torre, contador_bispo = 1, contador_rainha = 1;

// Movimentação do torre com for
printf("Movimentação da torre\n");

for(contador_torre = 1;contador_torre<=5;contador_torre++)
{
printf("direita\n");
}

//Movimentação do bispo com while
printf("Movimentação do bispo\n");

while(contador_bispo<=5)
{
printf("Cima, direita\n");
contador_bispo++;
}

//Movimentação da rainha com do while
printf("Movimentação da rainha\n");


do{
printf("Esquerda\n");
contador_rainha++;
}
while(contador_rainha<=8);

return 0;
}
