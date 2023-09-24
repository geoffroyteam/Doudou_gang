
#include <stdio.h> 
void echange (int *x, int *y) 
{
    int buffer = *x; 
    *x= *y;
    *y = buffer;
}

int main()
{
    int a = 3, b=5;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    echange (&a, &b); 
    printf("a = %d\n",a);
    printf("b = %d\n",b); 
    return 0;

}

