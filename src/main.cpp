#include <libopencm3/stm32/gpio.h>

void setup_spi () {
    gpio_mode_setup(GPIOA, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO4 | GPIO5 | GPIO6 | GPIO7 );              
    gpio_set_af(GPIOA, GPIO_AF5, GPIO4 | GPIO5 | GPIO6 | GPIO7);                                                                                           
    }

void setup_jtag () {
    gpio_mode_setup(GPIOA, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO13 | GPIO14 | GPIO15);
    gpio_mode_setup(GPIOB, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO3 | GPIO4);
    gpio_set_af(GPIOA, GPIO_AF1, GPIO13 | GPIO14 | GPIO15);
    gpio_set_af(GPIOB, GPIO_AF2, GPIO3 | GPIO4);
}

void setup_usb () {
    gpio_mode_setup(GPIOA, GPIO_MODE_AF, GPIO_PUPD_NONE, GPIO11 | GPIO12);
	gpio_set_af(GPIOA, GPIO_AF10, GPIO11 | GPIO12);
    }

int main () {}