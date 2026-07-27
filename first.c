// While loop Link_code C language
#include <stdio.h>
int main()
{
    int ch = 65;

    while (ch <= 90)
    {
        printf("%d : %c | %d : %c \n", ch, ch, ch + 32, ch + 32);
        ch++;
    }
}