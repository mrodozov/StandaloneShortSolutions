#ifndef VIEW_H
#define VIEW_H

#include "BaseView.h"

class ViewDelegate { 
  
  // only methods that view delegates to the controlling object (the receiver) , which the receiver is obligated to implement
  
public:
  
  ViewDelegate * delegate_;
  virtual void closeView() = 0;
  
};


class View : public BaseView {
  
private:
  
  ViewDelegate * vDelegate;
  
protected:
  
public:
  
  void setDelegate(ViewDelegate * d);
  ViewDelegate * getDelegate();
  void closeSelf();
  virtual void show();
  
  View ( int height, int lenght );
  View();
  ~View();
  
};

#endif