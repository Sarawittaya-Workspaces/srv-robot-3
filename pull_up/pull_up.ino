int led_1 = 5;
int led_2 = 4;
int led_3 = 3;

char wtfSerial = '0';

void setup() {

    pinMode(led_1, OUTPUT);
    pinMode(led_2, OUTPUT);
    pinMode(led_3, OUTPUT);

    Serial.begin(9600);
    Serial.println("Program is Start.");

    digitalWrite(led_1, LOW);
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, LOW);
}

void loop() {
  
    if(Serial.available() > 0) {
        wtfSerial = Serial.read();
        Serial.print("State: ");
        Serial.println(wtfSerial);
    }
    if(wtfSerial == '0') {
    	digitalWrite(led_1, LOW);
        digitalWrite(led_2, LOW);
        digitalWrite(led_3, LOW);
        Serial.println("All LED is off");
    }
    if(wtfSerial == '1') {
    	digitalWrite(led_1, HIGH);
        Serial.println("LED 1 is on");
    }
      if(wtfSerial == '2') {
    	digitalWrite(led_2, HIGH);
        Serial.println("LED 2 is on");
    }
      if(wtfSerial == '3') {
    	digitalWrite(led_3, HIGH);
        Serial.println("LED 3 is on");
    }
} 