/* 
Abrar Rahman
Merge Sort(from class)
*/
#include <bits/stdc++.h>
using namespace std;

int Merge_logic(int* left, int nL, int* right, int nR, int* A, int n){
    int i=0, j=0, k=0;
    while(i<nL && j<nR){
        if(left[i] <= right[j]){
            A[k] = left[i];
            i++;
        }
        else{
            A[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<nL){
        A[k]=left[i];
        i++;
        k++;
    }
     while(j<nR){
        A[k]=right[j];
        j++;
        k++;
    }
 
}

void merge_sort(int* A, int n){
    if(n <  2) return;
    int half = n/2;
    int left[half], right[n-half];
    for(int i=0; i<half; i++)
        left[i] = A[i];
    for(int i=half; i<n; i++)
        right[i-half] = A[i];
    merge_sort(left, half);
    merge_sort(right, n-half);
    Merge_logic(left, half, right, n-half, A, n);
}

int main(){
    int n;
    cout<<"How many numbers  ?";
    cin >> n;
    int A[n];
    cout<<"Enter Numbers : ";
   for(int i=0; i<n; i++){
        cin >> A[i];
    }
    cout<<"Unsorted Array : ";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    merge_sort(A,n);
    cout<<"Sorted Array : ";
     for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
}