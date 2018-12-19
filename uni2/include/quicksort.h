#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <iostream>
#include <vector>

class QuickSort
{
public:
	int *bruto;
	int size;
	bool crescente;
	QuickSort(std::vector<int> , bool, int);
	void ordenar();
	void quicksort(int [], int, int);
	void trocar(int *, int *);
	int dividir(int[], int, int);
	void exibe();
	~QuickSort();
	
};

#endif