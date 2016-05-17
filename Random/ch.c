//Find Number of Vowels, Consonants, Digits and White Space Character

#include <stdio.h>

int main()
{
	char line[150];
	int ch, v, d, s, c, i;
	ch=v=d=s=c=0;
 
    printf("Insert text\n");
    gets(line);
    for(i=0;line[i]!='\n';i=i+1)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
            v=v=1;

        else if((line[i]>='a' && line[i]<='z') || (line[i]>= 'A') && (line[i]<= 'Z'))
            c=c+1;

        else if((line[i]>='1' && line[i]<='9'))
             d=d+1;
        else if (line[i] = ' ')
             s=s+1;
        
    }

    printf("Vowels: %d\n",v);
    printf("No.consonants: %d\n",c);
    printf("No.digits: %d\n",d);
    printf("No.white spaces: %d\n",s);
    printf("No.Characters:\n, ch");
    return 0;

}