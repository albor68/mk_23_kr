
#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/timer.h>
#include <libopencm3/stm32/spi.h>


void USB()

  {
  gpio_mode_setup(GPIOA, GPIO_MODE_OUT, GPIO_PUPD_NONE, GPIO4 | GPIO5);//D(IN)2-пин мк PD12(59) ,D(IN)3-пин мк PD13(6)    
	gpio_set(GPIOA, GPIO11 | GPIO12);
  }

void SPI()

  {
    gpio_mode_setup(GPIOA, GPIO_MODE_OUT, GPIO_PUPD_NONE, GPIO5 | GPIO6 | GPIO7 | GPIO8 ); //SS-пин мк PA4(29) , SCLK-пин мк PA5(30), MISO-пин мк PA6(31), MOSI-пин мк PA7(31)
              
    gpio_set (GPIOA, GPIO4 | GPIO5 | GPIO6 | GPIO7);
    
  } 

void UART()
  {

    gpio_mode_setup(GPIOA, GPIO_MODE_OUT, GPIO_PUPD_NONE, GPIO9 | GPIO10 | GPIO10 | GPIO11 );   //RX1-пин мк PA3(26), TX1-пин мк PA2(25), 
    gpio_mode_setup(GPIOB, GPIO_MODE_OUT, GPIO_PUPD_NONE,  GPIO10 | GPIO11 );    // RX0-пин мк PC11(79), TX0--пин мк PC10(80);   
    gpio_set (GPIOA, GPIO4 | GPIO5 );
    gpio_set (GPIOB,  GPIO6 | GPIO7);
    
  } 

void SWD ()
  {

    gpio_mode_setup(GPIOA, GPIO_MODE_OUT, GPIO_PUPD_NONE,  GPIO12 | GPIO12 ); //SWDIO-пин мк PA13(72), SCLKпин мк PA14(76)        
    gpio_set (GPIOA,  GPIO11 | GPIO12);
    
  } 




int main()
{



}
