#include <iostream>
#include "String.h"

using namespace std;

int main()
{
try {
    String str0(nullptr);
}
catch (exception& e)
{
    cout << "aha!" << endl;
}

 cout << "Some Doug specific tests" << endl;

 String myString("Hello World!\n");

 string testString = myString.toString();

 testString[5] = 'x';

 cout << myString.toString() << endl;


 String* foo = new String;
 String* foo2 = new String();
 

 cout << "constructor test" << endl;
 cout << foo->toString() << endl;
 cout << foo2->toString() << endl;

 
 
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << endl << "Testing default constructor:" << endl;
    cout         << "----------------------------" << endl;
    
    cout << "String str1;" << endl;
    String str1;

    cout << "\tLength: "   << str1.length() << " [0]" << endl;
    cout << "\ttoString: \"" << str1.toString() << "\" [\"\"]" << endl << endl;

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    cout << endl << "Testing const char* constructor:" << endl;
    cout         << "--------------------------------" << endl;
    
    cout << "String str2(\"Jeff Tweedy\");" << endl;
    String str2("Jeff Tweedy");

    cout << "\tLength: "   << str2.length()   << " [11]" << endl;
    cout << "\ttoString: \"" << str2.toString() << "\" [\"Jeff Tweedy\"]" 
        << endl << endl;

    cout << "String str2b(\"\");" << endl;
    String str2b("");

    cout << "\tLength: "   << str2b.length()   << " [0]" << endl;
    cout << "\ttoString: \"" << str2b.toString() << "\" [\"\"]" 
        << endl << endl;

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    cout << endl << "Testing copy constructor:" << endl;
    cout         << "-------------------------" << endl;
    
    cout << "String str3(str2);" << endl;
    String str3(str2);

    cout << "\tLength: "   << str3.length()   << " [11]" << endl;
    cout << "\ttoString: \"" << str3.toString() << "\" [\"Jeff Tweedy\"]" 
        << endl << endl;

    cout << "String str3b(str2b);" << endl;
    String str3b(str2b);

    cout << "\tLength: "   << str3b.length()   << " [0]" << endl;
    cout << "\ttoString: \"" << str3b.toString() << "\" [\"\"]" 
        << endl << endl;

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    cout << endl << "Testing substring:" << endl;
    cout         << "------------------" << endl;
    
    cout << "String str4 = str2.substring(1,4);" << endl;
    String str4 = str2.substring(1,4);

    cout << "\tLength: "   << str4.length()   << " [3]" << endl;
    cout << "\ttoString: \"" << str4.toString() << "\" [\"eff\"]" 
        << endl << endl;

    cout << "str4 = str2.substring(1,1);" << endl;
    str4 = str2.substring(1,1);

    cout << "\tLength: "   << str4.length()   << " [0]" << endl;
    cout << "\ttoString: \"" << str4.toString() << "\" [\"\"]" 
        << endl << endl;

    cout << "str4 = str2.substring(0,str2.length());" << endl;
    str4 = str2.substring(0,str2.length());

    cout << "\tLength: "   << str4.length()   << " [11]" << endl;
    cout << "\ttoString: \"" << str4.toString() << "\" [\"Jeff Tweedy\"]" 
        << endl << endl;

    cout << "str4 = str2.substring(0,str2.length()+1);" << endl;
try {
    str4 = str2.substring(0,str2.length()+1);
}
catch (exception& e)
{
   cerr << e.what() << endl;
}


    cout << "\t[Should be printed error message above]" << endl;
    cout << "\tLength: "   << str4.length()   << " [0]" << endl;
    cout << "\ttoString: \"" << str4.toString() << "\" [\"\"]" 
        << endl << endl;

    cout << "str4 = str2.substring(-1,str2.length());" << endl;
try {
    str4 = str2.substring(-1,str2.length());
}
catch (exception& e)
{
    cerr << "HERE!" << endl;
   cerr << e.what() << endl;
}

    cout << "\t[Should be printed error message above]" << endl;
    cout << "\tLength: "   << str4.length()   << " [0]" << endl;
    cout << "\ttoString: \"" << str4.toString() << "\" [\"\"]" 
        << endl << endl;

    cout << "str4 = str2.substring(1,0);" << endl;
try {
    str4 = str2.substring(1,0);
}
catch (exception& e)
{
   cerr << e.what() << endl;
}

    cout << "\t[Should be printed error message above]" << endl;
    cout << "\tLength: "   << str4.length()   << " [0]" << endl;
    cout << "\ttoString: \"" << str4.toString() << "\" [\"\"]" 
        << endl << endl;

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    cout << endl << "Testing ==:" << endl;
    cout         << "-----------" << endl;
    
    cout << "\t(str1 == str2)? " << (str1 == str2) << " [0]" << endl << endl;
    cout << "\t(str2 == str2)? " << (str2 == str2) << " [1]" << endl << endl;
    cout << "\t(str2 == str3)? " << (str2 == str3) << " [1]" << endl << endl;
    cout << "\t(str2b == str3b)? " << (str2b == str3b) << " [1]" << endl << endl;
    cout << "\t(str2.substring(1,4) == str3.substring(1,3))? " << 
        (str2.substring(1,4) == str3.substring(1,3)) << " [0]" << endl << endl;
    cout << "\t(str2.substring(1,4) == str3.substring(1,4))? " << 
        (str2.substring(1,4) == str3.substring(1,4)) << " [1]" << endl << endl;

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    cout << endl << "Testing =:" << endl;
    cout         << "----------" << endl;

    cout << "str1 = str2;" << endl;
    str1 = str2;
    
    cout << "\tstr1 Length: " << str1.length() << " [11]" << endl;
    cout << "\tstr1 toString(): \"" << str1.toString() << "\" [\"Jeff Tweedy\"]" 
        << endl << endl;

    cout << "str3 = str1.substring(1,4);" << endl;
    str3 = str1.substring(1,4);

    cout << "\tstr3 Length: " << str3.length() << " [3]" << endl;
    cout << "\tstr3 toString(): \"" << str3.toString() << "\" [\"eff\"]" 
        << endl << endl;

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    cout << endl << "Testing +=:" << endl;
    cout         << "-----------" << endl;

    cout << "String str5(\" of Wilco!\");" << endl;
    cout << "str1 += str5;" << endl;
    String str5(" of Wilco!");
    str1 += str5;

    cout << "\tstr1 Length: " << str1.length() << " [21]" << endl;
    cout << "\tstr1 toString(): \"" << str1.toString() << "\" [\"Jeff Tweedy of Wilco!\"]" 
        << endl << endl;

    cout << "String str6(\"2<34\");" << endl;
    cout << "String str7(\"\");" << endl;
    cout << "str7 += str6.substring(1,3);" << endl;
    cout << "str7 += str6.substring(1,3);" << endl;
    cout << "str7 += str6.substring(1,3);" << endl;
    cout << "str7 += str1.substring(14,str1.length()-1);" << endl;
    String str6("2<34");
    String str7("");
    str7 += str6.substring(1,3);
    str7 += str6.substring(1,3);
    str7 += str6.substring(1,3);
    str7 += str1.substring(14,str1.length()-1);

    cout << "\tstr7 Length: " << str7.length() << " [12]" << endl;
    cout << "\tstr7 toString(): \"" << str7.toString() << "\" [\"<3<3<3 Wilco\"]" 
        << endl << endl;

    cout << "str7 += \" & Nels Kline!\"" << endl;
    str7 += " & Nels Kline!";
    cout << "\tstr7 Length: " << str7.length() << " [26]" << endl;
    cout << "\tstr7 toString(): \"" << str7.toString() 
        << "\" [\"<3<3<3 Wilco & Nels Kline!\"]" 
        << endl << endl;

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    return(0);
}
