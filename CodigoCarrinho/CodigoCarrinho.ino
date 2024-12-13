const int motor1 = D7;
const int motor2 = D6;

void setup() {
  Serial.begin(9600);
  pinMode(motor1, INPUT);
  pinMode(motor2, INPUT);

  //Motor 1
  pinMode(4, OUTPUT);  // saída A-
  pinMode(0, OUTPUT);  // saída A+
  //Motor 2
  pinMode(5, OUTPUT);  // saída B-
  pinMode(2, OUTPUT);  // saída B+
}

void loop() {
  Serial.print("Digital Reading 1=");
  Serial.print(analogRead(motor2));
  Serial.print("\t Digital Reading 2=");
  Serial.println(digitalRead(motor1));


  if (digitalRead(motor2) < 1) {
    //Gira os motores no sentido horario
    //Aciona motor 1
    analogWrite(4, 110);
    digitalWrite(2, HIGH);
  } else {
    //Gira os motores no sentido anti-horario
    //Aciona motor
    analogWrite(4, 0);
    digitalWrite(2, LOW);
  }

  if (digitalRead(motor1) < 1) {
    //Gira os motores no sentido horario
    //Aciona motor 2
    analogWrite(5, 110);
    digitalWrite(2, HIGH);
  } else {
    //Gira os motores no sentido anti-horario
    //Aciona motor 2
    analogWrite(5, 0);
    digitalWrite(0, LOW);
  }
}