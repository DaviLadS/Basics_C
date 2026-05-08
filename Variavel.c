#include <stdio.h> // incluindo a biblioteca padrão de entrada e saída
#include <stdlib.h> // incluindo a biblioteca para comando system("pause")
/* estrutura em C: programa principal */
int main(){
	int idade; //declaração de variável
    
    printf("Qual sua idade?\n");
    scanf("%d",&idade);
    printf("Minha idade: %d\n",idade);
    system("pause");
    return 0;
}
