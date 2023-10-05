#include <bits/stdc++.h>
using namespace std;
void printArr(int*a,int n){
    int i;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[50],n,i;
    cout<<"How many numbers : ";
    cin>>n;
    cout<<"Input numbers : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    printArr(arr,n);

}