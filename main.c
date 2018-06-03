/* main.c */

/* Includes */
#include <stdint.h>

/* POSIX Header Files */
#include <pthread.h>

/* RTOS Header Files */
#include <FreeRTOS.h>
#include <task.h>

/* Driver Header Files */
#include <ti/drivers/GPIO.h>

/* Board Header Files */
#include "Board.h"

/* Local Header Files */
//#include "callbacks.h"
//#include "uart_thread.h"
//#include "led_thread.h"

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Stack size in bytes */
#define THREADSTACKSIZE    1024

int main(void)
{
    //pthread_attr_t      pAttrs;
    //struct sched_param  priParam;
    //struct mq_attr      attr;
    //int                 retc;
    //int                 detachState;

    /* Call driver init functions */
    Board_initGeneral();

    return (0);
}
