#include <stdio.h>

int main() {
    // Write C code here
    int n;
    int i,b,max,min;

    
    printf("Enter the lenght ");
    scanf("%d",&n);
    
    int a[n];
    
    max = a[0];
    min = a[1];
    for(i=0;i<n;i++)
    {
        printf("Enter value ");
        scanf("%d",&a[i]);
        
        if(max <= a[i])
        {
           max = a[i]; 
        }
        
        if(min >= a[i])
        {
            min = a[i];
        }
        if(max == min)
        {
            max = min;
        }
        
    }
    printf("Max is %d\n", max);
    printf("Min is %d", min);

    return 0;
}