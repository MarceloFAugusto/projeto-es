#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *tipo_produto;
	tipo_produto = fopen("tipo-produto.txt", "r+");
	
	if (tipo_produto == NULL) {
		printf("Ocorreu um erro ao abrir o arquivo.\n");
		fopen("tipo-produto.txt", "w+");
	}
	
	system("pause");
	return 0;
}
