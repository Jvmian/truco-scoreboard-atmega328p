#define unidade 13
#define dezena 12
#define ujog2 11
#define djog2 10
#define ujog1 9
#define djog1 8
#define a 0
#define b 1
#define c 2
#define d 3
#define e 4
#define f 5 
#define g 6
#define tipo 7
#define jog1 14 
#define inc 15
#define jog2 16
#define subJog1 17
#define subJog2 18
#define resetJogo 19

int pontosRodada;
int pontosJog1 = 0;
int pontosJog2 = 0;
bool partidaAtiva = true;
int modoJogo;
bool vitoriaJog1 = false;
bool vitoriaJog2 = false;

void setup() {
  pinMode(tipo, INPUT);
  modoJogo = digitalRead(tipo) ? 1 : 0;
  pontosRodada = modoJogo == 1 ? 1 : 2;

  pinMode(unidade, OUTPUT);
  pinMode(dezena, OUTPUT);
  pinMode(ujog1, OUTPUT);
  pinMode(djog1, OUTPUT);
  pinMode(ujog2, OUTPUT);
  pinMode(djog2, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(inc, INPUT_PULLUP);
  pinMode(jog1, INPUT_PULLUP);
  pinMode(jog2, INPUT_PULLUP);
  pinMode(subJog1, INPUT_PULLUP);
  pinMode(subJog2, INPUT_PULLUP);
  pinMode(resetJogo, INPUT_PULLUP);
}

void loop() {
  if(pontosJog1 == 0 && pontosJog2 == 0) {
    int novoModo = digitalRead(tipo) ? 1 : 0;
    if(novoModo != modoJogo) {
      modoJogo = novoModo;
      pontosRodada = modoJogo == 1 ? 1 : 2;
    }
  }
  
  if (partidaAtiva) {
    if (digitalRead(inc) == HIGH) {
      if (modoJogo == 1) {
        switch (pontosRodada) {
          case 1: pontosRodada = 3; break;
          case 3: pontosRodada = 6; break;
          case 6: pontosRodada = 9; break;
          case 9: pontosRodada = 12; break;
          case 12: pontosRodada = 1; break;
        }
      } else {
        switch (pontosRodada) {
          case 2: pontosRodada = 4; break;
          case 4: pontosRodada = 6; break;
          case 6: pontosRodada = 8; break;
          case 8: pontosRodada = 10; break;
          case 10: pontosRodada = 12; break;
          case 12: pontosRodada = 2; break;
        }
      }
      delay(300);
    }

    if (digitalRead(jog1) == HIGH) {
      pontosJog1 += pontosRodada;
      pontosRodada = modoJogo == 1 ? 1 : 2;
      delay(300);
    }

    if (digitalRead(jog2) == HIGH) {
      pontosJog2 += pontosRodada;
      pontosRodada = modoJogo == 1 ? 1 : 2;
      delay(300);
    }

    if (digitalRead(subJog1) == HIGH) {
      pontosJog1 = max(0, pontosJog1 - pontosRodada);
      pontosRodada = modoJogo == 1 ? 1 : 2;
      delay(300);
    }

    if (digitalRead(subJog2) == HIGH) {
      pontosJog2 = max(0, pontosJog2 - pontosRodada);
      pontosRodada = modoJogo == 1 ? 1 : 2;
      delay(300);
    }

    if (pontosJog1 >= 12) {
      partidaAtiva = false;
      vitoriaJog1 = true;
      pontosJog1 = 12; // Garante que mostra exatamente 12
    }
    if (pontosJog2 >= 12) {
      partidaAtiva = false;
      vitoriaJog2 = true;
      pontosJog2 = 12; // Garante que mostra exatamente 12
    }

    atualizarDisplay();
  } else {
    // Modo vitória - mostra apenas o placar do vencedor fixo
    if (vitoriaJog1) {
      mostrarNumero(djog1, 1); // Mostra 1 na dezena do jogador 1
      mostrarNumero(ujog1, 2); // Mostra 2 na unidade do jogador 1
    } else if (vitoriaJog2) {
      mostrarNumero(djog2, 1); // Mostra 1 na dezena do jogador 2
      mostrarNumero(ujog2, 2); // Mostra 2 na unidade do jogador 2
    }
    delay(1); // Pequeno delay para estabilidade do display
  }

  if (digitalRead(resetJogo) == HIGH) {
    resetarPlacar();
    delay(300);
  }
}

void resetarPlacar() {
  pontosJog1 = 0;
  pontosJog2 = 0;
  pontosRodada = modoJogo == 1 ? 1 : 2;
  partidaAtiva = true;
  vitoriaJog1 = false;
  vitoriaJog2 = false;
}

void atualizarDisplay() {
  int dezenaRodada = pontosRodada / 10;
  int unidadeRodada = pontosRodada % 10;
  mostrarNumero(dezena, dezenaRodada);
  mostrarNumero(unidade, unidadeRodada);

  int dezenaJog1 = pontosJog1 / 10;
  int unidadeJog1 = pontosJog1 % 10;
  mostrarNumero(djog1, dezenaJog1);
  mostrarNumero(ujog1, unidadeJog1);

  int dezenaJog2 = pontosJog2 / 10;
  int unidadeJog2 = pontosJog2 % 10;
  mostrarNumero(djog2, dezenaJog2);
  mostrarNumero(ujog2, unidadeJog2);
}

void mostrarNumero(int displayPin, int numero) {
  digitalWrite(unidade, LOW);
  digitalWrite(dezena, LOW);
  digitalWrite(ujog1, LOW);
  digitalWrite(djog1, LOW);
  digitalWrite(ujog2, LOW);
  digitalWrite(djog2, LOW);
  
  byte digitos[10][7] = {
    {1,1,1,1,1,1,0}, {0,1,1,0,0,0,0}, {1,1,0,1,1,0,1}, {1,1,1,1,0,0,1},
    {0,1,1,0,0,1,1}, {1,0,1,1,0,1,1}, {1,0,1,1,1,1,1}, {1,1,1,0,0,0,0},
    {1,1,1,1,1,1,1}, {1,1,1,1,0,1,1}
  };
  
  digitalWrite(a, digitos[numero][0]);
  digitalWrite(b, digitos[numero][1]);
  digitalWrite(c, digitos[numero][2]);
  digitalWrite(d, digitos[numero][3]);
  digitalWrite(e, digitos[numero][4]);
  digitalWrite(f, digitos[numero][5]);
  digitalWrite(g, digitos[numero][6]);
  digitalWrite(displayPin, HIGH);
  delay(1);
}

