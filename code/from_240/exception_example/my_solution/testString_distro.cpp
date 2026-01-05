#include <iostream>
#include "String.h"

int main()
{
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
    std::cout << std::endl << "Testing default constructor:" << std::endl;
    
    String str1;

    std::cout << "\tLength: "   << str1.length() << " [0]" << std::endl;
    std::cout << "\ttoString: \"" << str1.toString() << "\" [\"\"]" << std::endl << std::endl;

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    std::cout << std::endl << "Testing const char* constructor:" << std::endl;
    
    String str2("Jeff Tweedy");

    std::cout << "\tLength: "   << str2.length()   << " [11]" << std::endl;
    std::cout << "\ttoString: \"" << str2.toString() << "\" [\"Jeff Tweedy\"]" 
        << std::endl << std::endl;

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    std::cout << std::endl << "Testing copy constructor:" << std::endl;
    
    String str3(str2);

    std::cout << "\tLength: "   << str3.length()   << " [11]" << std::endl;
    std::cout << "\ttoString: \"" << str3.toString() << "\" [\"Jeff Tweedy\"]" 
        << std::endl << std::endl;

    // consider testing copy of default?

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    std::cout << std::endl << "Testing substring:" << std::endl;
    
    String str4 = str2.substring(1, 4);

    std::cout << "\tLength: "   << str4.length()   << " [3]" << std::endl;
    std::cout << "\ttoString: \"" << str4.toString() << "\" [\"eff\"]" 
        << std::endl << std::endl;

    // consider testing border conditions, illegal values?

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    std::cout << std::endl << "Testing ==:" << std::endl;
    
    std::cout << "\t(str1 == str2)? " << (str1 == str2) << " [0]" << std::endl;
    std::cout << "\t(str2 == str2)? " << (str2 == str2) << " [1]" << std::endl;
    std::cout << "\t(str2 == str3)? " << (str2 == str3) << " [1]" << std::endl << std::endl;

    // maybe include some == of substring calls?

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    std::cout << std::endl << "Testing =:" << std::endl;

    str1 = str2;
    
    std::cout << "\tstr1 Length: " << str1.length() << " [11]" << std::endl;
    std::cout << "\tstr1 toString(): \"" << str1.toString() << "\" [\"Jeff Tweedy\"]" 
        << std::endl << std::endl;

    // maybe include some = of substring calls?

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    std::cout << std::endl << "Testing +=:" << std::endl;

    String str5(" of Wilco!");
    str3 += str5;
    
    std::cout << "\tstr3 Length: " << str3.length() << " [21]" << std::endl;
    std::cout << "\tstr3 toString(): \"" << str3.toString() << "\" [\"Jeff Tweedy of Wilco!\"]" 
        << std::endl << std::endl;

    // maybe include some += of substring calls?
    // how does += work with const char*?

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    return(0);
}
