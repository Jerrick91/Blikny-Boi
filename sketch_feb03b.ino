/*
 * 
 * Jordan Herrick 2/3/2018
 * Turn led on and then off on Bluefruit Feather MO
 */
void setup() {
 pinMode(13, OUTPUT);        //Sets up pin 13 to output signal
}


void loop() {
digitalWrite(13, HIGH);      //Send signal to pin 13 HIGH is on
delay(2000);                 //Wait 2 Seconds
digitalWrite(13, LOW);       //Cuts signal to pin 13 Low is off
delay(2000);}                //Wait 2 seconds

