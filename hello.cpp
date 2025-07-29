#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello"<< endl;
     
    
    string s;

    cout<<"Enter a String: ";
    getline(cin,s);

    cout<< "You have entered : ";
    cout<<s<<endl;

    s.push_back('A');// add a single character into a string 
    cout<<"after using push back: "<<s<<endl;

    s.pop_back();
    cout<<"after using pop back: "<<s<<endl;

    s.push_start('M');
    cout<<"After using push start: "<<s<<endl;




}