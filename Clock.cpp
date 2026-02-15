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

       if (h < 24 && m < 60 && s < 60){
        err++;

       }else{
        system("cls");
       }

    }
    while(a == 0){
        system("cls");
        cout<<h<<" : "<<m<<" : "<<s<<" : "<<endl;
        Sleep(1000);
    }
}