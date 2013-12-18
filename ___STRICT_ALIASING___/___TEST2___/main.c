#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct
{
    uint16_t a ;
    uint16_t b ;
    uint16_t c ;
} Sample ;

static void test(uint32_t* restrict values,Sample* restrict uniform,uint64_t count)
{
    uint64_t i ;

    for(i = 0; i<count ;i++)
    {
        values[i] += (uint32_t) uniform->b ;
    }
}

int main(void)
{
    uint32_t a[10] = {0} ;
    uint64_t size = (uint64_t)(sizeof(a)/sizeof(a[0])) ;

    Sample sample =
    {
        .a = 2U,
        .b = 4U,
        .c = 8U,
    } ;

    test(a,&sample,size) ;

    printf("[%x][%x]\n",a[0],a[4]) ;

    return 0;
}
