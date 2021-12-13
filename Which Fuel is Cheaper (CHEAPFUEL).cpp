#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases; cin>>test_cases;
    while(test_cases--){
        int x, y, a, b, k;
        cin>>x>>y>>a>>b>>k;
        for(int i=1; i<k; i++){
            x+=a;
            y+=b;
        }
        if(x==y){
            cout<<"SAME PRICE"<<endl;
        }
        else if(x<y){
            cout<<"PETROL"<<endl;
        }
        else{
            cout<<"DIESEL"<<endl;
        }
    }
}
