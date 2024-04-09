#include<stdio.h>
#include<string.h>
main()
{
    int len, x;
    char str[101];
    scanf("%d",&x);
    while(x--)
    {
        scanf("%s",&str);
        len=strlen(str);
        if(len<=10)
        printf("%s\n",str);
        else
        printf("%c%d%c\n",str[0],len-2,str[len-1]);
    }
}
