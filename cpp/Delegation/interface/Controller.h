#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "View.h"

class Controller : public ViewDelegate {
  
  View * aView;
  
public:
  
  void closeView();
  void setView(View * view);
  View * getView() { return this->aView; }
  void showView();
  
  Controller();
  ~Controller();
  Controller(View * view);
  
};

#endif