#include "interface/controller.h"
#include <iostream>

using namespace std;

void Controller::setView(View * view){
  this->aView = view;
  view->setDelegate(this);
}

void Controller::closeView(){
  
  if (this->getView() != NULL){
    
    int newHeight = this->getView()->getHeight();
    int newLenght = this->getView()->getLenght();
    this->getView()->setDimensions(newHeight+1,newLenght+1);
    cout << this->getView()->getHeight() << endl;
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

