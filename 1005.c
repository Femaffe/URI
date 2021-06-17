#include <stdio.h>
#include <stdlib.h>
int main()
{
    float A, B, MEDIA;
    
    scanf("%f%f", &A, &B);
    MEDIA=((A*(3.5/100))+(B*7.5/100));
    printf("MEDIA = %.5f\n", MEDIA);
 
    return 0;
}