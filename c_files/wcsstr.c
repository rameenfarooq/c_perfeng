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
wchar_t str[3][64] = {
        L"aaaaaa.",
        L"bbbbbb.",
        L"ccc.",
       
    };
    
    for( count=0; count <= 1000000; count++) {
        wcsstr(str[1], L"d");  }
    
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("wcsstr took %6.6f\n", secs);

}
