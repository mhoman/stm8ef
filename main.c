#include <stdint.h>
#include "forth.h"

// The following declarations are just to provide a placeholder
// so that mixing-in C code with own memory gets easier

volatile __at(0x40) uint8_t forthData[0x03FF-0x40];

// declare trap handler
void TRAP_Handler() __trap;

// declare interrupt handler for Port A external interrupts
void EXTI0_IRQHandler() __interrupt (3);

// declare interrupt handler for Port B external interrupts
void EXTI1_IRQHandler() __interrupt (4);

// declare interrupt handler for Port C external interrupts
void EXTI2_IRQHandler() __interrupt (5);

// declare interrupt handler for Port D external interrupts
void EXTI3_IRQHandler() __interrupt (6);

// declare interrupt handler for TIM2 update overflow
void TIM2_UO_IRQHandler() __interrupt (13);

// declare interrupt handler for TIM4 ticker
void TIM4_IRQHandler() __interrupt (23);

// main - start Forth
void main(void)
{
  forth();
}

