#include "mbed/mbed.h"

static void blinky(void) {
    static DigitalOut led(LED1);
    static DigitalOut leds(LED2);


    leds= !led;
    led = !led;


    printf("LED = %d \r\n",led.read());
    printf("LED = %d \r\n",leds.read());
}


void app_start(int, char**) {
    minar::Scheduler::postCallback(blinky).period(minar::milliseconds(500));
}