#include <stdio.h>

int main() 
{
    int number;
    int i = 0;
    while(i < 6) {
        printf("Enter number%d \n", i + 1);
        scanf("%d", &number[i]);
        i++;
    }
    i = 0;
    while(i < 6) {
        printf("%d\n", number[i]);
        i++;
    }
    return 0;
}
