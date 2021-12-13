#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases; cin>>test_cases;
    while(test_cases--){
        int x; cin>>x;
        bool flag=true;
        map<int, int> spl;
        for(int i=0; i<x; i++){
            int tmp;
            cin>>tmp;
            spl[tmp]++;
        }
        for(auto i: spl){
            auto j=spl.crbegin();
            if(j->second==2){
                cout<<"-1"<<endl;
                flag=false;
                break;
            }
            else if(i.second>2){
                cout<<"-1"<<endl;
                flag=false;
                break;
            }
        }
        if(flag==true){
            for(auto i: spl){
            if(i.second==2){
                cout<<i.first<<" ";
            }
            }
            for(auto i=spl.rbegin(); i!=spl.rend(); i++){
            cout<<i->first<<" ";
            }
            cout<<endl;
        }
    }
}
