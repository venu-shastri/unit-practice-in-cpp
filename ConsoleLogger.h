#include <string>
#include "ILogger.h"
using namespace std;
class ConsoleLogger:public ILogger{
  public:
  void write(const string& msg);
};
