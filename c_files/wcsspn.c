#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>
#include <ctype.h>
#include <wchar.h>
#include <wctype.h>



int main(void)
{
    struct timeval stop, start;
    gettimeofday(&start, NULL);
    unsigned int count;
    wchar_t * string = L"cdag";
       
    
    for( count=0; count <= 1000000; count++) {
         wcsspn( string, L"abc" );
    }
    
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("wcsspn took %6.6f\n", secs);

}
