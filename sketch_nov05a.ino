#define R 32
#define G 33
#define B 25

void setup()
{
    pinMode(R, OUTPUT);
}

void loop()
{
    int rv = random(255);
    analogWrite(R, rv);
    delay(1000);
}
