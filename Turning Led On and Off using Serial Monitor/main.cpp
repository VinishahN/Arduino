void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  digitalWrite(13,LOW);
}

void loop()
{
  int is_data_available = Serial.available();
  if(is_data_available>0){
    int data = Serial.read();
    if(data==49){ //ASCII values
      digitalWrite(13,HIGH);
    }else if(data==48){
      digitalWrite(13,LOW);
    }
  }
}
//---------------OR---------------------------------//
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  digitalWrite(13,LOW);
}

void loop()
{
  int is_data_available = Serial.available();
  if(is_data_available>0){
    char data = Serial.read();
    if(data=='1'){
      digitalWrite(13,HIGH);
    }else if(data=='0'){
      digitalWrite(13,LOW);
    }
  }
}

//-------------------OR-----------------------------//
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  digitalWrite(13,LOW);
}

void loop()
{
    int data = Serial.read();
    if(data==49){
      digitalWrite(13,HIGH);
    }else if(data==48){
      digitalWrite(13,LOW);
    }
  
}