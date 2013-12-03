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

void hello(rgb_color_t color) ;

void hello(rgb_color_t color)
{
    printf("Hello world [%d] \n",color) ;
}

int main(void)
{
    MY_color_data_t a =
    {
        .rgb = 3
    } ;

    hello(4) ;

    printf("1st[%d]\n 2nd[%d]\n3rd[%d]\n4th[%d]\n5th[%d]\n",a.color,a.rgb,a.rgb2,a.rgb3,a.rgb4) ;

    return 0;
}
