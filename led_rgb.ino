// Definição dos pinos do RGB [cite: 101]
#define RGB_AZUL 11 [cite: 102]
#define RGB_VERD 10 [cite: 103]
#define RGB_VERM 9 [cite: 104]

void setup() {
  // Configura os pinos dos LEDs como saída
  pinMode(RGB_AZUL, OUTPUT); [cite: 110]
  pinMode(RGB_VERD, OUTPUT); [cite: 111]
  pinMode(RGB_VERM, OUTPUT); [cite: 114]
}

void loop() {
  // Acende a cor Azul
  digitalWrite(RGB_AZUL, HIGH); [cite: 122, 123]
  delay(1000); [cite: 125]
  digitalWrite(RGB_AZUL, LOW); [cite: 127, 128]

  // Acende a cor Verde
  digitalWrite(RGB_VERD, HIGH); [cite: 130, 131]
  delay(1000); [cite: 133]
  digitalWrite(RGB_VERD, LOW); [cite: 135, 136]

  // Acende a cor Vermelha e começa as misturas
  digitalWrite(RGB_VERM, HIGH); [cite: 138, 139]
  delay(1000); [cite: 141]
  
  digitalWrite(RGB_AZUL, HIGH); [cite: 143, 144]
  delay(1000); [cite: 146]
  digitalWrite(RGB_VERM, LOW); [cite: 148, 150]
  
  digitalWrite(RGB_VERD, HIGH); [cite: 152, 153]
  delay(1000); [cite: 155]
  digitalWrite(RGB_AZUL, LOW); [cite: 157, 159]
  
  digitalWrite(RGB_VERM, HIGH); [cite: 161, 162]
  delay(1000); [cite: 164]
  
  // Apaga tudo para reiniciar o ciclo
  digitalWrite(RGB_VERM, LOW); [cite: 166, 167]
  digitalWrite(RGB_VERD, LOW); [cite: 169, 170]
  delay(1000);
}
