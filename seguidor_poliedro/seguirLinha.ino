void seguirLinhaPreta() {
  if (pretoDireito()) {
    virarParaDireita();
  } else if (pretoEsquerdo()) {
    virarParaEsquerda();
  } else {
    irParaFrente();
  }
}

void desviarDeObstaculo() {
  if (temObstaculo()) {
    girar90antihorario();
    
    irParaFrente();
    delay(100); // Definir depois

    girar90horario();

    irParaFrente();
    delay(100); // Definir depois

    girar90horario();

    irParaFrente();
    delay(100); // Definir depois

    girar90horario();

    irParaFrente();
    delay(100); // Definir depois

    girar90antihorario();
    
  }
}

bool temObstaculo() {
  float distancia = sensor.Ranging(CM);

  if (distancia < 3) {
    return true;
  } else {
    return false;
  }
  
}

void identificarVerde() {
  // Falta implementar
}

