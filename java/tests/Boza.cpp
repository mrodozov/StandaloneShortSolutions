#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <new>
#include <stdlib.h>

using namespace std;
    
void nested(int nRows,int nElementsInRow,int startingNumber){
  
  for (int i = startingNumber ; i < nRows+startingNumber ; i++ ){
    for (int j = i ; j < nElementsInRow + i ; j++){
      cout << j << " " ;
    }
    cout << endl;
  }
}


    
int main (){
  
  cout << " Enter number of rows " << endl;
  int n_rows = 0;
  cin >> n_rows;
  cout << " Enter total elements in row " << endl;
  int n_elements_in_row = 0;
  cin >> n_elements_in_row ;
  cout << " Enter starting number " << endl;
  int start = 0;
  cin >> start ;
  

  nested(n_rows,n_elements_in_row,start);

}
