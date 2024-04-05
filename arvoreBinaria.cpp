#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct no{
	int valor;
	struct no *esq, *dir;
};

struct no * inserir (struct no *raiz, int valor){
	
	struct no *novo, *atual, *anterior;
	novo = (struct no*) malloc(sizeof(struct no));
	novo->valor = valor;
	novo->esq = novo->dir = (struct no*) NULL;
	if(raiz == (struct no*) NULL)
		raiz = novo;
	else{
		atual = raiz;
		anterior = (struct no*) NULL;
		while(atual){
			anterior = atual;
			if(novo->valor == atual->valor){
				printf("\nValor ja inserido!");
				return (raiz);
			}else{
				if(novo->valor < atual->valor)
					atual = atual->esq;
				else
					atual = atual->dir;
			}
			if(novo->valor < anterior->valor)
				anterior->esq = novo;
			else
				anterior->dir = novo;
		}
	}
	return (raiz);
}
void mostrar_ordem(struct no*raiz){
	if(raiz != (struct no*) NULL){
		mostrar_ordem(raiz->esq);
		printf("%d, ", raiz->valor);
		mostrar_ordem(raiz->dir);
	}
}
int main(){
	int op, valor;
	struct no *raiz;
	int altura, encontrado = 0;
	raiz = (struct no*) NULL;
	do{
		system("cls");
		printf("\n\n- Programa Arvore Binaria de Busca (ABB)");
		printf("\n<1> - Inserir na ABB");
		printf("\n<2> - Inserir Recursivamente na ABB");
		printf("\n<3> - Mostrar a ABB (em ordem)");
		printf("\n<9> - Sair do program\n\n");
		printf("Digite a opcao: ");
		scanf("%d", &op);
		
		switch(op){
			case 1: printf("Digite o valor a ser inserido: ");
					scanf("%d", &valor);
					raiz = inserir(raiz, valor);
			break;
			case 3: system("cls");
					printf("Mostrando a arvore em ordem: ");
					mostrar_ordem(raiz);
					getch();
			break;
		};
	} while(op != 9);
	return 0;
}
