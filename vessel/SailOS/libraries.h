#ifndef LIBRARIES_h
#define LIBRARIES_h

#include <Arduino.h>
#include <SoftwareSerial.h>                                     //Virtual serial port
#include <SPI.h>                                                //Serial peripheral interface
#include <Wire.h>                                               //Communication
//#include <SD.h>                                                 //SD card interface
//#include "libraries/SdFat-2.2.2/src/SdFat.h"
//#include "libraries/SD-1.2.4/src/SD.h"                          //SD card interface
#include "libraries/PWMServo-2.1.0/PWMServo.h"                  //Servo control
#include "libraries/HCSR04_ultrasonic_sensor/src/HCSR04.h"      //Ultrasonic interface
#include "libraries/Adafruit_MPU6050-2.2.6/Adafruit_MPU6050.h"  //Gyroscope interface
#include "libraries/RTTL/src/RTTL.h"                            //Speaker tone generator
#include "libraries/TinyGPSPlus-master/src/TinyGPSPlus.h"           //GPS interface
#include "libraries/TinyGPSPlus-master/src/TinyGPS++.h"           //GPS interface
#include "libraries/DHTlib/dht.h"                               //Internal Humidity / temp interface
#include "libraries/PCF8575-0.2.1/PCF8575.h"                    //Port expander interface
#include "libraries/QMC5883LCompass-1.2.3/src/QMC5883LCompass.h"  //Compass interface
#include "libraries/REYAX/src/REYAX.h"                              //Radio interface

//#include "libraries/SD-1.2.4/src/SD.cpp"                        //SD card interface
//#include "libraries/SD-1.2.4/src/File.cpp"                      //SD card interface
#include "libraries/PWMServo-2.1.0/PWMServo.cpp"                //Servo control
#include "libraries/HCSR04_ultrasonic_sensor/src/HCSR04.cpp"      //Ultrasonic interface
#include "libraries/Adafruit_MPU6050-2.2.6/Adafruit_MPU6050.cpp"  //Gyroscope interface
#include "libraries/RTTL/src/RTTL.cpp"                          //Speaker tone generator
#include "libraries/TinyGPSPlus-master/src/TinyGPS++.cpp"           //GPS interface
#include "libraries/DHTlib/dht.cpp"                               //Internal Humidity / temp interface
#include "libraries/PCF8575-0.2.1/PCF8575.cpp"                    //Port expander interface
#include "libraries/QMC5883LCompass-1.2.3/src/QMC5883LCompass.cpp"  //Compass interface
#include "libraries/REYAX/src/REYAX.cpp"                            //Radio interface

#endif

