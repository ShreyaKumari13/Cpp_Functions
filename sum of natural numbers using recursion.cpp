//C++ program to Find Sum of Natural Numbers using Recursion
#include<iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int size;
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;
    cout<<"The sum of the numbers is : "<<sum(size)<<endl;
    return 0;
}