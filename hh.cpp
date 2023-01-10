#include <iostream>
using namespace std;

int main()
{
    int a, b;
    string str1;
    string str2;
    cin >> a >> b;
    cin >> str1 >> str2;
    if ( a == b)
    {
        cout << str1 << " draw " << str2 << endl;
        cout << "score " << str1 << " " << a << ":" << b << " " << str2 << endl;
    }
    else if (a > b)
    {
        cout << str1 << " is winner" << endl;
        cout << str2 << " is loser" << endl;
        cout << "score " << str1 << " " << a << ":" << b << " " << str2 << endl;
    }
    else
    {
        cout << str1 << " is loser" << endl;
        cout << str2 << " is winner" << endl;
        cout << "score " << str1 << " " << a << ":" << b << " " << str2 << endl;
    }
}