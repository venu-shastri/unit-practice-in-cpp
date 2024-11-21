#include <string>
using namespace std;
//interface 
class ILogger{
public:
virtual void write(const string& msg)=0;
}

