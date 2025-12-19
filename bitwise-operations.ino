/*
  Bitwise Operations Example for Arduino

  Bu örnek Arduino içerisinde kullanılan tüm temel bitwise işlemleri
  göstermektedir. Sonuçlar Serial Monitor üzerinden gözlemlenebilir.

  Kullanılan işlemler:
  - AND (&)
  - OR (|)
  - XOR (^)
  - NOT (~)
  - Left Shift (<<)
  - Right Shift (>>)
  - Bit okuma
  - Bit set etme
  - Bit temizleme
  - Bit toggle etme
*/

byte a = 0b00101101;  // 45
byte b = 0b00011100;  // 28

void setup() {
  Serial.begin(9600);
  delay(1000);

  Serial.println("=== BITWISE ISLEMLERI ORNEGI ===");

  // AND
  Serial.print("AND (&) sonucu: ");
  Serial.println(a & b, BIN);

  // OR
  Serial.print("OR (|) sonucu: ");
  Serial.println(a | b, BIN);

  // XOR
  Serial.print("XOR (^) sonucu: ");
  Serial.println(a ^ b, BIN);

  // NOT
  Serial.print("NOT (~a) sonucu: ");
  Serial.println(~a, BIN);

  // Left Shift
  Serial.print("Left Shift (a << 1): ");
  Serial.println(a << 1, BIN);

  // Right Shift
  Serial.print("Right Shift (a >> 1): ");
  Serial.println(a >> 1, BIN);

  Serial.println("------ BIT MANIPULASYONLARI ------");

  byte value = 0b00001010; // 10

  // Bit okuma (3. bit)
  Serial.print("3. bit durumu: ");
  Serial.println(bitRead(value, 3));

  // Bit set etme (1. bit)
  bitSet(value, 1);
  Serial.print("1. bit set edildikten sonra: ");
  Serial.println(value, BIN);

  // Bit temizleme (3. bit)
  bitClear(value, 3);
  Serial.print("3. bit temizlendikten sonra: ");
  Serial.println(value, BIN);

  // Bit toggle (2. bit)
  bitWrite(value, 2, !bitRead(value, 2));
  Serial.print("2. bit toggle sonrasi: ");
  Serial.println(value, BIN);

  Serial.println("=== ISLEMLER TAMAMLANDI ===");
}

void loop() {
  // Loop bos birakildi
}
