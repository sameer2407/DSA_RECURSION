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
    cout << i << endl;

    return func(i + 1, n);
  }
}

int main()
{
  int n;
  cout << "Enter N";
  cin >> n;
  func(1, n);
  return 0;
}