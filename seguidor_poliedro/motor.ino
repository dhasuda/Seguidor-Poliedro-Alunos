void motorAParaFrente() {
  int in1 = 0; // Definir depois
  int in2 = 0; // Definir depois  

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void motorBParaFrente() {
  int in3 = 0; // Definir depois
  int in4 = 0; // Definir depois  

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void motorAParaTras() {
  int in1 = 0; // Definir depois
  int in2 = 0; // Definir depois  

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}


void motorBParaTras() {
  int in3 = 0; // Definir depois
  int in4 = 0; // Definir depois  

  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void girar90horario() {
  motorAParaFrente();
  motorBParaTras();
  delay(100); // Definir depois
}

void girar90antihorario() {
  motorBParaFrente();
  motorAParaTras();
  delay(100); // Definir depois
}

void motorAParado() {
  int in1 = 0; // Definir depois
  int in2 = 0; // Definir depois

  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
}

void motorBParado() {
  int in3 = 0; // Definir depois
  int in4 = 0; // Definir depois  

  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);
}

void virarParaDireita() {
  motorAParaFrente();
  motorBParado();
}

void virarParaEsquerda() {
  motorBParaFrente();
  motorAParado();
}

void irParaFrente() {
  motorAParaFrente();
  motorBParaFrente();
}

