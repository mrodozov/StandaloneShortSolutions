#include "interface/Controller.h"
#include <iostream>

using namespace std;

void Controller::setView(View * view){
  this->aView = view;
  this->getView()->setDelegate(this);
}

void Controller::closeView(){
  
  if (this->getView() != NULL){
    
    this->getView()->close();
    
  }
  else {
    cout << "view not set !" << endl;
  }
}


void Controller::showView(){
  if (this->getView() != NULL){
    this->getView()->show();
  }
  else {
    cout << " View not set, notting to show " << endl;
  }
}

Controller::Controller(){
  
}

Controller::~Controller(){
  
}

Controller::Controller(View * view){ // init with some view
  this->setView(view);
}

