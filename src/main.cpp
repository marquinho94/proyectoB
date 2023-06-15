#include <Arduino.h>
#include <counter.h>
// put function declarations here:
int myFunction(int, int);

class contador {
  private:
  int a;
  public:
  contador (){
    a=0;
  }
  void setContador(int inicio){
    a=inicio;
  }
  void incrementar(){
    a++;
  }
  void decrementar(){
    a--;
  }

  int getContador(){
    return (a);
  }
};

contador manzanas, peras;

counter apple, pear; 

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  Serial.begin(9600);
  manzanas.setContador(10);
  peras.setContador(300);
  apple.setCounter(10);
  pear.setCounter(300);
}

void loop() {
  Serial.println("Hola nene");
  while(true){
  delay(500);
  Serial.println("los contador");
  Serial.println(manzanas.getContador());
  Serial.print(" y ");
  Serial.println(peras.getContador());
  Serial.print("the counters are:");
  Serial.print(apple.getCounter());
  Serial.print("y");
  Serial.println(pear.getCounter());
  delay(500);
  manzanas.incrementar();
  peras.decrementar();
  apple.inc();
  pear.dec();
  }
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}