//June Challenge 2021
//CHFHEIST

#include <iostream>
using namespace std;
int main(){
    
    long t;
    cin>>t;
    
    while(t--){
        long  D,d,P,Q;
        long final=0;
        cin >> D >> d >> P >> Q;
        long n = D/d;
        
        final = n*P*d + (Q*(n*(n-1))/2)*d +(D%d)*(P+n*Q);
        
        cout << final << endl;
    }
    return 0;
}