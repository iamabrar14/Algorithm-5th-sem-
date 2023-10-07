/* 
Abrar Rahman
Quicksort(from class)
*/
#include<bits/stdc++.h>
using namespace std;

int part_index(int* A, int start, int ends){
    int pivot = A[ends];
    int PIdx = start;
    for(int i= start; i<ends; i++){
        if(A[i] <= pivot){
            swap(A[i], A[PIdx]);
            PIdx++;
        }
    }
    swap(A[PIdx], A[ends]);
    return PIdx;
}

void Quick_sort(int* A, int start , int ends){
    if(start<ends){
        int idx = part_index(A, start, ends);
        Quick_sort(A, start, idx-1);
        Quick_sort(A, idx+1, ends);
    }
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
    Quick_sort(A, 0, n-1);
    cout<<"Sorted Array : ";
     for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
}
