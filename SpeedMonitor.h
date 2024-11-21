#include "ILogger.h"
#include "ISpeedSensor.h"
class SpeedMonitor{
    private : int _speedThreshold;
                //Dependency
                ILogger *_logger;
                ISpeedSensor *_speedSensorInstance;
  
      public:
          SpeedMonitor(int speedThreshold,ILogger *logger,ISpeedSensor *speedSensor): _speedThreshold{speedThreshold},
                                                                                     _logger{logger},
                                                                                    _speedSensorInstance{speedSensorInstance} {}
          void monitor();
};
