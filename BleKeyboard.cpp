#include "BleKeyboard.h"

void BleKeyboard::begin(void) {
	BLEDevice::init("Meow");
	BLEServer* pServer = BLEDevice::createServer();

	hid = new BLEHIDDevice(pServer);
	inputKeyboard = hid->inputReport(0x01);//KEYBOARD_ID

	hid->pnp(0x02, 0x05ac, 0x820a, 0x0210);//vid, pid, version
	hid->startServices();

	advertising = pServer->getAdvertising();
	advertising->addServiceUUID(hid->hidService()->getUUID());
	advertising->start();
}