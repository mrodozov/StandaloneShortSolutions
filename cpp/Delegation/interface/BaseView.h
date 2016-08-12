// base view should be independent object with basic view functionalities like default dimensions, display and close capabilities and so on

#ifndef BASE_VIEW_H
#define BASE_VIEW_H

class BaseView {
    
  // some ordinary bullshit
  int _height;
  int _lenght;
  
public:
  
  virtual void show();
  virtual void close();
  void removeFromSuperView();
  
  void setDimensions(int height,int lenght);
  
  int getHeight() { return this->_height; }
  int getLenght() { return this->_lenght; } 
  
  BaseView();
  BaseView(int height,int lenght);
  virtual ~BaseView();
  
};


#endif