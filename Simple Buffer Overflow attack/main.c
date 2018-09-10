#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[5];
    int pass = 0;
    char tempbuff[5];
    
    printf("\nEnter a password of length between 1 and 15 characters : \n--> ");
    scanf("%s",buff);

    printf("\nEnter your password : \n--> ");
    scanf("%s",tempbuff);

    if(strcmp(tempbuff, buff))
    {
        printf ("\nWrong Password \n");
    }
    else
    {
        printf ("\nCorrect Password \n");
        pass = 1;
    }

    if(pass)
        printf ("\nRoot privileges given to the user \n\n");

    return 0;
}

