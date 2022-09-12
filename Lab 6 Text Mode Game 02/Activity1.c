#include <stdio.h>
#include <string.h>
int main()
{
    char *str, text[256];
    str = text;
    scanf("%s", text);
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i] - 32);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i] + 32);
        }
    }
    return 0;
}