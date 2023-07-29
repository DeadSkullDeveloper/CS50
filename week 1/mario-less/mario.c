#include <cs50.h>
#include <stdio.h>

//  MIRZA BAŠIĆ, 09.06.2023. 22:06
//  RIGHT ALLIGNMENT
int main(void)
{
    int h, a = 0;
    do
    {
        h = get_int("Height: ");
    }
    //i>j OR i>=j >> left allignment
    while ((h < 1) || (h == 9));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if ((h - i <= j + 1))
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}