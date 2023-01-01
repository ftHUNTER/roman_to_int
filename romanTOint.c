#include <stdio.h>
#include <stdlib.h>

int romanToInt(char * s)
{
    int i;
    int x;
    int tab[89];

    x = 0;
    i = 0;
    tab['I'] = 1;
    tab['V'] = 5;
    tab['X'] = 10;
    tab['L'] = 50;
    tab['C'] = 100;
    tab['D'] = 500;
    tab['M'] = 1000;

    while (s[i])
    {
        if((s[i] != 'M') || (s[i] != 'L') || (s[i] != 'V') || (s[i] != 'X') || (s[i] != 'I') || (s[i] != 'D') || (s[i] != 'C'))
        {
            printf("TF");
            return 0;
        }
        if (s[i] == 'M')
        {
            if (i && tab[s[i - 1]] < tab['M'])
            {
                x -= tab[s[i - 1]];
                x += 1000 - tab[s[i - 1]];
            }
            else
                x += 1000;
        }
        if (s[i] == 'D')
        {
            if (i && tab[s[i - 1]] < tab['D'])
            {
                x -= tab[s[i - 1]];
                x += 500 - tab[s[i - 1]];
            }
            else
                x += 500;
        }
        if (s[i] == 'C')
        {
             if (i && tab[s[i - 1]] < tab['C'])
            {
                x -= tab[s[i - 1]];
                x += 100 - tab[s[i - 1]];
            }
            else
                x += 100;
        }
        if (s[i] == 'L')
        {
             if (i && tab[s[i - 1]] < tab['L'])
            {
                x -= tab[s[i - 1]];
                x += 50 - tab[s[i - 1]];
            }
            else
                x += 50;
        }
        if (s[i] == 'X')
        {
             if (i && tab[s[i - 1]] < tab['X'])
            {
                x -= tab[s[i - 1]];
                x += 10 - tab[s[i - 1]];
            }
            else
                x += 10;
        }
        if (s[i] == 'V')
        {
             if (i && tab[s[i - 1]] < tab['V'])
            {
                x -= tab[s[i - 1]];
                x += 5 - tab[s[i - 1]];
            }
            else
                x += 5;
        }
        if (s[i] == 'I')
        {
            if (i && tab[s[i - 1]] < tab['I'])
            {
                x -= tab[s[i - 1]];
                x += 1 - tab[s[i - 1]];
            }
            else
                x += 1;
        }
        i++;
    }
    return (x);
}

