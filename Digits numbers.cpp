// cin num from 10-99 with keyboard. Proggram needs find small and big digitals, which use in int

#include <iostream>
using namespace std;

int main()
{
    int a;
    int n1,n2;
    cout << "Please writes num dont big 99: "; cin >> a;
    cout << endl;
    n1 = a / 10; // 1 num 
    n2 = a % 10; // 2 num

    if (n1 > n2) {
        cout << "1 num: " << n1 << " > " << n2 << " :num 2 ";
    }
    else if (n1 < n2) {
        cout << "1 num: " << n1 << " < " << n2 << " :num 2 ";
    }
    else
        cout << "Numbers are equal. " << n1 << " = " << n2;

    cout << endl << endl;

    return 0;

}
