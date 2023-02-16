#include <bits/stdc++.h>
using namespace std;
int twice_as_old(int dad, int son) {
    
    if(son*2==dad){
        return 0;
    }else if(son*2<dad){
        return (dad-(son*2));
    }else if(son*2>dad){
        return ((son*2)-dad);
    }
}
