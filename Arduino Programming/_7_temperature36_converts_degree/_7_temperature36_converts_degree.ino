/* Digital inputs just give you an on/off answer as to what is happening at a particular pin on
the Arduino board. Analog inputs, however, give you a value between 0 and 1023
depending on the voltage at the analog input pin.
The program reads the analog input using the analogRead function.
displays the reading and actual voltage at the analog pin A0 in the Serial Monitor every
half second, so open the Serial Monitor and watch the readings appear.*/
 //TMP36 Pin Variables
    int sensorPin = A0;                                              //the analog pin the TMP36's Vout (sense) pin is connected to A0
                                                                     //the resolution is 10 mV / degree centigrade with a
                                                                     //500 mV offset to allow for negative temperatures
    void setup()
    {
      Serial.begin(9600);                                            //Start the serial connection with the computer
                                                                     //to view the result open the serial monitor 
    }
     void loop()                                                     // run over and over again
    {
                                                                     //getting the voltage reading from the temperature sensor
     int reading = analogRead(sensorPin);  
                                                                     // converting that reading to voltage, 
                                                                     //for 3.3v arduino use 3.3
     float voltage = reading * 5.0;
     voltage /= 1024.0; 
                                                                      // print out the voltage
     Serial.print(voltage); 
     Serial.println(" volts");
                                                                      // now print out the temperature
     float temperatureC = (voltage - 0.5) * 100.0 ;                     //converting from 10 mv per degree with 500 mV offset
     Serial.print(temperatureC); 
     Serial.println(" degrees C");                                    //to degrees ((voltage - 500mV) times 100)
     
    }
