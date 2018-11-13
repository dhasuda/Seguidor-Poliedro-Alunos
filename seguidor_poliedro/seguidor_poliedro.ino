#include <Ultrasonic.h>

Ultrasonic sensor(7,6); // Definir depois

void seguirLinhaPreta();

void motorAParaFrente();
void motorBParaFrente();

void motorAParaTras();
void motorBParaTras();

void motorAParado();
void motorBParado();

void virarParaDireita();
void virarParaEsquerda();
void irParaFrente();

void girar90horario();
void girar90antihorario();

int leituraDireita();
int leituraEsquerda();

bool pretoDireito();
bool pretoEsquerdo();

void setarSemFiltro();

void desviarDeObstaculo();

bool temObstaculo();

void identificarVerde();


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
