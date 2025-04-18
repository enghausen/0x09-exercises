#ifndef CENTRAL_H
#define CENTRAL_H

#include "logger.h"

class Activity;

class Central {
public:
  Central();
  Central(Logger);
  void log(Activity* activity); 
  void printLog();
  Logger getLogger();
  void setLogger(Logger logger);

private:
  Logger logger;
};

#endif