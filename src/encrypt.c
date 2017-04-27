#include <stdio.h>

#define ENG 26
#define NUM 10

void encrypt(int n)
{
    FILE *stream1;
    stream1 = fopen("input.txt", "r");
        if (stream1 == NULL) {
        printf("input.txt cannot be opened");
    }
    FILE *stream2;
    stream2 = fopen("output.txt", "w");
        if (stream2 == NULL) {
        printf("output.txt cannot be opened");
    }
}