
#include <string>


class String {

 public:

    String();
    
    String(const String& other);
    String(const char* cString); //accepts a C-string literal
    ~String();

    std::string toString(); //returns a C++ string, not a String
    int length();

    String substring(int start, int end); // returns a String, not a std::string;
    // follows Java convention on parameters
    
    bool operator==(const String& other);  //so one can use if (str1 == str2) ...
    String&  operator=(const String& other); // so one can assign str2 = str 1..
    String& operator+=(const String& other); //so one can use str2 += str1

 private:
    std::string value;

    
};



