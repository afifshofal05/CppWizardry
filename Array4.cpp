#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    for(int i=0; i<5; i++){
        cout<<"Mark for student"<<" "<<i+1<<"="<<endl;
        cin>>marks[i];
    }
    cout<<"Marks are :"<<endl;
    for(int i=0; i<5; i++){
        cout<<"Mark for student"<<" "<<i+1<<" : "<<marks[i]<<endl;
    }
    return 0;
}