#ifndef LOGGER_H
#define LOGGER_H

#include <vector>
#include "activity.h"

class Logger {
private:
  std::vector<Activity> activities;

public:
  Logger();
  void log(Activity activity);
  std::vector<Activity> getLogs();
  int getNumberOfActivities();
  void filter(int from, int to);
};

#endif