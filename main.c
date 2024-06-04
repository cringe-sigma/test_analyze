#include <stdio.h>
#define ARRAY_SIZE 10
#include "test_header.h"
int main() {
    printf("Hello, World!\n");
    printf("%lf\n",MY_PI);
    int i;
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("i::%d\n",i);
        if (i > 5.09)
        {
            printf("I__I\n");
        }
    }
    return 0;
}
