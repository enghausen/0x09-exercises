#include <iostream>
#include "central.h"
#include "data-log.h"

using namespace std;

int main(int argc, char* argv[]) {
  cout << "TELE CENTRAL (filtered)\n" << endl;

  Central c = Central();
  for (Activity a : DATA) {
    c.log(&a);
  }

  // Filter med eksempelværdier fra README
  c.getLogger().filter(1711936658, 1712331675);

  return 0;
}