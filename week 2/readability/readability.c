#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//  MIRZA BAŠIĆ, 19.06.2023. 19:01
//  JUST COUNT ZEROS AND ONES

int count_letters(string input);
int count_words(string input);
int count_sentences(string input);

int main(void)
{
    //get input and inizialize (some) variables, others declare
    //get text
    string text = get_string("Text: ");
    //get average letters
    float L = count_letters(text) * 100.00 / count_words(text);
    //get average sentences
    float S = count_sentences(text) * 100.00 / count_words(text);
    //calculate grade
    float grade = round((0.0588 * L) - (0.296 * S) - 15.8);
    //check which grade
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0lf\n", grade);
    }
    // somehow words is glitched... why? i don't have a clue.
}

int count_letters(string input)
{
    //calculate letters
    int letters = 0;
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (((input[i] >= 'A') && (input[i] <= 'Z')) || ((input[i] >= 'a') && (input[i] <= 'z')))
        {
            letters++;
        }
    }
    return letters;
}
int count_words(string input)
{
    //calculate words
    int words = 0;
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (input[i] == ' ')
        {
            words++;
            //no protection against more whitespaces or dots in this code! sorry
            // my  name    is     cs50...
        }
    }
    return words + 1;
}
int count_sentences(string input)
{
    //calculate sentences
    int sentences = 0;
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if ((input[i] == '.') || (input[i] == '?') || (input[i] == '!'))
        {
            sentences++;
        }
    }
    return sentences;
}