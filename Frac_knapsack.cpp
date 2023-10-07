/* 
Abrar Rahman
*/
#include<bits/stdc++.h>
using namespace std;

void knapksack(int n, float* weight, float* profit, float capacity){
     float x[20], tp=0;
     int i, j, k;
     k = capacity;

     for(i=0; i<n; i++)
          x[i] = 0.0;
     
     for(i=0; i<n; i++){
          if(weight[i] > k)
               break;
          else{
               x[i] = 1.0;
               tp = tp + profit[i];
               k = k - weight[i];
          }
     }
     if(i<n)
          x[i] = k / weight[i];

     tp = tp + (x[i] * profit[i]);


     cout << "Maximum profit is : " << tp; 
}

int main(){
     float weight[20], profit[20], capacity;
     int num, i, j;
     float ratio[20], temp;

     cout << "No of objecct: " ;
     cin >> num;

     cout << endl << "Put weight and profit: ";
     for(i= 0; i<num; i++){
          cin >> weight[i] >> profit[i];
     }

     cout << endl << "No Of Capacity: ";
     cin >> capacity;

     for(i=0; i<num; i++){
          ratio[i] = profit[i] / weight[i];
     }

     for(i=0; i< num; i++){
          for(j=0; j<num; j++){
               if(ratio[i] < ratio[j]){
                    temp = ratio[j];
                    ratio[j] = ratio[i];
                    ratio[i] = temp;

                    temp = weight[j];
                    weight[j] = weight[i];
                    weight[i] = temp;

                    temp = profit[j];
                    profit[j] = profit[i];
                    profit[i] = temp;
               }
          }
     }
     knapksack(num, weight, profit, capacity);
     return 0;
}