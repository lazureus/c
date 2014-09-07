#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <inttypes.h>

struct iw_event
{
    uint16_t len;
    uint16_t cmd;
};


static inline char* iwe_stream_add_event(char* stream,char* ends,struct iw_event *iwe,int event_len)
{
    if((stream + event_len)<ends)
    {
        iwe->len = event_len ;
        memcpy(stream,(char*) iwe,event_len) ;
        stream += event_len ;
    }

    return stream ;
}


int main(void)
{
    printf("Hello world\n") ;

    int a = 0x12345678 ;
    short *b = (short*) &a ;

    b[1] = 0 ;

    if(a == 0x12345678)
    {
        printf("Let it DIEEEE !!!\n") ;
    }

    return 0;
}


