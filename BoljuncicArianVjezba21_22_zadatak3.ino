unsigned int adc = 612;
unsigned int napon_mV = (adc * 5000UL) / 1023;

void setup() {
  Serial.begin(9600);
  byte postotak = (adc * 100UL) / 1023;
  byte donjiBajt = adc;

  Serial.print("Postotak naponske skale: ");
  Serial.print(postotak);
  Serial.println(" %");
  Serial.print("Donji bajt(DEC): ");
  Serial.println(donjiBajt, DEC);
  Serial.print("Donji bajt(HEX): ");
  Serial.println(donjiBajt, HEX);
  Serial.print("Donji bajt(BIN): ");
  Serial.println(donjiBajt, BIN);

}

void loop() {
  
}
