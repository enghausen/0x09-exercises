#ifndef ACTIVITY_H
#define ACTIVITY_H

#include <string>
#include "type.h"

class Activity {
private:
  std::string to;
  std::string from;
  int timestamp;
  Type type;

public:
  Activity(std::string to, std::string from, int timestamp, Type type);

  std::string getTo();
  std::string getFrom();
  int getTimestamp();
  Type getType();

  void toString(); // prints the activity
  bool validate(std::string phone_number);
  static std::string typeAsString(Type type);
};

#endif
