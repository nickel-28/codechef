//TEST

#include <iostream>

using namespace std;

void solve(){
    int n[100],i;
    for(i=0; i<100; i++){
            cin>>n[i];
        
        if(n[i]==42){
            break;
        }
        else cout<<n[i]<<endl;
    }
}

int main() {
    solve();
	
	return 0;
}
