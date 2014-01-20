#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef enum
{
    ENUM_SENTINEL = -1,
    ENUM_VAL_YELLOW = 1,
    ENUM_VAL_BLUE = 2,
    ENUM_VAL_SENTINEL = 3
} color_t ;

typedef enum
{
    RED_COLOR = 1,
    BLUE_COLOR = 2,
    GREEN_COLOR = 3
} rgb_color_t ;

typedef struct
{
    color_t color ;
    rgb_color_t rgb ;
    rgb_color_t rgb2 ;
    rgb_color_t rgb3 ;
    rgb_color_t rgb4 ;
} MY_color_data_t ;

void hello(color_t color) ;

void hello(color_t color)
{
    printf("Color [%d] \n",(int)color) ;
}

int main(void)
{
    MY_color_data_t a =
    {
        .rgb = RED_COLOR,
    } ;

    printf("Hello world\n") ;
    printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]\n",(int)a.color,(int)a.rgb,(int)a.rgb2,(int)a.rgb3,(int)a.rgb4) ;

    hello(a.color) ;

    return 0;
}
