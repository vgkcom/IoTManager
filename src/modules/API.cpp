#include "ESPConfiguration.h"

void* getAPI_Cron(String subtype, String params);
void* getAPI_Loging(String subtype, String params);
void* getAPI_LogingHourly(String subtype, String params);
void* getAPI_IoTMath(String subtype, String params);
void* getAPI_Timer(String subtype, String params);
void* getAPI_Variable(String subtype, String params);
void* getAPI_VButton(String subtype, String params);
void* getAPI_Ads1115(String subtype, String params);
void* getAPI_AnalogAdc(String subtype, String params);
void* getAPI_Bmp280(String subtype, String params);
void* getAPI_Ds18b20(String subtype, String params);
void* getAPI_Impulse(String subtype, String params);
void* getAPI_Ina226(String subtype, String params);
void* getAPI_Max6675(String subtype, String params);
void* getAPI_UART(String subtype, String params);
void* getAPI_AnalogBtn(String subtype, String params);
void* getAPI_ButtonIn(String subtype, String params);
void* getAPI_ButtonOut(String subtype, String params);
void* getAPI_Buzzer(String subtype, String params);
void* getAPI_Pwm32(String subtype, String params);
void* getAPI_TelegramLT(String subtype, String params);
void* getAPI_Thermostat(String subtype, String params);

void* getAPI(String subtype, String params) {
void* tmpAPI;
if ((tmpAPI = getAPI_Cron(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Loging(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_LogingHourly(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_IoTMath(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Timer(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Variable(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_VButton(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Ads1115(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_AnalogAdc(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Bmp280(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Ds18b20(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Impulse(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Ina226(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Max6675(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_UART(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_AnalogBtn(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_ButtonIn(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_ButtonOut(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Buzzer(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Pwm32(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_TelegramLT(subtype, params)) != nullptr) return tmpAPI;
if ((tmpAPI = getAPI_Thermostat(subtype, params)) != nullptr) return tmpAPI;
return nullptr;
}