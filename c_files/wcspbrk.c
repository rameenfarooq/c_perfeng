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
    wchar_t s1[] = L"sample wide string";
    wchar_t key[] = L"aeiou";
    
    
    for( count=0; count <= 1000000; count++) {
      wcspbrk( s1, key );
    }
    
    gettimeofday(&stop, NULL);
    double secs = (double)(stop.tv_usec - start.tv_usec) / 1000000 + (double)(stop.tv_sec - start.tv_sec);
    printf("wcspbrk took %6.6f\n", secs);

}
