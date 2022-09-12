#include <stdio.h>
#include <string.h>
#define MAX  20

int main()
{
    unsigned char str[MAX];
    unsigned char *exiting_string = "exit";
    signed char result;

    while(1)
    {
        printf("i say > ");
        gets(str);
        result = strcmp(str , exiting_string);
        if(0 == result)
        {
            printf("Good Bye :)\n");
            break;
        }
        else
        {
            printf("you said : %s\n",str);
        }
    }

    return 0;
}
