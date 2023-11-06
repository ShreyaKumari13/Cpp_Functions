//C++ Program to Find Factorial of Number Using Recursion
#include<iostream>
using namespace std;

int fact(int a){
    if((a==0) || (a==1)){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}

int main(){
    int a,b;
    cout<<"Enter the number : "<<endl;
    cin>>a;
    b = fact(a);
    cout<<"The factorial of the number is : "<<b<<endl;

    return 0;
}