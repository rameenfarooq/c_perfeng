#include <stdio.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <wchar.h>
#include <wctype.h>


int main(void)
{
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;

    for( count=0; count <= 1000000; count++) {
        if(iswblank('g'))
            return 0;

  }

    
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("iswblank took %6.6f\n", secs);
}
