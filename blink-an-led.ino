// ------------
// Blink an LED
// ------------


int led = D7; // assign D7 as led

void setup() {

  pinMode(led, OUTPUT);
}

void dot()
{
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for half a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                     // wait for a second
}
void dash()
{
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for  a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                     // wait for a second
}

void LetterE() // letter E morse code function
{
  dot();
}
void LetterT() // letter T morse code function
{
  dash();
}
void LetterH() // letter H morse code function
{
    for (int i = 0; i < 4; i++) {
        dot();
    }
}
void LetterA() // letter A morse code function
{
  dot();
  dash();
}
void LetterN() // letter N morse code function
{
  dash();
  dot();
}

void loop() {
  LetterE(); //calls LetterE function
  LetterT(); //calls LetterT function
  LetterH(); //calls LetterH function
  LetterA(); //calls LetterA function
  LetterN(); //calls LetterN function
  delay(5000); // 5 second wait at end of name
}
