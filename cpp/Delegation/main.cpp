#include <iostream>
#include "interface/Controller.h"
#include "interface/View.h"

using namespace std;

int main (int argc,char * argv[]){
  
  Controller * controler = new Controller();
  VView * av = new VView(10, 15);
  controler->setView(av);
  controler->getView()->show();
  
  // now , once the view is shown every interaction goes first trough it
  
  av->closeSelf();
  controler->getView()->closeSelf();
  controler->getView()->close();
  
  
  
  return 0;
}