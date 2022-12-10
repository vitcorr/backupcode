#include "Power.h"

Power::Power(Battery *b){
  id = 1;
  status = false;
  batt = b;
}

void Power::turn_on(){
  status = true;
  // qInfo() <<"Machine Turned On";
  qDebug()  <<"Machine Turned On";
  //display battery level on the graph
  // qInfo() <<"Battery Life: "<<get_battery_life();
  qDebug() <<"Battery Life: "<<batt->get_battery_life();
} //turn on the device

void Power::turn_off(){
  // qInfo() <<"Turning off Machine..";
  qDebug()  <<"Turning off Machine..";
  status = false;
} //turn off the device

//for edi
void Power::soft_off(){
  // qInfo() <<"Performing Soft Off..";
  qDebug() <<"Performing Soft Off..";
  //graph scrolls from 8 to 1
  for(int i = 8; i > 0; i--){
    qDebug()  <<i;
  }
  // qInfo() <<"Session Ended";
  qDebug() <<"Session Ended";
}

bool Power::get_status(){
  return status;
} //get the status
