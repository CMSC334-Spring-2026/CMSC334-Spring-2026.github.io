#include <iostream>
#include "String.h"

using namespace std;

int main()
{
try {
  String str0{nullptr};
}
catch (exception& e)
{
    cout << "aha!" << endl;
}


    String str1;

    String str2("Jeff Tweedy");

    String str2b("");

    String str3(str2);

    String str3b(str2b);

    String str4 = str2.substring(1,4);

    str4 = str2.substring(1,1);

    str4 = str2.substring(0,str2.length());

try {
    str4 = str2.substring(0,str2.length()+1);
}
catch (exception& e)
{
   cerr << e.what() << endl;
}


try {
    str4 = str2.substring(-1,str2.length());
}
catch (exception& e)
{
    cerr << "HERE!" << endl;
   cerr << e.what() << endl;
}

try {
    str4 = str2.substring(1,0);
}
catch (exception& e)
{
   cerr << e.what() << endl;
}

    str1 = str2;
    

    str3 = str1.substring(1,4);

    String str5(" of Wilco!");
    str1 += str5;

    String str6("2<34");
    String str7("");
    str7 += str6.substring(1,3);
    str7 += str6.substring(1,3);
    str7 += str6.substring(1,3);
    str7 += str1.substring(14,str1.length()-1);

    return(0);
}
