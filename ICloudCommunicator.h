#include <string>
using namespace std;
class ICloudCommunicator{
public:
  virtual void pushMeesgae(string& message)=0;
}
