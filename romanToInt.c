#include <stdio.h>

int romanToInt(char *s)
{
    int i;
    int total;
    int aux;

    i = 0;
    total = 0;
    aux = 0;

    for (i = 0; s[i] != '\0'; i++)
    {

        if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
            aux = -1;

        else if (s[i] == 'I')
            aux = 1;

        else if (s[i] == 'V')
            aux = 5;

        else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
            aux = -10;

        else if (s[i] == 'X')
            aux = 10;

        else if (s[i] == 'L')
            aux = 50;

        else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
            aux = -100;

        else if (s[i] == 'C')
            aux = 100;

        else if (s[i] == 'D')
            aux = 500;

        else if (s[i] == 'M')
            aux = 1000;

        total += aux;
    }

    return total;
}

int main()
{
    int r;

    r = romanToInt("MCMXCIV");
    printf("%d\n", r);

    return 0;
}