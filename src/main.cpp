#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/dma.h>
#include <libopencm3/cm3/nvic.h>
#include <libopencm3/stm32/spi.h>
#include <libopencm3/stm32/timer.h>


/* Настройка GPIOs SPI: SS=PB9, SCK=PB10, MISO=PC2 и MOSI=PC3 */
 void spi_setup() {
   gpio_mode_setup(GPIOB, GPIO_MODE_OUTPUT,
            GPIO_PUPD_NONE, GPIO9 | GPIO10 );
   gpio_mode_setup(GPIOC, GPIO_MODE_OUTPUT,
            GPIO_PUPD_NONE, GPIO3 );
   gpio_mode_setup(GPIOC, GPIO_MODE_INPUT, GPIO_PUPD_NONE,GPIO2);
     spi_init_master(SPI2, SPI_CR1_BAUDRATE_FPCLK_DIV_64, SPI_CR1_CPOL_CLK_TO_1_WHEN_IDLE,
                  SPI_CR1_CPHA_CLK_TRANSITION_2, SPI_CR1_DFF_8BIT, SPI_CR1_MSBFIRST);
   spi_enable(SPI2);
}    

/* Настройка аналогового сигнала с датчика */
constexpr uint16_t PERIOD_MS{1000};
void gpio_setup(){
    rcc_periph_clock_enable(RCC_GPIOA);
gpio_mode_setup(GPIOA, GPIO_MODE_AF, GPIO_PUPD_NONE,GPIO0);
gpio_set_af(GPIOA,GPIO_AF2,GPIO0);
}
void timer_setup(){
    rcc_periph_clock_enable(RCC_TIM1);
    timer_set_prescaler(TIM1, rcc_get_timer_clk_freq(TIM1) / (PERIOD_MS - 1));
    timer_set_period(TIM1,  PERIOD_MS - 1);
    timer_enable_counter(TIM1);
    }



int main(){

}
