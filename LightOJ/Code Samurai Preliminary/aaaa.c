// Output code
#include <stdio.h>
#include <string.h>
int main()
{
	int t,n,i;
	char s[100][100];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s",s[i]);
		}

        int flag=0;

        for(i=0;i<n-2;i++)
        {

            if(s[i][0]==s[i+1][0] && s[i+1][0]==s[i+2][0])
            {

                printf("%c\n",s[i][0]);

                flag=1;

                break;

            }

        }

        if(flag==0)

            printf("impossible\n");

    }

    return 0;
}