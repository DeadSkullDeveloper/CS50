#include <cs50.h>
#include <stdio.h>
//  MIRZA BAŠIĆ, 10.06.2023. 19:03
void valid(long);
int main(void)
{
    long MANTISA;
    //input number
    MANTISA = get_long("Number: ");
    //check if credit card number is valid
    valid(MANTISA);
}
void valid(long card)
{
    int zc, sc, s1 = 0, s2 = 0, check, len = 0;
    long temp1 = card, temp2 = card, temp3 = card;
    //get length of a card number
    do
    {
        len++;
        if ((temp3 > 9) && (temp3 < 99))
        {
            check = temp3;
        }
        temp3 /= 10;
    }
    while (temp3 != 0);
    // we use s1 to store odd sum, s2 to store even sum
    // check if
    // ODD
    do
    {
        zc = temp1 % 10;
        s1 += zc;
        temp1 = temp1 / 100;
    }
    while (temp1 != 0);
    // EVEN
    do
    {
        temp2 = temp2 / 10;
        sc = temp2 % 10;
        if ((sc * 2) > 9)
        {
            s2 += ((sc * 2) / 10) + ((sc * 2) % 10);
        }
        else
        {
            s2 += sc * 2;
        }
        temp2 = temp2 / 10;
    }
    while (temp2 != 0);
    // print and check which brand of card is
    if ((s1 + s2) % 10 == 0)
    {
        if (((check == 34) || (check == 37)) && (len == 15))
        {
            printf("AMEX\n");
        }
        else if ((check / 10 == 4) && ((len == 13) || (len == 16)))
        {
            printf("VISA\n");
        }
        else if (((check > 50) && (check < 56)) && (len == 16))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}