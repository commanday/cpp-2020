#include <iostream>
using namespace std;
 
int main()
{
    int n, sum = 0;
    n = 3;
 
    cout << "End: ";
    cin >> n;
 
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
 
    cout << "Sum = " << sum;
    return 0;
}
