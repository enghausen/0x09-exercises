#ifndef DATETIME_H
#define DATETIME_H

#include <ctime>
#include <string>

class DateTime {
  public:
    DateTime(int timestamp);
    std::string getString();
    int getTimestamp();
  private:
    std::time_t timestamp;
};

#endif