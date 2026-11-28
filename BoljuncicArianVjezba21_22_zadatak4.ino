char kuciste_regulatora = 'T';
bool status_termicke_zastite = false;
unsigned int ulazni_napon_mV = 12500;
unsigned int izlazni_napon_mV = 5000;
unsigned int struja_trosila_mA = 450;
unsigned long vrijeme_rada_s = 86400;

void setup() {
Serial.begin(9600);

float U_pad = (ulazni_napon_mV - izlazni_napon_mV) / 1000.0;
float P_dis = U_pad * (struja_trosila_mA / 1000.0);
float E_toplina = P_dis * vrijeme_rada_s;

byte ukupno = sizeof(kuciste_regulatora) +
              sizeof(status_termicke_zastite) +
              sizeof(ulazni_napon_mV) +
              sizeof(izlazni_napon_mV) +
              sizeof(struja_trosila_mA) +
              sizeof(vrijeme_rada_s) +
              sizeof(U_pad) +
              sizeof(P_dis) +
              sizeof(E_toplina);


Serial.print("Oznaka kucista: ");
Serial.println(kuciste_regulatora);

Serial.print("Status termicke zastite: ");
Serial.println(status_termicke_zastite ? "ukljucena" : "iskljucena");

Serial.print("Pad napona: ");
Serial.print(U_pad);
Serial.println(" V");

Serial.print("Disipirana snaga: ");
Serial.print(P_dis);
Serial.println(" W");

Serial.print("Ukupno oslobođena toplinska energija: ");
Serial.print(E_toplina);
Serial.println(" J");

Serial.print("Ukupno zauzece SRAM-a: ");
Serial.print(ukupno);
Serial.println(" bajtova od 2048 B");

}

void loop() {

}
