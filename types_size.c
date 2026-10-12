#include <stdio.h>
#include <stdint.h>

int main(void) {
    printf("=== Fixed-width types (<stdint.h>) ===\n");
    // %zu используется для безопасного вывода результата функции sizeof()
    printf("uint8_t  : %zu byte  (%zu bits)\n", sizeof(uint8_t),  sizeof(uint8_t) * 8);
    printf("uint16_t : %zu bytes (%zu bits)\n", sizeof(uint16_t), sizeof(uint16_t) * 8);
    printf("uint32_t : %zu bytes (%zu bits)\n", sizeof(uint32_t), sizeof(uint32_t) * 8);
    printf("uint64_t : %zu bytes (%zu bits)\n", sizeof(uint64_t), sizeof(uint64_t) * 8);
    printf("Pointer  : %zu bytes (%zu bits)\n\n", sizeof(void*),  sizeof(void*) * 8);

    // Демонстрация переполнения 8-битного счетчика
    uint8_t timer_cnt = 254;
    printf("=== 8-bit Counter Overflow ===\n");
    
    for (int i = 0; i < 4; i++) {
        printf("Step %d: timer_cnt = %u\n", i, timer_cnt);
        timer_cnt++; 
    }

    return 0;
}