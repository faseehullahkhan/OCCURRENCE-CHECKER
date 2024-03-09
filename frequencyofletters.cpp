#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  char arr[100];
  srand(time(0));
  for (int i = 0; i < 100; i++)
  {
    arr[i] = 65 + rand() % 26;
    cout << arr[i] << "\t";
  }
  cout<<endl;
  int character = 65;
  for (int j = 0; j < 26; j++)
  {
    int count = 0;
    for (int k = 0; k < 100; k++)
    {
      if (arr[k] % character == 0)
      {
        count++;
      }
    }
    cout << static_cast<char>(character) << " is " << count << " times "
         << "\n";
    character++;
  }
  return 0;
}
