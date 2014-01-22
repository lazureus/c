#include <stdio.h>
#include <stdint.h>

#define BORDER_I 300
#define BORDER_J 3000

int main(void)
{
    uint8_t i ;
    uint_fast8_t j ;
    const uint32_t border_i = 300 ;
    const uint32_t border_j = 3000 ;

    printf("Hello world\n") ;

    for(i=0 ; i< BORDER_I ;++i)
    {
        for(j=0 ;j < BORDER_J ;++j)
        {
            ;
        }
    }

    for(i=0 ; i< border_i ;++i)
    {
        for(j=0 ;j < border_j ;++j)
        {
            ;
        }
    }

    return 0;
}
