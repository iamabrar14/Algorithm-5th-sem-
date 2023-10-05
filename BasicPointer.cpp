#include <iostream>
using namespace std;
int main(){
    int a=3;
    int* b=&a;
    cout<<"The address of a : "<<b<<endl;
    cout<<"The value of a :" <<*b<<endl;
    int** c=&b;
    cout<<"The value of pointer b is : "<<c<<endl;
    return 0;

}