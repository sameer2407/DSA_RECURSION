#include <iostream>

using namespace std;
void func(int i, int n)
{
  if (i < 1)
  {
    return;
  }
  else
  {
    func(i - 1, n);
    cout << i << endl;
  }
}
int main()
{
  int n;
  cout << "Enter N";
  cin >> n;
  func(100, n);
  return 0;
}