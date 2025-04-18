#include "activity.h"
#include <iostream>
#include <cctype>

Activity::Activity(std::string to, std::string from, int timestamp, Type type)
  : to(to), from(from), timestamp(timestamp), type(type) {}

std::string Activity::getTo() {
  return to;
}

std::string Activity::getFrom() {
  return from;
}

int Activity::getTimestamp() {
  return timestamp;
}

Type Activity::getType() {
  return type;
}

void Activity::toString() {
  std::cout << timestamp << "\t" << from << "\t" << to << "\t" << typeAsString(type) << std::endl;
}

bool Activity::validate(std::string phone_number) {
  for (char c : phone_number) {
    if (!isdigit(c)) return false;
  }
  return true;
}

std::string Activity::typeAsString(Type type) {
  switch (type) {
    case VOICE: return "VOICE";
    case SMS: return "SMS";
    case MMS: return "MMS";
    case INTERNET: return "INTERNET";
    default: return "UNKNOWN";
  }
}
