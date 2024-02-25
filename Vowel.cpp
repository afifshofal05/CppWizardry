#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character :"<<endl;
    cin>>ch;
    if(ch=='A' || ch=='E'|| ch=='I' || ch=='O' || ch=='U' && ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
    cout<<ch<<" is Vowel !"<<endl;
    }
    else { 
    cout<<ch<<" is Consonant"<<endl;
    }
    return 0;
}