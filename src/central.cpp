#include "central.h"

Central::Central() {}

Central::Central(Logger logger) : logger(logger) {}

void Central::log(Activity* activity) {
  logger.log(*activity);
}

void Central::printLog() {
  for (Activity a : logger.getLogs()) {
    a.toString();
  }
}

Logger Central::getLogger() {
  return logger;
}

void Central::setLogger(Logger logger) {
  this->logger = logger;
}