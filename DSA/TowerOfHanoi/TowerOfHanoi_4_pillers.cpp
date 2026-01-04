#include <iostream>
using namespace std;

void tower_of_hanoi_4(int n, int source, int helper1, int helper2, int dest)
{
    if (n == 1)
    {

        cout << "(" << source << "," << dest << ")" << endl;
        return;
    }

    if (n == 2)
    {
        cout << "(" << source << "," << helper1 << ")" << endl;
        cout << "(" << source << "," << dest << ")" << endl;
        cout << "(" << helper1 << "," << dest << ")" << endl;
        
        return;
    }

    tower_of_hanoi_4(n - 2, source, helper2, dest, helper1);

    cout << "(" << source << "," << helper2 << ")" << endl;
    cout << "(" << source << "," << dest << ")" << endl;
    cout << "(" << helper2 << "," << dest << ")" << endl;

    tower_of_hanoi_4(n - 2, helper1, source, helper2, dest);
}

int main()
{
    tower_of_hanoi_4(3, 1, 2, 3, 4);
    return 0;
}
