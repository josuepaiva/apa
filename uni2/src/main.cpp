#include <iostream>
#include "quicksort.h"
#include "mergesort.h"
#include "parserfile.h"

int main(int argc, char *argv[]) {

	if(argc <= 2) {
		std::cout<<"Example: ./main -pathfile pasta/example.txt"<<std::endl;
		return 0;
	}

	ParserFile file = ParserFile(argv[2]);

	MergeSort mergesort = MergeSort(file.dados, true, file.dados.size());
	QuickSort quicksort = QuickSort(file.dados, true, file.dados.size());			

	int opcao;
	std::cout<<"Digite o número correspondente ao algoritmo"<<std::endl;
	std::cout<<"-------------------------"<<std::endl;
	std::cout<<"1 - MergeSort"<<std::endl;
	std::cout<<"2 - QuickSort"<<std::endl;
	std::cout<<"-------------------------"<<std::endl;


	std::cin>>opcao;

	switch(opcao) {
		case 1:
			std::cout<<"Voce escolheu o mergesort"<<std::endl;
			mergesort.ordenar();
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