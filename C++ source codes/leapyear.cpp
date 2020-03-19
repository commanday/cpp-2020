#include <iostream>
using namespace std; 
int main()
{
    int year;
    year = 2000;
    cout << "Year: ";
    cin >> year; 
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << ",yes";
            else
                cout << year << ",no";
        }
        else
            cout << year << ",yes";
    }
    else
        cout << year << ",no"; 
    return 0;
}
