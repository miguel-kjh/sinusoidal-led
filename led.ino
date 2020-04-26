const int ledOutput = 9;
float rad = 0.;

void setup() {
  pinMode(ledOutput, OUTPUT);
  Serial.begin(9600);
}

float sine(){
  return (sin(rad) + 1) * 500;
}

void blink(float time, int output) {
  digitalWrite(ledOutput, HIGH);
  delay(time);
  digitalWrite(ledOutput, LOW);
  delay(time);
}

void loop(){
  float time = sine();
  blink(time, ledOutput);
  Serial.println(time);
  rad += M_PI/10.;
  if(rad > 2*M_PI){
  	rad = .0;
  }
}