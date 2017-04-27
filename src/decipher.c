#include <stdio.h>

#define ENG 26
#define NUM 10

void decipher(int n)
{
    FILE *stream1;
    stream1 = fopen("output.txt", "r");
        if (stream1 == NULL) {
        printf("output.txt cannot be opened");
    }
    FILE *stream2;
    stream2 = fopen("inoutput.txt", "w");
        if (stream2 == NULL) {
        printf("inoutput.txt cannot be opened");
    }
}