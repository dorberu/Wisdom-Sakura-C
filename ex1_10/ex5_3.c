#include <stdio.h>

int main()
{
    int ope1;
    int ope2;

    printf("Enter a number\n");
    printf("Enter First\n");
    scanf("%d", &ope1);
    
    printf("%d, Enter Second\n", ope1);
    scanf("%d", &ope2);
    
    printf("Answer is %d", ope1 + ope2);
    
    return 0;
}