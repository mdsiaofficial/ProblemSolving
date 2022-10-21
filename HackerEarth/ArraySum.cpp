#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	//cout <<num << endl;	// Writing output to STDOUT
	long long sum=0;
	for(int i=0; i<num; i++){

		int n;
		cin>>n;
		sum=sum+n;
	}
	cout<<sum<<endl;
	return 0;
}