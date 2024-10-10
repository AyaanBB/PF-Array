#include <stdio.h>

int main() {
    // Write C code here
    char str[100];
    char s[100];
    
    printf("Enter name ");
    getchar();
    
    scanf("%[A-Za-z ]",&s);
    printf("Your name is %s\n", s);
    
    printf("Enter email ");
    getchar();
    
    scanf("%[A-Za-z@._-0-9 ]",&str);
     printf("Your email is %s\n", str);
    

    
    printf("Enter number ");
    getchar();
    
    scanf("%[-0-9_]",&s);   
    printf("Your number is %s", s);
    
    
    

    return 0;
}