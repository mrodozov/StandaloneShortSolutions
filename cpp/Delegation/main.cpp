#include <iostream>
#include "interface/reusableView.h"
#include "interface/controller.h"
#include "interface/secondController.h"

using namespace std;

int main (int argc,char * argv[]){
  
  Controller * controler = new Controller();
  View * anView = new View();
  anView->setDimensions(15,17);
  
  controler->setView(anView); // try to set the delegate from the view itself    
  //anView->setDelegate(controler); // view is not set but in fact the controller creates the view as its own object so this is not a problem in the general case  
  
  anView->show(); // should with new dimensions
  anView->closeView(); 
  anView->show(); // check dimensions change
  anView->closeView();
  
  secondController * second = new secondController();
  View * pointer = second->getView();
  pointer->setDimensions(5,5);
  pointer->closeView(); // check another implementation
  
   second->getView();
  
  return 0;
}