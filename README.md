# BiometricLock
Using a recycled ESP32 with a blown voltage regulator

## Project Overview
An embedded security project aimed at building a fingerprint-authenticated locking mechanism. The project is currently in the Hardware Validation phase, focusing on salvaging an ESP32 with a damaged onboard voltage regulator.

## Purpose
The goal is to implement a biometric security layer for local device access while demonstrating hardware troubleshooting and recovery techniques.

## Technologies and Componenets
ESP32 Microcontroller: Repurposed for low-power biometric logic.
Adafruit Fingerprint Sensor: For image processing and template matching.
Arduino IDE: Core logic and hardware abstraction.

## Hardware Challenge
Recycling the "Busted" ESP32: This project utilizes a board that suffered a blown 3.3V regulator. To maintain functionality, the board is being powered through the 3.3V rail directly from an external regulated power supply, bypassing the damaged onboard circuitry. This requires careful monitoring of power stability to ensure the biometric sensor receives consistent voltage.
