#include "Battery.h"

Battery::Battery(int l){
  id = 1;
  life = l;
  state = 1;
}

void Battery::critically_low(){
  //display a single blinking bar
    state = 3;
  qDebug() <<"Replace Battery Immediately";
  //qDebug()  <<"Replace Battery Immediately";
}
void Battery::low_battery(){
  //2 bars blink once
    state = 2;
  qDebug() <<"Recommended to Replace Battery Before Session";
  //qDebug()  <<"Recommended to Replace Battery Before Session";
}
void Battery::ok_battery(){

}

int Battery::battery_depletion(int duration, int intensity, bool connection){

  int x;

  x=life-(duration*intensity*0.1);
  return x;

  if(connection){ //duration in minutes
    x = life - (duration*0.1*intensity);
    if(x<=0){
      // qInfo() <<"Battery not enough for this session";
      qDebug() <<"Battery not enough for this session";
      return x;
    }
    else{
      qDebug() <<"Battery sufficient, Begginning session...";
      //qDebug() <<"Battery sufficient, Begginning session...";
      //check in with edi(sessions class)
      //might need to call this finction after session is done
      //updateBattery(x);
    }
  }

  else{
    // qInfo() <<"No connection";
    qDebug() <<"No connection";

    //7 and 8 blinking
    return x;
  }

  return true;
}

void Battery::updateBattery(int x){
  life = x;

  if(x < 10){
    critically_low();
  }
  else if(x < 50){
    low_battery();
  }
  else{
    ok_battery();
  }
}

int Battery::get_battery_life(){
  return life;
}

int Battery::getState(){
    return state;
}
