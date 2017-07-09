# MCP3008_Arduino
arduino driver for MCP3008 8 channel 10 bit ADC

Super simple driver for MCP3008 8 channel 10 bit ADC.
Datasheet: https://cdn-shop.adafruit.com/datasheets/MCP3008.pdf

Unlike the other drivers I've seen, this one doesn't use bit-banged SPI, but instead uses the standard SPI object.
This has only been tested on the SAMD core and may not work with other cores.
