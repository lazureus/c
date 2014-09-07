#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void)
{
    static int32_t hello[1000] ;
    static int32_t yellow ;

    printf("Check static variable\n") ;

    printf("[%d]\n",yellow) ;

    printf("Check static array\n") ;

    for(uint32_t i=0;i<1000;i++)
    {
        if((i%50) == 0)
        {
            printf("\n") ;
        }

        printf("[%d]",hello[i]) ;
    }

    printf("\n") ;

    return 0;
}
