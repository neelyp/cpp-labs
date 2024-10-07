#include <iostream>

using namespace std;

int main()
{
  int mood;
  cout << "What is your mood?\n1-happy\n2-sad\n3-angry\n4-sus\n5-tiggly\n> ";
  cin >> mood;

  switch (mood)
  {
  case 1:
    cout << "Hip hip hooray!";
    break;
  case 2:
    cout << "Shucks dude :(";
    break;
  case 3:
    cout << "Erm.... I tend to see red when im angy ><";
    break;
  case 4:
    cout << "Bro might be the imposter";
    break;
  case 5:
    cout << "Tiggly tafa thar thar usturgian!";
  default:
    cout << "Thats fake ngl";
    break;
  }
  return 0;
}