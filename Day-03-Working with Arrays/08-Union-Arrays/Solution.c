#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);

    int arr1[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    scanf("%d", &m);

    int arr2[m];
    for(int i = 0; i < m; i++)
        scanf("%d", &arr2[i]);

    int i = 0, j = 0;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            if(i == 0 || arr1[i] != arr1[i-1])
                printf("%d ", arr1[i]);
            i++;
        }
        else if(arr2[j] < arr1[i]) {
            if(j == 0 || arr2[j] != arr2[j-1])
                printf("%d ", arr2[j]);
            j++;
        }
        else {
            if(i == 0 || arr1[i] != arr1[i-1])
                printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }

    while(i < n) {
        if(i == 0 || arr1[i] != arr1[i-1])
            printf("%d ", arr1[i]);
        i++;
    }

    while(j < m) {
        if(j == 0 || arr2[j] != arr2[j-1])
            printf("%d ", arr2[j]);
        j++;
    }
}