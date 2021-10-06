//FACEDIR 
#include <iostream>
using namespace std;

void solve(){
    int x,i;
    cin>>x;
    
        if(x%4==0){
            cout<<"North"<<endl;
        }
        else if(x%4==1){
            cout<<"East"<<endl;
        }
        else if(x%4==2){
            cout<<"South"<<endl;
        }
        else if(x%4==3){
            cout<<"West"<<endl;
        }
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
