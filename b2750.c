#include <stdio.h>
#include <stdlib.h>

int* msort(int* array, int length){
    int* arr1, *arr2, *res;
    if (length == 1){
        res = calloc(1, sizeof(int));
        res[0] = array[0];
    }else if (length % 2 == 0){
        int i, j, k;
        j = 0; k = 0;
        arr1 = msort(array, length / 2);
        arr2 = msort(array + length / 2, length / 2);
        res = calloc(length, sizeof(int));
        for (i = 0; i < length; i++){
            if (j == length / 2)
                res[i] = arr2[k++];
            else if (k == length / 2)
                res[i] = arr1[j++];
            else if (arr1[j] <= arr2[k])
                res[i] = arr1[j++];
            else if (arr1[j] > arr2[k])
                res[i] = arr2[k++];
        }
        free(arr1);
        free(arr2);
    }else if (length % 2 == 1){
        int i, j, k;
        j = 0; k = 0;
        arr1 = msort(array, length / 2);
        arr2 = msort(array + length / 2, length / 2 + 1);
        res = calloc(length, sizeof(int));
        for (i = 0; i < length; i++){
            if (j == length / 2)
                res[i] = arr2[k++];
            else if (k == length / 2 + 1)
                res[i] = arr1[j++];
            else if (arr1[j] <= arr2[k])
                res[i] = arr1[j++];
            else if (arr1[j] > arr2[k])
                res[i] = arr2[k++];
        }
        free(arr1);
        free(arr2);
    }
    return res;
}

int main(void){
    int N, i;
    scanf("%d", &N);
    int *numbers = calloc(N, sizeof(int));
    for (i = 0; i < N; i++)
        scanf("%d", numbers + i);
    
    int *res = msort(numbers, N);
    for (i = 0; i < N; i++)
        printf("%d \n", res[i]);

}