// Helper functions for music

#include <cs50.h>
#include <string.h>
#include <math.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // TODO
    int numerator = fraction[0] - '0';
    int denominator = fraction[2] - '0';
    switch (denominator)
    {
        case 2 :
            numerator *= 4;
            break;
        case 4 :
            numerator *= 2;
            break;
        case 8 :
            numerator *= 1;

    }
    return numerator;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
    int fa = 440;           //assigning the frequency of A440
    double final = 0;
    const double scale = 1.0 / 12;          //using 1.0 division to get a double value
    if (strlen(note) == 2)                  //checking for string without accidentals
    {
        char x = note[0];
        switch (x)
        {
            case 'B' :
                final = fa * pow(2, 2 * scale);
                break;
            case 'A' :
                final = fa * 1;
                break;
            case 'G' :
                final = fa * pow(2, -2 * scale);
                break;
            case 'F' :
                final = fa * pow(2, -4 * scale);
                break;
            case 'E' :
                final = fa * pow(2, -5 * scale);
                break;
            case 'D' :
                final = fa * pow(2, -7 * scale);
                break;
            case 'C' :
                final = fa * pow(2, -9 * scale);
                break;
        }

        int y = note[1] - '0';
        switch (y)
        {
            case 1 :
                final = final * pow(2, -3);
                break;
            case 2 :
                final = final * pow(2, -2);
                break;
            case 3 :
                final = final * pow(2, -1);
                break;
            case 4 :
                final = final * 1;
                break;
            case 5 :
                final = final * pow(2, 1);
                break;
            case 6 :
                final = final * pow(2, 2);
                break;
            case 7 :
                final = final * pow(2, 3);
                break;
        }
    }
    else if (strlen(note) == 3)                 //checking for notes with accidentals
    {
        char x = note[0];
        switch (x)
        {
            case 'B' :
                final = fa * pow(2, 2 * scale);
                break;
            case 'A' :
                final = fa * 1;
                break;
            case 'G' :
                final = fa * pow(2, -2 * scale);
                break;
            case 'F' :
                final = fa * pow(2, -4 * scale);
                break;
            case 'E' :
                final = fa * pow(2, -5 * scale);
                break;
            case 'D' :
                final = fa * pow(2, -7 * scale);
                break;
            case 'C' :
                final = fa * pow(2, -9 * scale);
                break;
        }
        char y = note[1];
        switch (y)
        {
            case '#' :
                final = final * pow(2, scale);
                break;
            case 'b' :
                final = final * pow(2, -scale);
                break;
        }

        int z = note[2] - '0';
        switch (z)
        {
            case 1 :
                final = final * pow(2, -3);
                break;
            case 2 :
                final = final * pow(2, -2);
                break;
            case 3 :
                final = final * pow(2, -1);
                break;
            case 4 :
                final = final * 1;
                break;
            case 5 :
                final = final * pow(2, 1);
                break;
            case 6 :
                final = final * pow(2, 2);
                break;
            case 7 :
                final = final * pow(2, 3);
                break;
        }

    }
    else
    {
        final = 440;
    }
    int answer = round(final);
    return answer;
}
// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
    bool ans;
    if (s[0] == '\0')
    {
        ans = true;
        return ans;
    }
    else
    {
        return false;
    }
}
