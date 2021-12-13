#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases; cin>>test_cases;
    while(test_cases--){
        int x, y;
        cin>>x>>y;
        if(x==0 and y%2==0){
            cout<<"YES"<<endl;
        }
        else if(x==0 and y%2!=0){
            cout<<"NO"<<endl;
        }
        else if((x+(2*y))%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
