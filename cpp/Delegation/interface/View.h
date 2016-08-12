#ifndef VVIEW_H
#define VVIEW_H

#include "BaseView.h"

class ViewDelegate { 
  
  // only methods that view delegates to the controlling object (the receiver) , which the receiver is obligated to implement
  
public:
  
  ViewDelegate * delegate_;
  virtual void closeView() = 0;
  
};


class VView : public BaseView {
  
private:
  
  ViewDelegate * vDelegate;
  
protected:
  
public:
  
  void setDelegate(ViewDelegate * d);
  ViewDelegate * getDelegate();
  void closeSelf();
  virtual void show();
  
  VView ( int height, int lenght );
  VView();
  ~VView();
  
};

#endif