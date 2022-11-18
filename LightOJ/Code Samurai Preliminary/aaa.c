#include<stdio.h>
#include<string.h>
#define pi 3.14159
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
#define ld long double
#define fsp(n) fixed<<setprecision(int(n))
#define sp(n) setprecision(int(n))
int main()
{
	int t,n,i;
	char a[100];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int m[26]={0};
		for(i=0;i<n;i++)
		{
		    scanf("%s",a);
            m[a[0]-'a']++;

        }

        int flag=0;

        for(i=0;i<26;i++)
        {

            if(m[i]==3)
            {

                printf("%c\n",'a'+i);

                flag=1;

                break;

            }

        }

        if(flag==0)

            printf("impossible\n");

    }

    return 0;
}