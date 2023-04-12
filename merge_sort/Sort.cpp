#include "Sort.h"

//first sub-array arr[l..m]
//second sub-array arr[m + 1..r]
void Merge(int arr[], int l, int m, int r){
    int i, j, k;
    //two sub-arrays
    int n1 = m - l + 1;
    int n2 = r - m;

    //temporary arrays
    int L[n1], R[n2];

    //copy data to temp arrays
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    //merge temp arrays
    i = 0. j = 0, k = l;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[], int l, int r){
    if(l < r) {
        int m = l + (r - l) / 2;

        //sort first and second halves
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);

        //merge the sorted halves
        Merge(arr, l, m, r);
    }
}





