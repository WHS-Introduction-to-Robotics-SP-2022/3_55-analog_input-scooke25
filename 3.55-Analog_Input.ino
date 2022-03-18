int inPin = A0 ;
 int val = 1;



void setup() {
    pinMode(inPin , INPUT);
    Serial.begin(9600);
}

void loop() {

    Serial.println(analogRead(inPin), HEX);
    delay(250);
}
