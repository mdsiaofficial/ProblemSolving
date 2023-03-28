#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdint>

using namespace std;

int bi_to_dec(int bi){

    int dec=0;
    for(int i=0; i<log10(bi); i++)
    {
        dec = dec+ ((bi%10) * pow(2, i));
        bi=bi/10;
    }
    return dec;
}

int dec_to_bi(int dec){

    int bi=0;
    vector<int>bin;
    string binn;
    int i=0;
    while (dec)
    {
        //bin.push_back(dec%2);
        binn[i]= dec%2;
        i++;
        dec = dec / 2;
    }
    //bin.push_back(1);
    binn[i]='1';
    //bi = atoi(binn);
    cout<<binn<<endl;
    return 1;
}

int dec_to_bi2(int dec){

    vector<int>bit;
    while (dec>0)
    {
        bit.push_back(dec%2);
        dec = dec/2;
    }
    reverse(bit.begin(), bit.end());
    //int x = bit;
    return 1;
}

string add_binary3(int a, int b){
    string bin;
    int i=0;
    int dec=a+b;
    while (dec>0)
    {
        bin[i]=dec%2;
        dec = dec/2;
        i++;
    }
    bin[i]=bin[i]+'1';
    reverse(bin.begin(), bin.end());
    return bin;
}



// this function only works . left all are not doing work
string add_binary(unsigned long long a,unsigned long long b) {
    unsigned long long sum = a + b;
    string output;

    do {
        output = to_string(sum % 2) + output;
        sum = sum / 2;
    } while(sum > 0);

    return output;
}
int main() {
    cout<<add_binary(2,3)<<endl;
    return 0;
}
