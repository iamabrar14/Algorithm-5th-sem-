#include <bits/stdc++.h>
using namespace std ;
/*iamAbrar14
*/
void insertionSort(int a[],int n){
   for(int i=1;i<n;i++){
    int value=a[i];
    int hole=i;
    while(hole>0&&a[hole-1]>value){
        a[hole]=a[hole-1];
        hole=hole-1;
    }
    a[hole]=value;
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

    insertionSort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << std::endl;
return 0;

}

