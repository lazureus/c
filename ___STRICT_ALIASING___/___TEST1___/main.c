#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

static uint32_t swap_words(uint32_t arg)
{
    uint16_t* const sp = (uint16_t*) &arg ;
    uint16_t hi = sp[0] ;
    uint16_t lo = sp[1] ;

    sp[1] = hi ;
    sp[0] = lo ;

    return (arg) ;
}

int main(void)
{
    uint32_t a = 0x5A ;

    printf("Hello world\n") ;

    printf("Unswapped uint32_t word [%x]\n",a) ;

    printf("Swapped uint32_t word [%x]\n",swap_words(a)) ;

    return 0;
}
