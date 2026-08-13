#include<bits/stdc++.h>
using namespace std;

void calc(int op){
    float a,b;
    cout<<"Can perform the following Operations:\n 1. Addition\n 2. Substration \n 3. Division\n 4. Multiplication"<<endl;
    cout<<"Enter Num 1: ";
    cin>>a;
    cout<<"Enter Num 2: ";
    cin>>b;
    cout<<"Enter Operation Number: ";
    cin>>op;

switch (op){
    case 1:
        cout<<"Sum is "<<a+b;
        break;
    case 2:
        cout<<"Substration is "<<a-b;
        break;
    case 3:
        cout<<"Divition is "<<a/b;
        break;
    case 4:
        cout<<"Multiplication is "<<a*b;
        break;
    default:
        cout<<"Invalid Input";
        }
    }
    


int main() {
    int op;
    calc(op);
    return 0;
}