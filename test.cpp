#include "pico/stdlib.h"
#define LED PICO_DEFAULT_LED_PIN
int time = 250;

int main() {
  gpio_init(LED);
  gpio_set_dir(LED, GPIO_OUT);
  for (int i = 0; i < 10; i++) {
    gpio_put(LED, 0);
    sleep_ms(time);
    gpio_put(LED, 1);
    sleep_ms(time);
  }
  gpio_put(LED, 0);
  return 0;
}