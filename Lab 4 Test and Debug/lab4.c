#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
    int i, num, count;
    char lastmode, curmode;
    char str[100];
    scanf("%s", str);
    lastmode = 'n';
    if ((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
    {
        num = 1;
    }
    else if (str[0] >= '0' && str[0] <= '9')
    {
        num = 0;
    }
    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            curmode = 'c';
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            curmode = 'n';
        }
        if (lastmode == 'n' && curmode == 'n')
        {
            num = num * 10 + (str[i] - '0');
        }
        else if (lastmode == 'n' && curmode == 'c')
        {
            for (count = 0; count < num; count++)
            {
                printf("%c", str[i]);
            }
            num = 1;
        }
        else if (lastmode == 'c' && curmode == 'n')
        {
            num = str[i] - '0';
        }
        else if (lastmode == 'c' && curmode == 'c')
        {
            printf("%c", str[i]);
            num = 1;
        }
        lastmode = curmode;
    }
    return 0;
}