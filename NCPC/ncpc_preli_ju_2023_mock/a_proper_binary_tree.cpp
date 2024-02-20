#include <iostream>
using namespace std;


// Main function
int main() {
    // Read the number of test cases
    int T;
    cin >> T;

    // Loop through each test case
    while (T--) {
        // Read the height of the tree
        int n;
        cin >> n;

        // Draw the binary tree
        if(n==1){
            cout<<"o--|__"<<endl;
            cout<<"o--|"<<endl;
        }

        if(n==2){
            cout<<"o--|__"<<endl;
            cout<<"o--|  |__"<<endl;
            cout<<"o--|__|"<<endl;
            cout<<"o--|"<<endl;
        }

        if(n==3){
            cout<<"o--|__"<<endl;
            cout<<"o--|  |__"<<endl;
            cout<<"o--|__|  |"<<endl;
            cout<<"o--|     |__"<<endl;
            cout<<"o--|__   |"<<endl;
            cout<<"o--|  |__|"<<endl;
            cout<<"o--|__|"<<endl;
            cout<<"o--|"<<endl;
        }

        if(n==4){
            cout<<"o--|__"<<endl;
            cout<<"o--|  |__"<<endl;
            cout<<"o--|__|  |"<<endl;
            cout<<"o--|     |__"<<endl;
            cout<<"o--|__   |  |"<<endl;
            cout<<"o--|  |__|  |"<<endl;
            cout<<"o--|__|     |"<<endl;
            cout<<"o--|        |__"<<endl;
            cout<<"o--|__      |"<<endl;
            cout<<"o--|  |__   |"<<endl;
            cout<<"o--|__|  |  |"<<endl;
            cout<<"o--|     |__"<<endl;
            cout<<"o--|__   |"<<endl;
            cout<<"o--|  |__|"<<endl;
            cout<<"o--|__|"<<endl;
            cout<<"o--|"<<endl;
        }

        if(n==5){
            cout<<"o--|__"<<endl;
            cout<<"o--|  |__"<<endl;
            cout<<"o--|__|  |"<<endl;
            cout<<"o--|     |__"<<endl;
            cout<<"o--|__   |  |"<<endl;
            cout<<"o--|  |__|  |"<<endl;
            cout<<"o--|__|     |"<<endl;
            cout<<"o--|        |__"<<endl;
            cout<<"o--|__      |  |"<<endl;
            cout<<"o--|  |__   |  |"<<endl;
            cout<<"o--|__|  |  |  |"<<endl;
            cout<<"o--|     |__|  |"<<endl;
            cout<<"o--|__   |     |"<<endl;
            cout<<"o--|  |__|     |"<<endl;
            cout<<"o--|__|        |"<<endl;
            cout<<"o--|           |__"<<endl;
            cout<<"o--|__         |"<<endl;
            cout<<"o--|  |__      |"<<endl;
            cout<<"o--|__|  |     |"<<endl;
            cout<<"o--|     |__   |"<<endl;
            cout<<"o--|__   |  |  |"<<endl;
            cout<<"o--|  |__|  |  |"<<endl;
            cout<<"o--|__|     |  |"<<endl;
            cout<<"o--|        |__|"<<endl;
            cout<<"o--|__      |"<<endl;
            cout<<"o--|  |__   |"<<endl;
            cout<<"o--|__|  |  |"<<endl;
            cout<<"o--|     |__|"<<endl;
            cout<<"o--|__   |"<<endl;
            cout<<"o--|  |__|"<<endl;
            cout<<"o--|__|"<<endl;
            cout<<"o--|"<<endl;
        }


    }

    return 0;
}

/* 



 */