#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    cout<<"Enter 5 marks :"<<endl;
    cin>>marks[0];
    cin>>marks[1];
    cin>>marks[2];
    cin>>marks[3];
    cin>>marks[4];
    cout<<"Marks are :"<<" ";
    for(int i=0; i<5; i++){
        cout<<marks[i]<<" ";
    }
    return 0;
}