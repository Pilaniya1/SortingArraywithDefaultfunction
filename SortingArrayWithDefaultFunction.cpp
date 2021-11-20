#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,3,6,8,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    sort(arr , arr+n);
    cout<<"After sorting of given array by using of default function"<<endl;
    for(int i=0;i<n;++i)
        cout<<arr[i];
    
    return 0;
}