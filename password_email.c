#include <stdio.h>

int main()
{
    int i, length, upr = 0, lwr = 0, num = 0, spe = 0;
    char pwd[10];

    printf("Enter your password");
    gets(pwd);

    length = strlen(pwd);
    printf("%d", length);
    for (i = 0; i < length; i++)
    {
        if (pwd[i] <= 65 && pwd[i] > 90)
            upr++;
        if (pwd[i] <= 97 && pwd[i] > 122)
            lwr++;
        if (pwd[i] <= 48 && pwd[i] > 57)
            upr++;
        if (pwd[i] == '@' || pwd[i] == '#')
            spe++;
    }
    if (upr > 0 && lwr > 0 && num > 0 && spe > 0)
    {
        printf("your password is so weak");
    }
    else
    {
        printf("your password is so strong");
    }
}
