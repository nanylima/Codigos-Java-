#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float nota1=9; 
	float nota2=8;
	float nota3=7;
	float nota4=6;
	//exibindo o conteúdo da variável nota3
	printf("%.1f\n", nota3);
	// a linha abaixo cria um array (vetor) de 4 posições (colunas)
	float notas [4]={6,8,7,5}; //[0][1][2][3]
	//exibindo o conteúdo da posição[3] do vetor 
	printf("%.1f\n", notas[3]);
	system("Pause");
	return 0;
}
