#include "mergesort.h"

MergeSort::MergeSort(std::vector<int> ar, bool valor, int size) {
	this->size = size;
	this->bruto = new int [size];

	for(int i = 0; i < size; i++) {
		this->bruto[i] = ar[i];
	}

	this->crescente = valor;
}

MergeSort::~MergeSort() {
	delete []bruto;
}

void MergeSort::ordenar() {
	mergesort(this->bruto, 0, size -1);
	exibe();
}


void MergeSort::mergesort(int arr[], int esquerda, int direita) {
	
	if(esquerda < direita) {
		int meio = esquerda + (direita - esquerda )/2;

		mergesort(arr, esquerda, meio);
		mergesort(arr, meio+1, direita);

		merge(arr, esquerda, meio, direita);
	}
}

void MergeSort::merge(int arr[], int esquerda, int meio, int direita) {
	int i, j, k;
	int n1 = meio - esquerda +1;
	int n2 = direita - meio;

	int tempEsq[n1], tempDir[n2];

	for( i = 0; i < n1; i++) {
		tempEsq[i] = arr[esquerda + i];
	}

	for( j = 0; j < n2; j++) {
		tempDir[j] = arr[meio + 1 + j];
	}

	i = 0;
	j = 0;
	k = esquerda;

	while(i < n1 && j < n2) {
		if(tempEsq[i] <= tempDir[j]) {
			arr[k] = tempEsq[i];
			i++;
		} else {
			arr[k] = tempDir[j];
			j++;
		}
		k++;
	}

	while( i < n1) {
		arr[k] = tempEsq[i];
		i++;
		k++;
	}

	while( j < n2) {
		arr[k] = tempDir[j];
		j++;
		k++;
	}
}

void MergeSort::exibe() {
	std::cout<<"Array bruto"<<std::endl;
	for(int i = 0; i < this->size; i++) {
		std::cout<<" "<<this->bruto[i];
	}
	std::cout<<"\n";
}