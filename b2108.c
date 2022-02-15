#include <stdio.h>
#include <stdlib.h>
#include <math.h>

short* msort(short* array, int length){
    short* arr1, *arr2, *res;
    if (length == 1){
        res = calloc(1, sizeof(short));
        res[0] = array[0];
    }else if (length % 2 == 0){
        int i, j, k;
        j = 0; k = 0;
        arr1 = msort(array, length / 2);
        arr2 = msort(array + length / 2, length / 2);
        res = calloc(length, sizeof(short));
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
        res = calloc(length, sizeof(short));
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
    int N, i, sum, *count, cnt;
    short new, min, max, mid, mode, flag_second, avg;
    sum = 0;
    min = 4000;
    max = -4000;
    cnt = 0;
    flag_second = 0;
    count = calloc(8001, sizeof(int));
    scanf("%d", &N);

    for (i = 0; i < 8001; i++){
        count[i] = 0;
    }

    short numbers[N];
    for (i = 0; i < N; i++){
        scanf("%hd", &new);
        numbers[i] = new;
        sum += new;
        count[new + 4000]++;
        if (new > max)
            max = new;
        if (new < min)
            min = new;
    }

    short *res = msort(numbers, N);
    mid = res[N / 2];

    for (i = 0; i < 8001; i++){
        if (count[i] == cnt && flag_second == 0) {
            mode = i - 4000;
            flag_second = 1;
        }
        if (count[i] > cnt) {
            cnt = count[i];
            mode = i - 4000;
            flag_second = 0;
        }
    }

    avg = round((double)sum / N);

    printf("%d\n%d\n%d\n%d\n", avg, mid, mode, max - min);
}