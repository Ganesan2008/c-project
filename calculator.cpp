#include<iostream>
using namespace std;

int main(){
    int a,b;
    
    string operation;
    cout<<"Enter the first number a:";
    cin>>a;
    cout<<"Enter the second number b:";
    cin>>b;
    cout<<"Enter a operation ";

    cin>>operation;
    if (operation=="additon" || operation=="add"){
        cout<<"Enter the second number :";
   
        cout<<"The sum of the two numbers is :"<<a+b;
    }
    else if (operation=="subtraction" || operation=="sub"){
        cout<<"Enter the second number :";
        
        cout<<"The difference of the two numbers is :"<<a-b;
    }
    else if (operation=="multiplication" || operation=="mul"){
        cout<<"Enter the second number :";
    
        cout<<"The product of the two numbers is :"<<a*b;
    }
    else if (operation=="division" || operation=="div"){
        cout<<"Enter the second number :";
   
        cout<<"The division of the two numbers is :"<<a/b;
    }
    else{
        cout<<"Invalid operation";
    }
}