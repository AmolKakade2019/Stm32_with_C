#pragma once
#include<stdint.h>
#include"Stm32_MemoryMap.h"

void Default_handler                    (void)    __attribute__((section(".text")));
void Reset_Handler                      (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void NMI_Handler                        (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void HardFault_Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void MemManage_Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void BusFault_Handler                   (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void UsageFault_Handler                 (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void System_Handler                     (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void Debug_Handler                      (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void PendSV_Handler                     (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void Systick_Handler                    (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void WWDG_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void PVD_IRQ__Handler                   (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TAMP_STAMP_IRQ__Handler            (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void RTC_WKUP_IRQ__Handler              (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void FLASH_IRQ__Handler                 (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void RCC_IRQ__Handler                   (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void EXTI0_IRQ__Handler                 (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void EXTI1_IRQ__Handler                 (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void EXTI2_IRQ__Handler                 (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void EXTI3_IRQ__Handler                 (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void EXTI4_IRQ__Handler                 (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA1_Stream0_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA1_Stream1_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA1_Stream2_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA1_Stream3_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA1_Stream4_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA1_Stream5_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA1_Stream6_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void ADC_IRQ__Handler                   (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void CAN1_TX_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void CAN1_RX0_IRQ__Handler              (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void CAN1_RX1_IRQ__Handler              (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void CAN1_SCE_IRQ__Handler              (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void EXTI9_5_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM1_BRK_TIM9_IRQ__Handler         (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM1_UP_TIM10_IRQ__Handler         (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM1_TRG_COM_TIM11_IRQ__Handler    (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM1_CC_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM2_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM3_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM4_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void I2C1_EV_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void I2C1_ER_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void I2C2_EV_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void I2C2_ER_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void SPI1_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void SPI2_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void USART1_IRQ__Handler                (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void USART2_IRQ__Handler                (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void USART3_IRQ__Handler                (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void EXTI15_10_IRQ__Handler             (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void RTC_Alarm_IRQ__Handler             (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void OTG_FS_WKUP_IRQ__Handler           (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM8_BRK_TIM12_IRQ__Handler        (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM8_UP_TIM13_IRQ__Handler         (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM8_TRG_COM_TIM14_IRQ__Handler    (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM8_CC_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA1_Stream7_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void FMC_IRQ__Handler                   (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void SDIO_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM5_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void SPI3_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void UART4_IRQ__Handler                 (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void UART5_IRQ__Handler                 (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM6_DAC_IRQ__Handler              (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void TIM7_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA2_Stream0_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA2_Stream1_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA2_Stream2_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA2_Stream3_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA2_Stream4_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void CAN2_TX_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void CAN2_RX0_IRQ__Handler              (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void CAN2_RX1_IRQ__Handler              (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void CAN2_SCE_IRQ__Handler              (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void OTG_FS_IRQ__Handler                (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA2_Stream5_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA2_Stream6_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DMA2_Stream7_IRQ__Handler          (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void USART6_IRQ__Handler                (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void I2C3_EV_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void I2C3_ER_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void OTG_HS_EP1_OUT_IRQ__Handler        (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void OTG_HS_EP1_IN_IRQ__Handler         (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void OTG_HS_WKUP_IRQ__Handler           (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void OTG_HS_IRQ__Handler                (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void DCMI_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void FPU_IRQ__Handler                   (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void SPI4_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void SAI1_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void SAI2_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void QuadSPI_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void HDMI_IRQ__Handler                  (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void SPDIF_IRQ__Handler                 (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void FMPI2C1_IRQ__Handler               (void)    __attribute__((weak, section(".text"), alias("Default_handler")));
void FMPI2C1_error_IRQ__Handler         (void)    __attribute__((weak, section(".text"), alias("Default_handler")));

uint32_t stm32_Vectortable[]                      __attribute__((section(".isr_vector")))= {
    STACK_START                                   ,// Address 0x0
    0                                             ,// Address 0x0
    (uint32_t)&Reset_Handler                      ,// Address 0x4
    (uint32_t)&NMI_Handler                        ,// Address 0x8
    (uint32_t)&HardFault_Handler                  ,// Address 0xc
    (uint32_t)&MemManage_Handler                  ,// Address 0x10
    (uint32_t)&BusFault_Handler                   ,// Address 0x14
    (uint32_t)&UsageFault_Handler                 ,// Address 0x18
    0                                             ,// Address 0x1c
    0                                             ,// Address 0x20
    0                                             ,// Address 0x24
    0                                             ,// Address 0x28
    (uint32_t)&System_Handler                     ,// Address 0x2c
    (uint32_t)&Debug_Handler                      ,// Address 0x30
    0                                             ,// Address 0x34
    (uint32_t)&PendSV_Handler                     ,// Address 0x38
    (uint32_t)&Systick_Handler                    ,// Address 0x3c
    (uint32_t)&WWDG_IRQ__Handler                  ,// Address 0x40
    (uint32_t)&PVD_IRQ__Handler                   ,// Address 0x44
    (uint32_t)&TAMP_STAMP_IRQ__Handler            ,// Address 0x48
    (uint32_t)&RTC_WKUP_IRQ__Handler              ,// Address 0x4c
    (uint32_t)&FLASH_IRQ__Handler                 ,// Address 0x50
    (uint32_t)&RCC_IRQ__Handler                   ,// Address 0x54
    (uint32_t)&EXTI0_IRQ__Handler                 ,// Address 0x58
    (uint32_t)&EXTI1_IRQ__Handler                 ,// Address 0x5c
    (uint32_t)&EXTI2_IRQ__Handler                 ,// Address 0x60
    (uint32_t)&EXTI3_IRQ__Handler                 ,// Address 0x64
    (uint32_t)&EXTI4_IRQ__Handler                 ,// Address 0x68
    (uint32_t)&DMA1_Stream0_IRQ__Handler          ,// Address 0x6c
    (uint32_t)&DMA1_Stream1_IRQ__Handler          ,// Address 0x70
    (uint32_t)&DMA1_Stream2_IRQ__Handler          ,// Address 0x74
    (uint32_t)&DMA1_Stream3_IRQ__Handler          ,// Address 0x78
    (uint32_t)&DMA1_Stream4_IRQ__Handler          ,// Address 0x7c
    (uint32_t)&DMA1_Stream5_IRQ__Handler          ,// Address 0x80
    (uint32_t)&DMA1_Stream6_IRQ__Handler          ,// Address 0x84
    (uint32_t)&ADC_IRQ__Handler                   ,// Address 0x88
    (uint32_t)&CAN1_TX_IRQ__Handler               ,// Address 0x8c
    (uint32_t)&CAN1_RX0_IRQ__Handler              ,// Address 0x90
    (uint32_t)&CAN1_RX1_IRQ__Handler              ,// Address 0x94
    (uint32_t)&CAN1_SCE_IRQ__Handler              ,// Address 0x98
    (uint32_t)&EXTI9_5_IRQ__Handler               ,// Address 0x9c
    (uint32_t)&TIM1_BRK_TIM9_IRQ__Handler         ,// Address 0xa0
    (uint32_t)&TIM1_UP_TIM10_IRQ__Handler         ,// Address 0xa4
    (uint32_t)&TIM1_TRG_COM_TIM11_IRQ__Handler    ,// Address 0xa8
    (uint32_t)&TIM1_CC_IRQ__Handler               ,// Address 0xac
    (uint32_t)&TIM2_IRQ__Handler                  ,// Address 0xb0
    (uint32_t)&TIM3_IRQ__Handler                  ,// Address 0xb4
    (uint32_t)&TIM4_IRQ__Handler                  ,// Address 0xb8
    (uint32_t)&I2C1_EV_IRQ__Handler               ,// Address 0xbc
    (uint32_t)&I2C1_ER_IRQ__Handler               ,// Address 0xc0
    (uint32_t)&I2C2_EV_IRQ__Handler               ,// Address 0xc4
    (uint32_t)&I2C2_ER_IRQ__Handler               ,// Address 0xc8
    (uint32_t)&SPI1_IRQ__Handler                  ,// Address 0xcc
    (uint32_t)&SPI2_IRQ__Handler                  ,// Address 0xd0
    (uint32_t)&USART1_IRQ__Handler                ,// Address 0xd4
    (uint32_t)&USART2_IRQ__Handler                ,// Address 0xd8
    (uint32_t)&USART3_IRQ__Handler                ,// Address 0xdc
    (uint32_t)&EXTI15_10_IRQ__Handler             ,// Address 0xe0
    (uint32_t)&RTC_Alarm_IRQ__Handler             ,// Address 0xe4
    (uint32_t)&OTG_FS_WKUP_IRQ__Handler           ,// Address 0xe8
    (uint32_t)&TIM8_BRK_TIM12_IRQ__Handler        ,// Address 0xec
    (uint32_t)&TIM8_UP_TIM13_IRQ__Handler         ,// Address 0xf0
    (uint32_t)&TIM8_TRG_COM_TIM14_IRQ__Handler    ,// Address 0xf4
    (uint32_t)&TIM8_CC_IRQ__Handler               ,// Address 0xf8
    (uint32_t)&DMA1_Stream7_IRQ__Handler          ,// Address 0xfc
    (uint32_t)&FMC_IRQ__Handler                   ,// Address 0x100
    (uint32_t)&SDIO_IRQ__Handler                  ,// Address 0x104
    (uint32_t)&TIM5_IRQ__Handler                  ,// Address 0x108
    (uint32_t)&SPI3_IRQ__Handler                  ,// Address 0x10c
    (uint32_t)&UART4_IRQ__Handler                 ,// Address 0x110
    (uint32_t)&UART5_IRQ__Handler                 ,// Address 0x114
    (uint32_t)&TIM6_DAC_IRQ__Handler              ,// Address 0x118
    (uint32_t)&TIM7_IRQ__Handler                  ,// Address 0x11c
    (uint32_t)&DMA2_Stream0_IRQ__Handler          ,// Address 0x120
    (uint32_t)&DMA2_Stream1_IRQ__Handler          ,// Address 0x124
    (uint32_t)&DMA2_Stream2_IRQ__Handler          ,// Address 0x128
    (uint32_t)&DMA2_Stream3_IRQ__Handler          ,// Address 0x12c
    (uint32_t)&DMA2_Stream4_IRQ__Handler          ,// Address 0x130
    0                                             ,// Address 0x134
    0                                             ,// Address 0x138
    (uint32_t)&CAN2_TX_IRQ__Handler               ,// Address 0x13c
    (uint32_t)&CAN2_RX0_IRQ__Handler              ,// Address 0x140
    (uint32_t)&CAN2_RX1_IRQ__Handler              ,// Address 0x144
    (uint32_t)&CAN2_SCE_IRQ__Handler              ,// Address 0x148
    (uint32_t)&OTG_FS_IRQ__Handler                ,// Address 0x14c
    (uint32_t)&DMA2_Stream5_IRQ__Handler          ,// Address 0x150
    (uint32_t)&DMA2_Stream6_IRQ__Handler          ,// Address 0x154
    (uint32_t)&DMA2_Stream7_IRQ__Handler          ,// Address 0x158
    (uint32_t)&USART6_IRQ__Handler                ,// Address 0x15c
    (uint32_t)&I2C3_EV_IRQ__Handler               ,// Address 0x160
    (uint32_t)&I2C3_ER_IRQ__Handler               ,// Address 0x164
    (uint32_t)&OTG_HS_EP1_OUT_IRQ__Handler        ,// Address 0x168
    (uint32_t)&OTG_HS_EP1_IN_IRQ__Handler         ,// Address 0x16c
    (uint32_t)&OTG_HS_WKUP_IRQ__Handler           ,// Address 0x170
    (uint32_t)&OTG_HS_IRQ__Handler                ,// Address 0x174
    (uint32_t)&DCMI_IRQ__Handler                  ,// Address 0x178
    0                                             ,// Address 0x17c
    0                                             ,// Address 0x180
    (uint32_t)&FPU_IRQ__Handler                   ,// Address 0x184
    0                                             ,// Address 0x188
    0                                             ,// Address 0x18c
    (uint32_t)&SPI4_IRQ__Handler                  ,// Address 0x190
    0                                             ,// Address 0x194
    0                                             ,// Address 0x198
    (uint32_t)&SAI1_IRQ__Handler                  ,// Address 0x19c
    0                                             ,// Address 0x1a0
    0                                             ,// Address 0x1a4
    0                                             ,// Address 0x1a8
    (uint32_t)&SAI2_IRQ__Handler                  ,// Address 0x1ac
    (uint32_t)&QuadSPI_IRQ__Handler               ,// Address 0x1b0
    (uint32_t)&HDMI_IRQ__Handler                  ,// Address 0x1b4
    (uint32_t)&SPDIF_IRQ__Handler                 ,// Address 0x1b8
    (uint32_t)&FMPI2C1_IRQ__Handler               ,// Address 0x1bc
    (uint32_t)&FMPI2C1_error_IRQ__Handler         ,// Address 0x1c0
};
