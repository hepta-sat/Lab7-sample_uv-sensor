#include "mbed.h"
AnalogIn sensorUV(p15);
float UVvalue;
int main() {
    while (true) {
        UVvalue = sensorUV;
        printf("\rUV Value = %3.2f%%\r\n",UVvalue*100);
        wait(1.0);
    }
}
