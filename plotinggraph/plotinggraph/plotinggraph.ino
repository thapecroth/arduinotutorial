void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i=0;i<1000000;i++){
    Serial.println(i);
  }
}

void loop() {
}
