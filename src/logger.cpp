#include "logger.h"
#include "datetime.h"
#include <iostream>

Logger::Logger() {}

void Logger::log(Activity activity) {
  if (activity.validate(activity.getFrom()) && activity.validate(activity.getTo())) {
    activities.push_back(activity);
  }
}

std::vector<Activity> Logger::getLogs() {
  return activities;
}

int Logger::getNumberOfActivities() {
  return activities.size();
}

void Logger::filter(int from, int to) {
  for (Activity a : activities) {
    int ts = a.getTimestamp();
    if (ts >= from && ts <= to) {
      DateTime dt(ts);
      std::cout
        << dt.getString() << "\t"
        << ts << "\t"
        << a.getFrom() << "\t"
        << a.getTo() << "\t"
        << Activity::typeAsString(a.getType()) << std::endl;
    }
  }
}