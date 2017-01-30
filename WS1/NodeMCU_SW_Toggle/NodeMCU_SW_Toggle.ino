#define sw1 D4 // Declare all variables

int st_sw1 = 0;
int st_1 = 0;
int last_st_sw1 = 1;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Set pin mode
  pinMode(sw1, INPUT_PULLUP);
}

void loop() {
  st_sw1 = digitalRead(sw1); // Read input port1
  if ((st_sw1 == 0) && (last_st_sw1 == 1)) // Check current status
  {
    st_1 = ~st_1; // Toggle
    digitalWrite(LED_BUILTIN, st_1); // Drive LED1
    delay(250);
  }
  last_st_sw1 = st_sw1; // Update current status
}
