/* Reads all channels on the MCP3008 and prints the first 2 over Serial.
 *  
 * Hook the MCP3008 up to the SPI bus.
 */

#include <mcp3008.h>

#define CHIP_SELECT 8

mcp3008 mcp = mcp3008(CHIP_SELECT);
uint16_t conversions[MCP3008_NUM_CHANNELS];

void setup() {
  Serial.begin(9600);
  
  mcp.begin();
}

// the loop function runs over and over again forever
void loop() {
   //read all channels
   mcp.readAllChannels(conversions);
   
   //read a single channel
   //uint16_t x = mcp.readChannelSingle(0);

   //print the first 2 conversions
   Serial.print(conversions[0]);
   Serial.print(",");
   Serial.println(conversions[1]);
   delay(250);
}
