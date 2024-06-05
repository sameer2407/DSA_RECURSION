#include <iostream>
using namespace std;
void func(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {

        cout << "Sameer" << endl;

        return func(i + 1, n);
    }
}
int main()
{

    int n;
    cout << "Enter the no of times u want to print your name";
    cin >> n;
    func(1, n);

    return 0;
}
