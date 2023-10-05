#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int* a,int n){
  for(int k=0;k<n-1;k++){
        int flag=0;
    for(int i=0;i<n-k-1;i++){
        if(a[i]>=a[i+1]){
            swap(a[i],a[i+1]);
            flag=1;
        }

    }
        if(flag==0)
       break;

  }
}
int main(){
     int a[100],n;
     cout<<"How many numbers ?"<<endl;
     cin>>n;
     cout<<"Enter array elements : ";
     for(int i=0;i<n;i++){
        cin>>a[i];
     }

    bubbleSort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << std::endl;
return 0;

}

