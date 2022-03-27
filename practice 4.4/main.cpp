#include <iostream>

using namespace std;

int main()
{
    int num;

    cout<< "Please enter an integer: "<< endl;
    cin >> num;

    for ( int counter = 1; counter <= num; counter++ )
    {
        cout << 100 * counter << "\t";
    }
    cout << endl;
    return 0;
}
