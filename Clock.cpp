#include <iostream>
#include <windows.h>

using namespace std;
int main()
{

    int h, m, s, a, err;
    err = a = 0;
    while (err == 0)
    {
        cout << "Enter hour  : ";
        cin>>h;
        cout<<"Enter minutes : ";
        cin>>m;
        cout<<"Enter Seconds : ";
        cin>>s;

        cout<<"The hour"<<h<<"the minutes"<<m<<"th second"<<s<<endl;

    }
}