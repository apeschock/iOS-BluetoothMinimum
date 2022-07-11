#include "BleKeyboard.h"

BleKeyboard ble;

void setup() {
    Serial.begin(115200);
    ble.begin();
    Serial.println("Started Bluetooth");
}

void loop() {

}