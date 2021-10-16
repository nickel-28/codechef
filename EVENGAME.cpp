//EVENGAME

#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum = 0;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            sum += x;
        }
        if(sum%2 == 0){
            cout<<"1\n";
        }
        else{
            cout<<"2\n";
        }
    }
	return 0;
}
