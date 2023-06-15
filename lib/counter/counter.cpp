#include <Arduino.h>
#include <counter.h>


counter::counter(){
    a=0;
  };

  void counter::setCounter(int inicio){
    a=inicio;
  };
  void counter::inc(){
    a++;
  };
  void counter::dec(){
    a--;
  };

  int counter::getCounter(){
    return (a);
  };