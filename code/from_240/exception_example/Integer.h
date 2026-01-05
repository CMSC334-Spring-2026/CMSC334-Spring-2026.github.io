#include <string>
using namespace std;

class Integer
{
  private:
    int value;

  public:
    Integer();
    Integer(int value);

    Integer(const Integer& other);

    ~Integer();

    int    intValue() const;

    Integer& operator=(const Integer& other);
//    Integer operator=(const Integer& other);
//    Integer* operator=(const Integer& other);
//    void operator=(const Integer& other);

    Integer& operator=(const string& other);


};
