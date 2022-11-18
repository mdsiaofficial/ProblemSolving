#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t,n,i;
	char a[100];
	cin>>t;
	while(t--)
	{
		cin>>n;
		int m[26]={0};
		for(i=0;i<n;i++)
		{
            cin>>a;

            m[a[0]-'a']++;

        }

        int flag=0;

        for(i=0;i<26;i++)
        {

            if(m[i]==3)
            {

                cout<<'a'+i<<endl;

                flag=1;

                break;

            }

        }

        if(flag==0)

            cout<<"impossible"<<endl;

    }

    return 0;
}