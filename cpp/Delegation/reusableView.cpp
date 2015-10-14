#include "interface/reusableView.h"
#include <iostream>

using namespace std;

void View::closeView(){
  
  if (getDelegate() != NULL){
    this->getDelegate()->delegate_ = this;
    cout << "  Click the opened view. It delegates and :  " ;
    getDelegate()->closeView();
  }
  else {
    cout << " delegate not set ! i don't know what to do " << endl;
  }
}


View::View(){
  
}

View::~View(){
  
}

View::View(int height,int lenght){
  BaseView(height,lenght); // doesnt work ? why ? TODO - check on stackoverflow
}

