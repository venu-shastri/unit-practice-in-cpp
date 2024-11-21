#include "ILogger.h"
class SpeedMonitor{
    private : int _speedThreshold;
                //Dependency
                ILogger *_logger;
  
      public:
          SpeedMonitor(int speedThreshold,ILogger *logger): _speedThreshold{speedThreshold},_logger{logger} {}
          void monitor();
};
