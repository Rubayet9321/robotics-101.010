
    int red1 = 3;
    int red2 = 8;
    float x;                                                         //the resolution is 10 mV / degree centigrade with a
                                                                     //500 mV offset to allow for negative temperatures
    void setup()
    {
      Serial.begin(9600);                                            //Start the serial connection with the computer
                                                                     //to view the result open the serial monitor 
    }
     void loop()                                                     // run over and over again
    {
                                                                     //getting the voltage reading from the temperature sensor
     pinMode(red1, OUTPUT);
     digitalWrite(red1, LOW);
     pinMode(red2, OUTPUT);
     digitalWrite(red2, LOW);
    

     if(x < 200) 
     digitalWrite(red1, HIGH);
     else
     {
         digitalWrite(red1, LOW);
     }
     if ( x >= 200, x < 400) 
     digitalWrite(red2, HIGH);
     else
     {
         digitalWrite(red2, LOW);
     }
    }


    
