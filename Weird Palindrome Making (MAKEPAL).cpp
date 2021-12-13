#include <bits/stdc++.h>
using namespace std;
int countOdd(int arr[], int size){
    int count = 0;
    for(int i=0; i<size; i++){
        if (arr[i]&1==1){
            count++;
        }
    }
    return count;
}
int main(){
    int test_cases; cin>>test_cases;
    while(test_cases--){
        int n; cin>>n;
        int sample[n];
        for(int i=0; i<n; i++){
            cin>>sample[i];
        }
        cout<<countOdd(sample, n)/2<<endl;
    }
}
