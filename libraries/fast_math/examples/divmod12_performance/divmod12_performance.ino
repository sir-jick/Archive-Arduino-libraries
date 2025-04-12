//
//    FILE: divmod12_performance.ino
//  AUTHOR: Rob Tillaart
// PURPOSE: divmod12 performance test
//     URL: https://github.com/RobTillaart/fast_math


#include "Arduino.h"
#include "fast_math.h"


uint32_t start, stop;
uint32_t x, d;
uint8_t m;


void setup()
{
  Serial.begin(115200);
  Serial.println();
  Serial.println(__FILE__);
  Serial.print("FASTMATH_LIB_VERSION: ");
  Serial.println(FASTMATH_LIB_VERSION);
  Serial.println();
  delay(1000);

  x = random(2000000000ULL);
  start = micros();
  d = x / 12;
  m = x % 12;
  stop = micros();
  Serial.print("div + mod: ");
  Serial.print("\t");
  Serial.print(stop - start);
  Serial.print("\t");
  Serial.print(x);
  Serial.print("\t");
  Serial.print(d);
  Serial.print("\t");
  Serial.print(m);
  Serial.print("\n");
  delay(100);

  start = micros();
  divmod12(x, &d, &m);
  stop = micros();
  Serial.print("divmod12:  ");
  Serial.print("\t");
  Serial.print(stop - start);
  Serial.print("\t");
  Serial.print(x);
  Serial.print("\t");
  Serial.print(d);
  Serial.print("\t");
  Serial.print(m);
  Serial.print("\n");
  delay(100);

  Serial.println("\nTest 0 .. 1 million (1 minute UNO)");
  start = micros();
  for (uint32_t x = 0; x <= 1000000; x++)
  {
    if (x % 100000 == 0) Serial.println(x);
    divmod12(x, &d, &m);
    if ( (x != d*12 +m) || (m > 11))
    {
      Serial.print(x);
      Serial.print("\t");
      Serial.print(d);
      Serial.print("\t");
      Serial.print(m);
      Serial.print("\n");
    }
  }
  stop = micros();
  Serial.print(stop - start);
  Serial.print("\n");

  Serial.println("done...");
}


void loop()
{
}


//  -- END OF FILE --
