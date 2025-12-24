#include "Blinker.hpp"
#include <cstdint>

int main() {
  Blinker blinker(500);
  blinker.init();

  for (std::uint32_t t = 0; t <= 5000; t += 50) {
    blinker.tick(t);
  }
  return 0;
}
