#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
        int i = 1;
        while(1) {
        printf("%d ",i);
        fflush(stdout);
        if (i % 10 == 0) {
            printf("\n");
        }
	i++;
	sleep(1);
    }
    exit(0);
}

