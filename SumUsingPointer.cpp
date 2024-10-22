#include<iostream>
using namespace std;
int main(){
    // int a = 5;
    // int b = 5;
    // int* p1 = &a;
    // int* p2 = &b;
    // int sum;
    // sum = *p1+*p2;
    // cout<<sum;
    int x,y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<*p1 + *p2;
}