#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Please enter the duration of your shower: ");
    scanf("%d", &a);
    
    b = 12;
    
    c = a * b;
    printf("minutes: %d\n", a);
    printf("bottles: %d\n", c); 
    return 0;
}