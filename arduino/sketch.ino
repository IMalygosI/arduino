void setup() {   
    pinMode(4, OUTPUT); 
    digitalWrite(4, HIGH);    
    delay(3000);
    digitalWrite(4, LOW); 
}
void loop() {
    digitalWrite(4, HIGH);    
    delay(500);
    digitalWrite(4, LOW);
    delay(1000); // 
}