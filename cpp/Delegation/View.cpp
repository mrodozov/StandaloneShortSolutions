#include "interface/View.h"
#include <iostream>
#include <string>

using namespace std;

void VView::setDelegate ( ViewDelegate* d ) {
  this->vDelegate = d;
}

ViewDelegate* VView::getDelegate() {
  return this->vDelegate;
}

void VView::closeSelf() {
  if (this->getDelegate() != NULL){
    cout << " view calls close on delegate" << endl;
    this->getDelegate()->closeView();
  }
  else {
    cout << "view delegate not set, try set it first"<< endl;
  }
}

void VView::show() {
  BaseView::show();
  cout << "showing view" << endl;
  cout << "##############################################" << endl;
}

VView::VView() {

}

VView::VView ( int height, int lenght ) : BaseView ( height, lenght ) {
  
}

VView::~VView() {

}
