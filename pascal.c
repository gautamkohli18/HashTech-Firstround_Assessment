#include <stdio.h>

int main() {
    int a;
    printf("How long should the triangle be? Mention: ");
    scanf("%d", &a);

    for (int i=0;i<a;i++) 
    {
        for (int j=0; j<a-i-1; j++) 
        {
        printf(" ");
        }
        
        int first_row = 1;
        for (int k=0;k<=i;k++) 
        {
            printf("%d ", first_row);
            first_row = first_row *(i-k)/(k+1);
        }
        printf("\n");
    }

    printf("Hope you like Pascal and me for this!");
    return 0;
}
