#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint32_t gpio_odr = 0x00000000;
    gpio_odr |= (1U << 5); // Включаем 5-й бит (пин PA5)
    printf("Register GPIO_ODR state: 0x%08X\n", gpio_odr);
    return 0;
}
