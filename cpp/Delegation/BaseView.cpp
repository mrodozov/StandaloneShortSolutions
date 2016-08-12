#include <iostream>
#include "interface/BaseView.h"

using namespace std;

BaseView::BaseView(){
  
}

BaseView::BaseView(int height, int lenght){
  this->_height = height;
  this->_lenght = lenght;
}

BaseView::~BaseView(){
  
}

void BaseView::close(){
  cout << " i've been closed " << endl;
}

void BaseView::show(){
  cout << " i've been shown. dimensions - height " << _height << " lenght " << _lenght << endl;
}

void BaseView::setDimensions(int height,int lenght){
  this->_height = height;
  this->_lenght = lenght;
}

void BaseView::removeFromSuperView() {
  this->close();
}

