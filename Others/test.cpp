#include<iostream>
#include<vector>
#define el '\n'
using namespace std;
void displayVector(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<< " ";
    }
    cout<<endl;
}
int main(){

/* 
    vector<int>x;
    for(int i=0; i<4; i++){
        cout<<"Enter : "<<endl;
        int element;
        cin>>element;
        x.push_back(element);
    }
    displayVector(x);

 */
    int n,m;
    cin>>n>>m;

    
    //int m1 [n][m], int m2 [n] [m];
    int m1[3][4]= { {1,1,2,3},{4,5,6,7},{8,9,0,10} };
    int m2[3][4]= { {10,9,4,9},{9,3,2,1},{6,3,6,8} };

/*     
    // taking user input to matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>m1[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>m2[i][j];
        }
    }

 */

    // this is the demo matrix
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<"|\t";
        for(int j=0; j<m; j++){
            cout<< m2[i][j] <<"\t";
        }
        cout<<"|"<<endl;
    }

    cout<<endl<<endl<<endl;
    // print the matrix
    for(int i=0; i<n; i++){
        cout<<"|  ";
        for(int j=0; j<m; j++){
            cout<< "a" << i<<j<<"  ";
        }
        cout<<"|"<<endl;
    }
    cout<<endl<<endl<<endl;

    int r3=3, c3=4;
    int r4=4, c4=4;

    int m3[r3][c3]= { {1,1,2,3},{4,5,6,7},{8,9,0,10} };
    int m4[r4][c4]= { {10,9,4,9},{9,3,2,1},{6,3,6,8},{1,4,6,3} };

    int m5[r3][c4];
    int sum=0;
    // multiplying matix here: 
    for(int i=0; i<r3; i++){
        for(int j=0; j<c4; j++){
            for(int k=0; k<c3; k++){
                sum = sum + m3[i][k] * m4[k][j];
            }
            m5[i][j]=sum;
            sum=0;
        }
    }

    cout<<endl<<endl;
    // this is the demo matrix
    cout<<endl;
    for(int i=0; i<r3; i++){
        cout<<"|\t";
        for(int j=0; j<c4; j++){
            cout<< m5[i][j] <<"\t";
        }
        cout<<"|"<<endl;
    }

    return 0;
}