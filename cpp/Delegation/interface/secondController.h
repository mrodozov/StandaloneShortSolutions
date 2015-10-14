#ifndef SECOND_CONTROLLER_H
#define SECOND_CONTROLLER_H

#include "reusableView.h"

class secondController : public ViewDelegate {
  
  View * view_;
  
public:
  
  void closeView();
  View * getView() { return this->view_; }
  
  secondController();
  ~secondController();
  
};


#endif 