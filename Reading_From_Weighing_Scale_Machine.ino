/* 
 *  This code can be used to capture data from a Weighing Scale Machine over Arduino 
 */

void setup() 
{
  Serial.begin(9600);		//Connect your Weighing Machine over Arduino Serial
  /*Set the Baud Rate as needed. Most commonly used Baud Rate for Weighing Machines is 9600*/
}//end of setup()

void loop() 
{
  while(Serial.available())			//Check if Weighing Machine is available over the Serial port of Arduino
  {
    Serial.print((char)Serial.read());					//Print the Read Characters in CHARACTER Format rather than ASCII from the weighing scale
  }
}//end of loop()
