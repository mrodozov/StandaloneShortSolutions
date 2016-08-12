#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "View.h"

class Controller : public ViewDelegate {
  
  VView * aView;
  
public:
  
  void closeView();
  void setView(VView * view);
  VView * getView() { return this->aView; }
  void showView();
  
  Controller();
  ~Controller();
  Controller(VView * view);
  
};

#endif