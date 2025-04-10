#include "datetime.h"

DateTime::DateTime(int timestamp) : timestamp(timestamp) { }

std::string DateTime::getString() {
  std::tm* timeInfo = std::gmtime(&timestamp);
  char out[20];
  std::strftime(out, sizeof(out), "%Y-%m-%d %H:%M:%S", timeInfo);
  return out;
}

int DateTime::getTimestamp() {
  return timestamp;
}