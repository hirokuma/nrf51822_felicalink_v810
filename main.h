#ifndef MAIN_H
#define MAIN_H

#include "nrf_drv_gpiote.h"

void gpiote_irq_handler(nrf_drv_gpiote_pin_t pin, nrf_gpiote_polarity_t action);

#endif /* MAIN_H */
