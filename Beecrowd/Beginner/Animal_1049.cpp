#include<bits/stdc++.h>
using namespace std;

int main(){

/*  //my solve: 

    string spec1, spec2, spec3;
    cin>>spec1;
    if(spec1=="vertebrado"){
        cin>>spec2;
        if(spec2=="ave"){
            cin>>spec3;
            if(spec3=="carnivoro"){
                cout<<"aguia"<<endl;
            }else{          // if(spec3=="onivoro"){
                cout<<"pomba"<<endl;
            }
        }else{     //if(spec2=="mamifero"){
            cin>>spec3;
            if(spec3=="onivoro"){
                cout<<"humem"<<endl;
            }else{          // if(spec3=="herbivoro"){
                cout<<"vaca"<<endl;
            }
        }
    }else{              // if(spec1=="invertebrado"){
        cin>>spec2;
        if(spec2=="inseto"){
            cin>>spec3;
            if(spec3=="hematofago"){
                cout<<"pulga"<<endl;
            }else{              // if(spec3=="herbivoro"){
                cout<<"lagarta"<<endl;
            }
        }else{      //if(spec2=="anelideo"){
            cin>>spec3;
            if(spec3=="hematofago"){
                cout<<"sanguessuga"<<endl;
            }else{              // if(spec3=="onivoro"){
                cout<<"minhoca"<<endl;
            }
        }
    }

*/


    string c;

    cin >> c;

    if(c == "vertebrado"){
  
        cin >> c;
        if(c == "ave"){

            cin >> c;
            if(c == "carnivoro"){
                cout << "aguia" << endl;
            }else{
                cout << "pomba" << endl;
            }
        }else{

            cin >> c;
            if(c == "onivoro"){
                cout << "homem" << endl;
            }else{
                cout << "vaca" << endl;
            }
        }
    }else{

        cin >> c;
        if(c == "inseto"){

            cin >> c;
            if(c == "hematofago"){
                cout << "pulga" << endl;
            }else{
                cout << "lagarta" << endl;
            }
        }else{

            cin >> c;
            if(c == "hematofago"){
                cout << "sanguessuga" << endl; 
            }else{
                cout << "minhoca" << endl;
            }
        }
    }
    
    return 0;
}