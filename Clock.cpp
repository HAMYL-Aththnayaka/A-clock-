#include <iostream>
#include <windows.h>
#include <iomanip>   

using namespace std;

int main()
{
    int h, m, s;
    bool valid = false;

    // Input validation loop
    while (!valid)
    {
        cout << "Enter hour (0-23)   : ";
        cin >> h;
        cout << "Enter minutes (0-59): ";
        cin >> m;
        cout << "Enter seconds (0-59): ";
        cin >> s;

        if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60)
        {
            valid = true;
        }
        else
        {
            system("cls");
            cout << "Invalid time! Try again.\n\n";
        }
    }

    // Clock loop
    while (true)
    {
        system("cls");

        cout << setw(2) << setfill('0') << h << " : "
             << setw(2) << setfill('0') << m << " : "
             << setw(2) << setfill('0') << s << endl;

        Sleep(1000);
        s++;

        //seconds logic
        if (s > 59)
        {
            s = 0;
            m++;
        }
        //minutes logic
        if (m > 59)
        {
            m = 0;
            h++;
        }
        //hour logic
        if (h > 23)
        {
            h = 0;
        }
    }

    return 0;
}
