#pragma once
#include <cstdint>

class Blinker {
public:
  explicit Blinker(std::uint32_t period_ms);
  void init();
  void tick(std::uint32_t time_ms);

private:
  std::uint32_t period_ms_;
  std::uint32_t last_toggle_ms_;
  bool led_on_;
};
