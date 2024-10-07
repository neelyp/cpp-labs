/*
Neel
10/7
Mood
Extra: added sixth emotion

*/

#include <iostream>

using namespace std;

int main()
{
  int mood;
  cout << "What is your mood?\n1-happy\n2-sad\n3-angry\n4-sus\n5-tiggly\n6-sigma\n> ";
  cin >> mood; // get mood

  switch (mood) // check mood
  {
  case 1:
    cout << "Hip hip hooray!"; // give message based on mood
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
    break; // NEVRR FORGET 🫡🫡🫡
    case 6:
    cout << "sigma sigma on the wall whos the rizziest of them all?";
    break;
  default:
    cout << "Thats fake ngl";
    break;
  }
  return 0;
}
