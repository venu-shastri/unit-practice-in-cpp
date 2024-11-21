#include "SpeedMonitor.h"
#include "ConsoleLogger.h"
#include "BNFSpeedSensor.cpp"

int main(){
  ConsoleLogger logger;
  BNFSpeedSensor speedSensor
SpeedMonitor instance {10,&logger,&speedSenor};
  instance.monitor();
  instance.monitor();
  instance.monitor();
  instance.monitor();
  instance.monitor();
}
