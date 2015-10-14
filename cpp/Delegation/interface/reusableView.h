#ifndef VIEW_H
#define VIEW_H

#include "BaseView.h"

using namespace std;

class ViewDelegate { 
  
  // only methods that view delegates to the controlling object (the receiver) , which the receiver is obligated to implement
  
public:
  
  ViewDelegate * delegate_;
  virtual void closeView() = 0;
  
};

class View : public ViewDelegate, public BaseView {
  
  
public:
  
  void setDelegate(ViewDelegate * delegate) { this->delegate_ = delegate; } ; // delegating functionality requires an receiver object to be set
  ViewDelegate * getDelegate() { return this->delegate_; }; 
  
  void closeView();
  
  View(int height,int lenght);
  View();
  ~View();
  
};

#endif