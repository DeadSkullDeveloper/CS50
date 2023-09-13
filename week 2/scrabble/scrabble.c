#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8 , 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

//  MIRZA BAŠIĆ, 16.06.2023. 17:28
//  ASCII: 65-90 97-122

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    } else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    int totalSum = 0;
    // TODO: Compute and return score for string
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        //  check if char is in range
        if (((word[i] >= 65) && (word[i] <= 90)) || ((word[i] >= 97) && (word[i] <= 122)))
        {

            char check = word[i];   // get singhe char from an array of chars
            //add points
            switch (check)
            {
                case 'a':
                    totalSum += POINTS[0];
                    break;
                case 'A':
                    totalSum += POINTS[0];
                    break;
                case 'e':
                    totalSum += POINTS[4];
                    break;
                case 'E':
                    totalSum += POINTS[4];
                    break;
                case 'i':
                    totalSum += POINTS[8];
                    break;
                case 'I':
                    totalSum += POINTS[8];
                    break;
                case 'l':
                    totalSum += POINTS[11];
                    break;
                case 'L':
                    totalSum += POINTS[11];
                    break;
                case 'n':
                    totalSum += POINTS[13];
                    break;
                case 'N':
                    totalSum += POINTS[13];
                    break;
                case 'o':
                    totalSum += POINTS[14];
                    break;
                case 'O':
                    totalSum += POINTS[14];
                    break;
                case 'r':
                    totalSum += POINTS[17];
                    break;
                case 'R':
                    totalSum += POINTS[17];
                    break;
                case 's':
                    totalSum += POINTS[18];
                    break;
                case 'S':
                    totalSum += POINTS[18];
                    break;
                case 't':
                    totalSum += POINTS[19];
                    break;
                case 'T':
                    totalSum += POINTS[19];
                    break;
                case 'u':
                    totalSum += POINTS[20];
                    break;
                case 'U':
                    totalSum += POINTS[20];
                    break;
                case 'b':
                    totalSum += POINTS[1];
                    break;
                case 'B':
                    totalSum += POINTS[1];
                    break;
                case 'c':
                    totalSum += POINTS[2];
                    break;
                case 'C':
                    totalSum += POINTS[2];
                    break;
                case 'm':
                    totalSum += POINTS[12];
                    break;
                case 'M':
                    totalSum += POINTS[12];
                    break;
                case 'p':
                    totalSum += POINTS[15];
                    break;
                case 'P':
                    totalSum += POINTS[15];
                    break;
                case 'd':
                    totalSum += POINTS[3];
                    break;
                case 'D':
                    totalSum += POINTS[3];
                    break;
                case 'g':
                    totalSum += POINTS[6];
                    break;
                case 'G':
                    totalSum += POINTS[6];
                    break;
                case 'f':
                    totalSum += POINTS[5];
                    break;
                case 'F':
                    totalSum += POINTS[5];
                    break;
                case 'h':
                    totalSum += POINTS[7];
                    break;
                case 'H':
                    totalSum += POINTS[7];
                    break;
                case 'v':
                    totalSum += POINTS[21];
                    break;
                case 'V':
                    totalSum += POINTS[21];
                    break;
                case 'w':
                    totalSum += POINTS[22];
                    break;
                case 'W':
                    totalSum += POINTS[22];
                    break;
                case 'y':
                    totalSum += POINTS[24];
                    break;
                case 'Y':
                    totalSum += POINTS[24];
                    break;
                case 'k':
                    totalSum += POINTS[10];
                    break;
                case 'K':
                    totalSum += POINTS[10];
                    break;
                case 'j':
                    totalSum += POINTS[9];
                    break;
                case 'J':
                    totalSum += POINTS[9];
                    break;
                case 'x':
                    totalSum += POINTS[23];
                    break;
                case 'X':
                    totalSum += POINTS[23];
                    break;
                case 'q':
                    totalSum += POINTS[16];
                    break;
                case 'Q':
                    totalSum += POINTS[16];
                    break;
                case 'z':
                    totalSum += POINTS[23];
                    break;
                case 'Z':
                    totalSum += POINTS[23];
                    break;
                default:
                    printf("invalid\n");
                    break;
            }
        }
        else
        {
            // totalSum += 0; OR do nothing
        }
    }
    return totalSum;
}
