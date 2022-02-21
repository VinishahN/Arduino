// A program that causes the built-in LED connected to pin 13 on the Arduino to blink, 
// alternating between fast blinks and slow blinks. The LED should blink 5 times quickly and 
// then it should blink 5 more times slowly. When blinking quickly, the LED should have a 1 second 
// period, so it should be high for 0.5 seconds and low for 0.5 seconds. When blinking slowly, the LED 
// should have a 4 second period, so it should be high for 2 seconds and low for 2 seconds. The LED 
// should continue to blink in this alternating fashion for as long as the Arduino receives power.

void setup(){
  pinMode(13,OUTPUT);
}

void loop(){
  int i=0,j=0;
  //Quick Blinking
  while(i<5){
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
    i++;
  }
  //Slow Blinking
  while(j<5){
    digitalWrite(13,HIGH);
    delay(2000);
    digitalWrite(13,LOW);
    delay(2000);
    j++;
  }
}
