// BLE Server (ESP32)
#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>

void setup() {
  Serial.begin(115200);
  BLEDevice::init("DHT_ESP32");  // 서버 이름 설정

  BLEServer *pServer = BLEDevice::createServer();
  BLEAdvertising *pAdvertising = BLEDevice::getAdvertising();
  
  pAdvertising->start();  // Advertising 시작
  Serial.println("BLE Server advertising started...");
}

void loop() {
  delay(1000);
}