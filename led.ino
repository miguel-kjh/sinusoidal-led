int   PIN = 9;
float rad;

void setup()
{
  pinMode(PIN, OUTPUT);
  Serial.begin(9600);
  rad = 0.;
}

float sine(){
	return (sin(rad) + 1) * 500;
}

void loop()
{
  float time = sine();
  digitalWrite(PIN, HIGH);
  delay(time);
  digitalWrite(PIN, LOW);
  delay(time);
  Serial.println(time);
  rad += M_PI/10.;
  if(rad > 2*M_PI){
  	rad = 0.;
  }
}