#include <stdio.h>

int main() 
{
    int number[6];
    int i = 0;
    
    // Using a do-while loop to enter numbers
    do {
        printf("Enter number%d: \n", i + 1);
        scanf("%d", &number[i]);
        i++;
    } while(i < 6);
    
    i = 0;
    printf("\nYou entered:\n");
    do {
        printf("%d\n", number[i]);
        i++;
    } while(i < 6);
    
    return 0;
}
