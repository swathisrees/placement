/*given a string , reverse an array*/

#include<stdio.h>
#include<string.h>

    /*char s1[20],s2[20];
    int len=0,i;
    fgets(s1,19,stdin);
    s1[strlen(s1)]='\0';

    //fgets(s2,19,stdin);
    //ret=strcmp(s1,s2);
    // printf("\nret=%d\n",ret);

    strcpy(s2,s1);
    puts(s2);
    printf("\nlen=%d",strlen(s1));
    printf("\n")
    */
void main()
{
    char str1[100],temp;
    int len,i,j;
    fgets(str1,100,stdin);
    str1[strlen(str1)-1]=' ';
    len=strlen(str1);
    printf("\nbefore reversing the string:%s",str1);
    printf("\n");
    for(int i=0,j=len-1;i<=len/2,j>=len/2;i++,j--)
    {
      temp=str1[i];
      str1[i]=str1[j];
      str1[j]=temp;
    }
    printf("\nafter reversing the string:%s",str1);
 }
