#include "interface/View.h"
#include <iostream>
#include <string>

using namespace std;

void View::setDelegate ( ViewDelegate* d ) {
  this->vDelegate = d;
}

ViewDelegate* View::getDelegate() {
  return this->vDelegate;
}

void View::closeSelf() {
  if (this->getDelegate() != NULL){
    cout << " view calls close on delegate" << endl;
    this->getDelegate()->closeView();
  }
  else {
    cout << "view delegate not set, try set it first"<< endl;
  }
}

void View::show() {
  BaseView::show();
  cout << "showing view" << endl;
  cout << "##############################################" << endl;
}

View::View() {

}

View::View ( int height, int lenght ) : BaseView ( height, lenght ) {
  
}

View::~View() {

}
