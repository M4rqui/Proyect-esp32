// Pines Semáforo 1 (Lado izquierdo)
const int S1_ROJO = 4;
const int S1_AMARILLO = 5;
const int S1_VERDE = 6;

// Pines Semáforo 2 (Lado derecho)
const int S2_ROJO = 1;
const int S2_AMARILLO = 2;
const int S2_VERDE = 20;

void setup() {
  Serial.begin(115200);

  // Configurar los pines de los LEDs como salida
  pinMode(S1_ROJO, OUTPUT);
  pinMode(S1_AMARILLO, OUTPUT);
  pinMode(S1_VERDE, OUTPUT);

  pinMode(S2_ROJO, OUTPUT);
  pinMode(S2_AMARILLO, OUTPUT);
  pinMode(S2_VERDE, OUTPUT);
}

void loop() {
  // FASE 1: Semáforo 1 en VERDE | Semáforo 2 en ROJO
  digitalWrite(S1_ROJO, LOW);
  digitalWrite(S1_AMARILLO, LOW);
  digitalWrite(S1_VERDE, HIGH);

  digitalWrite(S2_ROJO, HIGH);
  digitalWrite(S2_AMARILLO, LOW);
  digitalWrite(S2_VERDE, LOW);

  Serial.println("Semaforo 1: Esta en VERDE | Semaforo 2: Esta en ROJO");
  delay(5000); 

  // FASE 2: Semáforo 1 en AMARILLO | Semáforo 2 en ROJO
  digitalWrite(S1_VERDE, LOW);
  digitalWrite(S1_AMARILLO, HIGH);
  // El S2 se mantiene en ROJO

  Serial.println("Semaforo 1: Esta en AMARILLO | Semaforo 2: Esta en ROJO");
  delay(2000); // 2 segundos

  // FASE 3: Semáforo 1 en ROJO | Semáforo 2 en VERDE
  digitalWrite(S1_AMARILLO, LOW);
  digitalWrite(S1_ROJO, HIGH);

  digitalWrite(S2_ROJO, LOW);
  digitalWrite(S2_VERDE, HIGH);

  Serial.println("Semaforo 1: Esta en ROJO | Semaforo 2: Esta en VERDE");
  delay(5000); // 5 segundos

  // FASE 4: Semáforo 1 en ROJO | Semáforo 2 en AMARILLO
  // El S1 se mantiene en ROJO
  digitalWrite(S2_VERDE, LOW);
  digitalWrite(S2_AMARILLO, HIGH);

  Serial.println("Semaforo 1: Esta en ROJO | Semaforo 2: Esta en AMARILLO");
  delay(2000); 