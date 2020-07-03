#include <Arduino.h>
#include <string.h>
#include <stdio.h>

void setup() {
  Serial.begin(9600);
  delay(500);

  char s[] = "text 123 foobar";
  int a;
  sscanf(s, "%*s %d", &a);

  Serial.println("START");
  Serial.println(a);
  Serial.println("END");
}

void loop() {}
