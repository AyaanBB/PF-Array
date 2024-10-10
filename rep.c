#include <stdio.h>
int main() {
    
    int n,i;
    
    printf("Enter length ");
    scanf("%d",&n);
    
    int arr[n];
    
    for(i = 0;i < n;i++) {
        printf("Enter values ");
        scanf("%d",&arr[i]);
    }

    int freq[n];
    for (i = 0; i < n; i++) {
        freq[i] = 0;
    }
    int temp;
    
    for (int i = 0; i < n; i++) {
        temp = arr[i];
        freq[temp]++;
    }
    
    printf("Elements occurring more than once are: ");
    for (int i = 0; i < n; i++) {
        if (freq[i] > 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}