#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//  MIRZA BAŠIĆ, 16.06.2023. 18:15 - 15 min pauza
//  SHIFT BY SLOT
//  USED ONLINE RESOURCES TO LEARN MORE ABOUT CAESAR'S ENCYPTION AND LIBRARY FUNCTIONS/COMMANDS
/*  I HAD DIFFERENT VISION IN MY MIND ON HOW TO APPROACH THIS PROBLEM USING ITOA() FUNCTION BUT
    THIS ONE WITH SUBTRACTION SEEMS MUCH EASIER TO UNDERSTAND AND TO DO
*/
string caesarShift(string text, int key);
bool numbers(string texxt);

int main(int argc, string argv[])
{
    int input = 0;
    // check if argument exists
    if (argc == 2)
    {
        input = atoi(argv[1]);
    }
    else
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }
    //check if argument is out of range
    if (input >= 26)
    {
        input %= 26;
    }
    //check if argument is a number
    //this took me over a hour to solve, but now, it works...
    string s = argv[1];
    bool check = numbers(s);
    if (check == false)
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }
    else
    {
        if ((argc != 2) || (input < 0))
        {
            printf("Usage: ./caesar key \n");
            return 1;
        }
        // get plain and cipher
        string name = get_string("plaintext: ");
        printf("ciphertext: %s\n", caesarShift(name, input));
    }
    return 0;
}
bool numbers(string texxt)
{
    for (int i = 0, n = strlen(texxt); i < n; i++)
    {
        if (!isdigit(texxt[i]))
        {
            return false;
        }

    }
    return true;
}

string caesarShift(string text, int key)
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //now we do subtraction
        //range a - z
        if (islower(text[i]))
        {
            //deduct
            if (text[i] + key > 'z'/*z*/)
            {
                //go backl
                text[i] = text[i] - 26;
            }
            // else go forward and cipher
            text[i] = text[i] + key;
        }
        else if (isupper(text[i]))
        {
            //deduct
            if (text[i] + key > 'Z')
            {
                // go back
                text[i] = text[i] - 26;
            }
            // else go forward and cipher
            text[i] = text[i] + key;
        }
    }
    return text;
}