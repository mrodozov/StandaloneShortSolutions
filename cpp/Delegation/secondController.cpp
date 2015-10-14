#include "interface/secondController.h"
#include <iostream>

using namespace std;

void secondController::closeView(){
  
  cout << " removing from another controller " << endl;
  if (this->getView() != NULL){
    this->getView()->close();
  }
  
}

secondController::secondController(){
  view_ = new View();
  this->view_->delegate_ = this;
}

secondController::~secondController(){
  
}