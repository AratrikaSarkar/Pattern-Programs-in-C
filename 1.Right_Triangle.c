// Online C compiler to run C program online
#include <stdio.h>
void main() {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        printf("*");
        printf("\n");
    }
}
