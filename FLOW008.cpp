//FLOW008

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int N;
	    cin >> N;
	    if(N>=-20 && N<10){
	        cout << "Thanks for helping Chef!" <<endl;
	    } 
	    else{
	        cout << "-1" <<endl;
	    }
	}
	return 0;
}
