#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include <iostream>

using namespace std;

void Swap(int *a, int *b);
int Partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

#endif // SORT_H_INCLUDED
