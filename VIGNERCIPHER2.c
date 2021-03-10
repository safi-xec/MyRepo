#include<stdio.h>
#include<string.h>
void main()
{
    char pt[50],key[50],ct[50],d[50],newkey[50],c;
    int i,j=0,keylen,msglen;

    printf("Enter the Plain text\n");
    scanf("%s",pt);
    msglen=strlen(pt);
    
    
    printf("Enter the Key\n"); ct[i]='\0';
    printf("%s",ct);
    scanf("%s",key);
    keylen=strlen(key);
    

    for ( i = 0; i < msglen; ++i,++j)
    {
        if (j==keylen)
        {
            j=0;
        }
        newkey[i]=key[j];
       
    }
    newkey[i]='\0';

    for ( i = 0; i < msglen; ++i)
    {
        c=pt[i];
        c=((c+newkey[i]-12)%26)+'a';
        ct[i]=c;    
    }
    ct[i]='\0';
    printf("%s\n",ct);
    
}