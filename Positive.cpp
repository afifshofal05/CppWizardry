#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number :"<<endl;
    cin>>num;

    if(num>0){
        cout<<num<<" is Positive"<<endl;
    }
    else if(num<0){
        cout<<num<<" is negative"<<endl;
    }
    else 
    {
        cout<<"Invalid Input !"<<endl;
    }

    return 0;
}