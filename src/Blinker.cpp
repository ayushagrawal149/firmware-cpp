#include "Blinker.hpp"
#include <iostream>

Blinker::Blinker(std::uint32_t period_ms)
  : period_ms_(period_ms), last_toggle_ms_(0), led_on_(false) {}

void Blinker::init() {
  last_toggle_ms_ = 0;
  led_on_ = false;
}

void Blinker::tick(std::uint32_t time_ms) {
  if ((time_ms - last_toggle_ms_) >= period_ms_) {
    last_toggle_ms_ = time_ms;
    led_on_ = !led_on_;
    std::cout << "[C++] LED: " << (led_on_ ? "ON" : "OFF") << " at " << time_ms << " ms\n";
  }
}
