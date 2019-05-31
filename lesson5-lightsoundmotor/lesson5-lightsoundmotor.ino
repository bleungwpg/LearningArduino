// TONES  ==========================================
// Start by defining the relationship between
//       note, period, &  frequency.
#define  c     3830    // 261 Hz
#define  d     3400    // 294 Hz
#define  e     3038    // 329 Hz
#define  f     2864    // 349 Hz
#define  g     2550    // 392 Hz
#define  a     2272    // 440 Hz
#define  b     2028    // 493 Hz
// Define a special note, 'R', to represent a rest
#define  r     0



// SETUP SPEAKER ============================================
// Set up speaker on a PWM pin (digital 3)
int speakerOut = 3;
// Do we want debugging on serial out? 1 for yes, 0 for no
int DEBUG = 1;


// SETUP LED ============================================
// Set up LED on a PWM pin (digital 13)
int led1 = 13;



void setup() {
    // led
  pinMode(led1, OUTPUT);

  // speaker
  pinMode(speakerOut, OUTPUT);
  if (DEBUG) {
    Serial.begin(9600); // Set serial out if we want debugging
  }

  // motors
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin (9600);
}

// MELODY and TIMING  =======================================
//  melody[] is an array of notes, accompanied by beats[],
//  which sets each note's relative length (higher #, longer note)
int melody[] = {  e,  e,  f,  g,   g,   f,   e,   d,   c,   c,   d,  e,  e,  d,  d,  r };
int beats[]  = { 32, 32, 32, 32,  32,  32,  32,  32,  32,  32,  32, 32, 32, 32, 32, 128  };
int MAX_COUNT = sizeof(melody) / 2; // Melody length, for looping.

// Set overall tempo
long tempo = 10000;
// Set length of pause between notes
int pause = 1000;
// Loop variable to increase Rest length
int rest_count = 100; //<-BLETCHEROUS HACK; See NOTES

// Initialize core variables
int tone_ = 0;
int beat = 0;
long duration  = 0;

// PLAY TONE  ==============================================
// Pulse the speaker to play a tone for a particular duration
void playTone() {
  long elapsed_time = 0;
  if (tone_ > 0) { // if this isn't a Rest beat, while the tone has
    //  played less long than 'duration', pulse speaker HIGH and LOW
    while (elapsed_time < duration) {

      digitalWrite(speakerOut,HIGH);
      delayMicroseconds(tone_ / 2);

      // DOWN
      digitalWrite(speakerOut, LOW);
      delayMicroseconds(tone_ / 2);

      // Keep track of how long we pulsed
      elapsed_time += (tone_);
    }
  }
  else { // Rest beat; loop times delay
    for (int j = 0; j < rest_count; j++) { // See NOTE on rest_count
      delayMicroseconds(duration);  
    }                                
  }                                
}

// LET THE WILD RUMPUS BEGIN =============================
void loop() {

  // ------- turn on led1 ----------
  // turn on led1
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  // -------------------------------


  // ------- play sound start ------------------------
  // Set up a counter to pull from melody[] and beats[]
  for (int i=0; i<MAX_COUNT; i++) {
    tone_ = melody[i];
    beat = beats[i];

    duration = beat * tempo; // Set up timing

    playTone();
    // A pause between notes...
    delayMicroseconds(pause);

    if (DEBUG) { // If debugging, report loop, tone, beat, and duration
      Serial.print(i);
      Serial.print(":");
      Serial.print(beat);
      Serial.print(" ");    
      Serial.print(tone_);
      Serial.print(" ");
      Serial.println(duration);
    }
    // ------- play sound end ------------------------
  }


  // ---------------------------
  // turn on led1
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  // ---------------------------


    // both wheels going backwards for 1 second
  digitalWrite(10, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  
  
  // both wheels stop for 1 second
  digitalWrite(10, LOW);
  digitalWrite(7, LOW);
  delay(1000);
  
  
  
  // both wheels going forward for 1 second
  digitalWrite(11, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  
  
  // both wheels stop for 1 second
  digitalWrite(11, LOW);
  digitalWrite(6, LOW);
  delay(1000);
  
  
  
  // left wheel going forward for 1 second
  digitalWrite(11, HIGH);
  delay(1000);
  
  
  // left wheel stops for 1 second
  digitalWrite(11, LOW);
  delay(1000);
  
  
  // left wheel going backward for 1 second
  digitalWrite(10, HIGH);
  delay(1000);
  
  
  // left wheel stops for 1 second
  digitalWrite(10, LOW);
  delay(1000);
  
  // right wheel going backward for 1 second
  digitalWrite (7, HIGH);
  delay(1000);
  
  // right wheel stops for 1 second
  digitalWrite(7, LOW);
  delay(1000);
  
  
  // right wheel going forward for 1 second
  digitalWrite (6, HIGH);
  delay(1000);
  
  // right wheel stops for 1 second
  digitalWrite(6, LOW);
  delay(1000);
  
  
  // turn clockwise for 1 second
  digitalWrite(10, HIGH);
  digitalWrite (6, HIGH);
  delay(1000);
  
  // stop for 1 second
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  delay(1000);
  
  
  // turn anticlockwise for 1 second
  digitalWrite(11, HIGH);
  digitalWrite (7, HIGH);
  delay(1000);
  
  // stop for 1 second
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  delay(1000);
}

