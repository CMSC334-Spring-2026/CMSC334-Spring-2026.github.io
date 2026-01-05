#include <string>
using namespace std;

class String {
  private:
    string value;
    
  public:
    String();
    String(const char* cString);
    String(const String& other);

    ~String();

    string toString();
    int    length();

    String substring(int start, int end);

    bool    operator==(const String& other);
    String& operator=(const String& other);
    String& operator+=(const String& other);
};
