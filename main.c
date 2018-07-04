#include <stdint.h>
#include "M4MemMap.h"
#include "GPIO.h"
#include "GPIO_Cfg.h"
#include "UART.h"
#include "UART_Cfg.h"


uint8_t UART_Rx_IntBuff[300]={0};
uint8_t UART_Tx_IntBuff[]="Hossam Ahmed Mahmoud AbduMageed Hussien El sayed!!Hossam Ahmed Mahmoud AbduMageed Hussien El sayed!!Hossam Ahmed Mahmoud AbduMageed Hussien El sayed!!Hossam Ahmed Mahmoud AbduMageed Hussien El sayed!!Hossam Ahmed Mahmoud AbduMageed Hussien El sayed!!Hossam Ahmed Mahmoud AbduMageed Hussien El sayed!!Hossam Ahmed Mahmoud AbduMageed Hussien El sayed!!Hossam Ahmed Mahmoud AbduMageed Hussien El sayed!!Hossam Ahmed Mahmoud AbduMageed Hussien El sayed!!Hossam Ahmed Mahmoud AbduMageed Hussien El sayed!!Hossam Ahmed Mahmoud AbduMageed Hussien El sayed!!Hossam Ahmed Mahmoud AbduMageed Hussien El sayed!!";

uint32_t Y1,Y2;


int main(void)
    {

    Y1 = 0;
    Y2 = 0;

    GPIO_Init();
    UART_Init();
    EN_INT(5);  //UART0
    //EN_INT(6);  //UART1
    //EN_INT(33); //UART2
    //EN_INT(59); //UART3
    //EN_INT(60); //UART4
    //EN_INT(61); //UART5
    //EN_INT(63); //UART7

    UART_Rx_Init(UART_Rx_IntBuff,8,0);
    //UART_Tx_Init(UART_Tx_IntBuff,20,0);

    while(1)
    {

        //UART_Rx(0);
        //UART_Tx(0);

    }


    return 0;

    }

