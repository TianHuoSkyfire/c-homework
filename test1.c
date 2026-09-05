#include <stdio.h>

int main() 
{
    int price = 0;
    printf("Enter the price: ");
    scanf("%d", &price);
    int change = 100 - price;
    printf("The change is: %d\n", change);
    return 0;

}