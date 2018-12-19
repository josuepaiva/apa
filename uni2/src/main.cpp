#include <iostream>
#include "quicksort.h"

int main(int argc, char *argv[]) {
	int arr[] = {2,4,7,-2,50};

	QuickSort quicksort = QuickSort(arr, true, 5);
	quicksort.exibe();

	int opcao;
	std::cout<<"Digite o número correspondente ao algoritmo"<<std::endl;

	std::cin>>opcao;

	switch(opcao) {
		case 1:
			std::cout<<"Voce escolheu o merge sort"<<std::endl;
			break;
		case 2:
			std::cout<<"Voce escolheu o quicksort"<<std::endl;
			quicksort.ordenar();
			break;
		default:
			std::cout<<"Você nao escolheu nenhum opção"<<std::endl;
	}

	return 0;
}