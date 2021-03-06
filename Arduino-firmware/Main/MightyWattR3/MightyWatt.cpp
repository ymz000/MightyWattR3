/**
 * MightyWatt.cpp
 *
 * 2016-11-18
 * kaktus circuits
 * GNU GPL v.3
 */

/* <Includes> */ 

#include "Configuration.h"
#include "Communication.h"
#include "ADC.h"
#include "DACC.h"
#include "LED.h"
#include "Pin.h"
#include "Fan.h"
#include "LEDController.h"
#include "PinController.h"
#include "FanController.h"
#include "Voltmeter.h"
#include "Ammeter.h"
#include "VoltageSetter.h"
#include "CurrentSetter.h"
#include "Thermometer.h"
#include "Control.h"
#include "Measurement.h"
#include "Limiter.h"
#include "ErrorMessaging.h"
#include "CommunicationWatchdog.h"
#include "RangeSwitcher.h"

/* </Includes> */ 


/* <Implementations> */ 

void MightyWatt_Init(void)
{
  Communication_Init();
  ADC_Init();
  DACC_Init();
  LED_Init();
  Pin_Init();
  Fan_Init();
  RangeSwitcher_Init();
  Voltmeter_Init();  
  Ammeter_Init();
  VoltageSetter_Init();
  CurrentSetter_Init();
  Thermometer_Init();
  Measurement_Init();
  Control_Init();
  LEDController_Init();
  PinController_Init();
  FanController_Init();
  Limiter_Init();
  ErrorMessaging_Init();
  CommunicationWatchdog_Init();
}

void MightyWatt_Do(void)
{
  Communication_Do();
  ADC_Do();
  Voltmeter_Do();
  Ammeter_Do();  
  Thermometer_Do();
  Measurement_Do();
  RangeSwitcher_Do();
  Control_Do();
  LEDController_Do();
  PinController_Do();
  FanController_Do();
  Limiter_Do();  
  CommunicationWatchdog_Do();
}
  
/* </Implementations> */
