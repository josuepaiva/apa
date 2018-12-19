#include "quicksort.h"

QuickSort::QuickSort(int ar[], bool valor, int size) {
	this->size = size;
	this->bruto = new int [size];

	for(int i = 0; i < size; i++) {
		this->bruto[i] = ar[i];
	}

	this->crescente = valor;
}

QuickSort::~QuickSort() {
	delete []bruto;
}

void QuickSort::ordenar() {
	int baixo = 0;
	int alto = size - 1;

	quicksort(this->bruto, baixo, alto);
	exibe();
}

void QuickSort::quicksort(int arr[], int baixo, int alto) {

	if( baixo < alto) {
		int pi = dividir(arr, baixo, alto);

		quicksort(arr, baixo, pi -1);
		quicksort(arr, pi+ 1, alto);
	}
}

void QuickSort::trocar(int *a, int *b) {
	int troca = *a;
	*a = *b;
	*b = troca;
}

int QuickSort::dividir(int arr[], int baixo, int alto) {
	int pivo = arr[alto];
	int i = (baixo - 1);
	for(int j = baixo; j <= alto - 1; j++) {

		if(arr[j] <= pivo) {
			i++;
			trocar(&arr[i],&arr[j]);
		}
	}

	trocar(&arr[i+1],&arr[alto]);
	return (i + 1);
}

void QuickSort::exibe() {
	std::cout<<"Array bruto"<<std::endl;
	for(int i = 0; i < size; i++) {
		std::cout<<this->bruto[i];
	}
	std::cout<<"\n";
}