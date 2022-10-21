#include <bits/stdc++.h>
#include <ifstream>

using namespace std;
int main(){

    ifstream fin(nn.txt);

    char c;

    if(fin!='\0'){

        while (!fin.eof())
        {   
            fin.get(c);
            cout<<c;

            /* code */
        }
        fin.close();
        
    }else{
        cout<<endl<<"LLL"<<endl;
    }
    return 0;
}
