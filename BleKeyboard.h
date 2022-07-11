#ifndef ESP32_BLE_KEYBOARD_H
#define ESP32_BLE_KEYBOARD_H

#include <BLEDevice.h>
#include <BLEServer.h>
#include "BLEHIDDevice.h"
#include "BLECharacteristic.h"

class BleKeyboard {
private:
	BLEHIDDevice* hid;
	BLECharacteristic* inputKeyboard;
	BLEAdvertising* advertising;

public:
	BleKeyboard() = default;
	void begin(void);
};

#endif // ESP32_BLE_KEYBOARD_H