#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  bool raining, hot, windy;

  cout << "is it raining? (y/n)" << endl;
  if (tolower(static_cast<unsigned char>(cin.get())) == 'y')
    raining = true;
  else
    raining = false;
  cin.ignore();
  cout << "is it hot? (y/n)" << endl;
  if (tolower(static_cast<unsigned char>(cin.get())) == 'y')
    hot = true;
  else
    hot = false;
  cin.ignore();

  if (hot)
  {
    cout << "Wear a tshirt and shorts" << endl;
  }
  else
  {
    cout << "wear a hoodie" << endl;
  }
  if (raining)
  {
    cout << "Make sure to bring an umbrella!" << endl;
  }
  return 0;
}
