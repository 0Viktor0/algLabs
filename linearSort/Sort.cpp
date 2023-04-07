#include "Sort.h"

void CountingSort(int arr[], int n, int k) {
    int count[k+1]; // counter array, k - max array el
    int output[n]; // output array

    for (int i = 0; i <= k; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (int i = 1; i <= k; i++) {
        count[i] += count[i-1];
    }

    for (int i = n-1; i >= 0; i--) {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}
int GetDigit(int num, int i) {
    int div = 1;
    for (int j = 1; j < i; j++) {
        div *= 10;
    }
    return (num / div) % 10;
}
void RadixSort(int arr[], int n) {
    // find max el in arr
    int max_num = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_num) {
            max_num = arr[i];
        }
    }

    for (int i = 1; max_num / i > 0; i *= 10) {
        int count[10] = {0}; // counter array

        for (int j = 0; j < n; j++) {
            int digit = GetDigit(arr[j], i);
            count[digit]++;
        }

        for (int j = 1; j < 10; j++) {
            count[j] += count[j-1];
        }

        int output[n];

        for (int j = n-1; j >= 0; j--) {
            int digit = GetDigit(arr[j], i);
            output[count[digit]-1] = arr[j];
            count[digit]--;
        }

        for (int j = 0; j < n; j++) {
            arr[j] = output[j];
        }
    }
}