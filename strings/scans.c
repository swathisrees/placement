#include<stdio.h>
#include<string.h>
int main()
{
    char line[1024]="this is a classroom.",token;
    //scanf("%[^\n]s",line); /*scans all the ketters until enter is pressed*/
    printf("\nLine:%s",line);

    token=strtok(line," ");
    while(token!=NULL)
    { 
        printf("\ntoken:%s\n",token);
        token=strtok(NULL,".");
    }
   

    token=strtok(NULL," ");
    printf("\ntoken:%s\n",token);

    token=strtok(NULL," ");
    printf("\ntoken:%s\n",token);

    token=strtok(NULL," ");
    printf("\ntoken:%s\n",token);

    token=strtok(NULL," ");
    printf("\ntoken:%s\n",token);

    

    if(token!=NULL)
    {
    token=strtok(NULL," ");
    printf("\ntoken:%s\n",token);
    }
   
    else
     {
     printf("NULL");
     }

     printf("\n\n");
     return 0;

}