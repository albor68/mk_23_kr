#include <libopencm3/stm32/gpio.h>

void setup_spi () {
    gpio_mode_setup(GPIOA, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO4 | GPIO5 | GPIO6 | GPIO7 );              
    gpio_set_af(GPIOA, GPIO_AF5, GPIO4 | GPIO5 | GPIO6 | GPIO7);                                                                                           
    }

void setup_swd () {
    gpio_mode_setup(GPIOA, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO10 | GPIO14 );              
    gpio_set_af(GPIOA, GPIO_AF2, GPIO10 | GPIO14);                                                                                           
    }

void setup_usart () {
    gpio_mode_setup(GPIOA, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO9 | GPIO10);               
    gpio_set_af(GPIOA, GPIO_AF10, GPIO9 | GPIO10);                                                                                           
    }

int main () {}