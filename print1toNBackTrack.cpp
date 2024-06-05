#include <iostream>

using namespace std;
void func(int i)
{
  if (i < 1)
  {
    return;
  }
  else
  {
    func(i - 1);
    cout << i << endl;
  }
}
int main()
{
  int n;
  cout << "Enter N";
  cin >> n;
  func(n);
  return 0;
}