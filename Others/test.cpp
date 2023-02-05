#include <bits/stdc++.h>
using namespace std;

int points(const std::array<std::string, 10>& games) {
    int c=0;
    for(int i=0; i<10; i++){
      string g=games[i];
      if(g[0] > g [2]){
        c=c+3;
      }else if(g[0] == g [2]){
        c=c+1;
      }else{
        c=c+0;
      }
    }
  
    return c;
}
int main()
{
    //array<string, 10>games={"1:1","2:2","3:3","4:4","2:2","3:3","4:4","3:3","4:4","4:4"};
    int a=345678;
    //string x="45385593107843568";
    //cout<<x.length()<<endl;
    //cout<<points(games);
    cout<<sizeof(a);
    return 0;
}
