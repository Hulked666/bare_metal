/*
 * main.h
 *
 *  Created on: 26.09.2026
 *      Author: marko
 */

#ifndef MAIN_H_
#define MAIN_H_
typedef struct{
	uint32_t gpioa_en: 1;
	uint32_t gpiob_en: 1;
	uint32_t gpioc_en: 1;
	uint32_t gpiod_en: 1;
	uint32_t gpioe_en: 1;
	uint32_t gpiof_en: 1;
	uint32_t gpiog_en: 1;
	uint32_t gpioh_en: 1;
	uint32_t gpioi_en: 1;
	uint32_t reserved: 3;
	uint32_t otgfs_en: 1;
	uint32_t acd_en: 1;
	uint32_t dcmi_en: 1;
	uint32_t reserved_2: 1;
	uint32_t aes_en: 1;
	uint32_t hash_en: 1;
	uint32_t rng_en: 1;
	uint32_t reserved_3: 13;
}RCC_AHB2ENR_t;

typedef struct{
	uint32_t pin_0: 2;
	uint32_t pin_1: 2;
	uint32_t pin_2: 2;
	uint32_t pin_3: 2;
	uint32_t pin_4: 2;
	uint32_t pin_5: 2;
	uint32_t pin_6: 2;
	uint32_t pin_7: 2;
	uint32_t pin_8: 2;
	uint32_t pin_9: 2;
	uint32_t pin_10: 2;
	uint32_t pin_11: 2;
	uint32_t pin_12: 2;
	uint32_t pin_13: 2;
	uint32_t pin_14: 2;
	uint32_t pin_15: 2;
}GPIOx_MODER_t;

typedef struct{
	uint32_t pin_0: 1;
	uint32_t pin_1: 1;
	uint32_t pin_2: 1;
	uint32_t pin_3: 1;
	uint32_t pin_4: 1;
	uint32_t pin_5: 1;
	uint32_t pin_6: 1;
	uint32_t pin_7: 1;
	uint32_t pin_8: 1;
	uint32_t pin_9: 1;
	uint32_t pin_10: 1;
	uint32_t pin_11: 1;
	uint32_t pin_12: 1;
	uint32_t pin_13: 1;
	uint32_t pin_14: 1;
	uint32_t pin_15: 1;
	uint32_t reserved: 16;
}GPIOx_ODR_t;

typedef struct{
	uint32_t pin_0: 1;
	uint32_t pin_1: 1;
	uint32_t pin_2: 1;
	uint32_t pin_3: 1;
	uint32_t pin_4: 1;
	uint32_t pin_5: 1;
	uint32_t pin_6: 1;
	uint32_t pin_7: 1;
	uint32_t pin_8: 1;
	uint32_t pin_9: 1;
	uint32_t pin_10: 1;
	uint32_t pin_11: 1;
	uint32_t pin_12: 1;
	uint32_t pin_13: 1;
	uint32_t pin_14: 1;
	uint32_t pin_15: 1;
	uint32_t reserved: 16;
}GPIOx_IDR_t;

typedef struct{
	uint32_t pin_0: 2;
	uint32_t pin_1: 2;
	uint32_t pin_2: 2;
	uint32_t pin_3: 2;
	uint32_t pin_4: 2;
	uint32_t pin_5: 2;
	uint32_t pin_6: 2;
	uint32_t pin_7: 2;
	uint32_t pin_8: 2;
	uint32_t pin_9: 2;
	uint32_t pin_10: 2;
	uint32_t pin_11: 2;
	uint32_t pin_12: 2;
	uint32_t pin_13: 2;
	uint32_t pin_14: 2;
	uint32_t pin_15: 2;
}GPIOx_PUDR_t;

#endif /* MAIN_H_ */
