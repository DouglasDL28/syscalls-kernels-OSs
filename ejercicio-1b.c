#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int f = (int) fork();

    if (f==0) {
        execl("./ejercicio-1a", (char*) NULL);
    }
    else {
        printf("%d\n", (int) getpid());
        execl("./ejercicio-1a", (char*) NULL);
    }
    
    return 0;
}
