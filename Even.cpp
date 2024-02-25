#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number :"<<endl;
    cin>>number;
    if(number % 2 == 0){
        cout<<number<<" is Even"<<endl;
    }
    else if(number % 2 !=0){
        cout<<number<<" is Odd"<<endl;
    }
    else{
        cout<<"Invalid input !"<<endl;
    }
    return 0;
}