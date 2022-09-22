#include<bits/stdc++.h>
using namespace std;

int main(){


    string spec1, spec2, spec3;
    cin>>spec1;
    cin>>spec2;
    cin>>spec3;

    if(spec1=="vertebrado"){
        if(spec2=="ave"){
            if(spec3=="carnivoro"){
                cout<<"aguia"<<endl;
            }else if(spec3=="onivoro"){
                cout<<"pomba"<<endl;
            }
        }else if(spec2=="mamifero"){
            if(spec3=="onivoro"){
                cout<<"humem"<<endl;
            }else if(spec3=="herbivoro"){
                cout<<"vaca"<<endl;
            }
        }
    }else if(spec1=="invertebrado"){
        if(spec2=="inseto"){
            if(spec3=="hematofago"){
                cout<<"pulga"<<endl;
            }else if(spec3=="herbivoro"){
                cout<<"lagarta"<<endl;
            }
        }else if(spec2=="anelideo"){
            if(spec3=="hematofago"){
                cout<<"sanguessuga"<<endl;
            }else if(spec3=="onivoro"){
                cout<<"minhoca"<<endl;
            }
        }
    }

    return 0;
}