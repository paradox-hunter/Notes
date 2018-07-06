#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
int main(void)
{
    string note = get_string("Enter the value\n");
    int fa = 440;
    double final = 0;
    double scale = 1.0/12;
    if (strlen(note) == 2)
    {
        char x = note[0];
        switch (x)
        {
            case 'B' : final = fa * pow(2, 2 * scale);
                    break;
            case 'A' : final = fa;
                    break;
            case 'G' : final = fa * pow(2, -2 * scale);
                    break;
            case 'F' : final = fa * pow(2, -4 * scale);
                    break;
            case 'E' : final = fa * pow(2, -5 * scale);
                    break;
            case 'D' : final = fa * pow(2, -7 * scale);
                    break;
            case 'C' : final = fa * pow(2, -9 * scale);
                    break;
        }

        int y = note[1] - '0';
        switch (y)
        {
            case 1 : final = final * pow(2, -3);
                    break;
            case 2 : final = final * pow(2, -2);
                    break;
            case 3 : final = final * pow(2, -1);
                    break;
            case 4 : final = final * 1;
                    break;
            case 5 : final = final * pow(2, 1);
                    break;
            case 6 : final = final * pow(2, 2);
                    break;
            case 7 : final = final * pow(2, 3);
                    break;
        }
    }
    else if (strlen(note) == 3)
    {
        char x = note[0];
        switch (x)
        {
            case 'B' : final = fa * pow(2, 2 * scale);
                    break;
            case 'A' : final = fa;
                    break;
            case 'G' : final = fa * pow(2, -2 * scale);
                    break;
            case 'F' : final = fa * pow(2, -4 * scale);
                    break;
            case 'E' : final = fa * pow(2, -5 * scale);
                    break;
            case 'D' : final = fa * pow(2, -7 * scale);
                    break;
            case 'C' : final = fa * pow(2, -9 * scale);
                    break;
        }
        char y = note[1];
        switch (y)
        {
            case '#' : final = final * pow(2, scale);
                    break;
            case 'b' : final = final * pow(2, scale);
                    break;
        }

        int z = note[2] - '0';
        switch (z)
        {
            case 1 : final = final * pow(2, -3);
                    break;
            case 2 : final = final * pow(2, -2);
                    break;
            case 3 : final = final * pow(2, -1);
                    break;
            case 4 : final = final * 1;
                    break;
            case 5 : final = final * pow(2, 1);
                    break;
            case 6 : final = final * pow(2, 2);
                    break;
            case 7 : final = final * pow(2, 3);
                    break;
        }

    }
    else
    {
        final = 440;
    }
    int answer = round(final);
    printf("The frequency is %d\n", answer);
}