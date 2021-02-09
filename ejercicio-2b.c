#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    FILE * fptr1;
    FILE * fptr2;
    int c;
    fptr1 = fopen(argv[1], "r");
    fptr2 = fopen(argv[2], "w");

    while ((c = fgetc(fptr1)) != EOF)
    { 
        fputc(c, fptr2);
    }

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}
