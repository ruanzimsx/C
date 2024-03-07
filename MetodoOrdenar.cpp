#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int *vet, int n){
	int i, j, aux;
	for(i = i; i < 8; i++){
		for(j = i+1; j < 8; j++){
			if(vet[j] < vet[i]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
				
			}
		}
	}
}
int main(){
	int v[8] = {12,76,43,12,3,56,6,19}, i, j;
	printf("Vetor Original: ");
	for(j = 0; j < 8; j++){
		printf("%d, ", v[j]);
	}
	printf("\n\n");
	bubbleSort(v,8);
	printf("Vetor Ordenado: ");
	for(i = 0; i < 8;i++){
		printf("%d, ", v[i]);
	}
}
