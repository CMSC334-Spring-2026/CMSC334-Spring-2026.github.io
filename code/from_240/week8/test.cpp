#include <iostream>
#include "String.h"
using namespace std;

int main()
{
  String str("barry");
  String str2(str);
  String str3("lawson");


  cout << str.toString() << endl;
  cout << str2.toString() << endl;

  str2 = String(str3);
  cout << str2.toString() << endl;

  str += str += str;
  cout << str.toString() << endl;

  return 0;
}
