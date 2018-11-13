
int leituraDireita() {
  int tempo;
  int out = 0; // Definir depois

  if (digitalRead(out) == HIGH) {
    tempo = pulseIn(out, LOW);
  } else {
    tempo = pulseIn(out, HIGH);
  }
  return tempo;
}

int leituraEsquerda() {
  int out = 0; // Definir depois
  int tempo;
  if (digitalRead(out) == HIGH) {
    tempo = pulseIn(out, LOW);
  } else {
    tempo = pulseIn(out, HIGH);
  }
  return tempo;
}

bool pretoDireito() {
  // Retorna true se tiver preto
  // Retorna false se não tiver
  setarSemFiltro();

  // Ligar sensor
  int S0 = 0; // Colocar depois
  int S1 = 0; // Colocar depois
  digitalWrite(S0, HIGH);
  digitalWrite(S1, HIGH);

  int limitePreto = 0; // Definir depois

  int tempo = leituraDireita();
  if (tempo < limitePreto) {
    return false;
  } else {
    return true;
  }
}

bool pretoEsquerdo() {
  // Retorna true se tiver preto
  // Retorna false se não tiver
  setarSemFiltro();

  // Ligar sensor
  int S0 = 0; // Colocar depois
  int S1 = 0; // Colocar depois
  digitalWrite(S0, HIGH);
  digitalWrite(S1, HIGH);

  int limitePreto = 0; // Definir depois

  int tempo = leituraDireita();
  if (tempo < limitePreto) {
    return false;
  } else {
    return true;
  }
}

void setarSemFiltro() {
  int S2dir;
  int S3dir;
  int S2esq;
  int S3esq;

  digitalWrite(S2dir, HIGH);
  digitalWrite(S3dir, LOW);

  digitalWrite(S2esq, HIGH);
  digitalWrite(S3esq, LOW);
}

