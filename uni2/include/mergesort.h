#ifndef MERGESORT_H
#define MERGESORT_H
#include <iostream>
#include <vector>

class MergeSort
{
public:
	int *bruto;
	int size;
	bool crescente;
	MergeSort(std::vector<int>, bool, int);
	void ordenar();
	void merge(int [], int, int, int);
	void mergesort(int [],int, int);
	void exibe();
	~MergeSort();
	
};

#endif