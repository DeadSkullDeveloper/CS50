#include <cs50.h>
#include <stdio.h>
//  MIRZA BAŠIĆ, CS50, WEEK1, 07.06.2023.
int main(void)
{
    // TODO: Prompt for start size
    // LOGIC: born n/3, died n/4, calculate how much years it takesus for population to grow to a certain size
    // 100>>200 in 9 years --- smells like loop
    // I used tutorial provided by Harvard site
    int startInt, endInt, n = 0;
    do
    {
        startInt = get_int("Start size: ");
    }
    while (startInt < 9);

    do
    {
        endInt = get_int("End size: ");
    }
    while (endInt < startInt);

    // TODO: Calculate number of years until we reach threshold
    for(;;){
        if (startInt > endInt)
        {
            break;
        }
        startInt = startInt + (startInt / 3) - (startInt / 4);
        n++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", n);
}
