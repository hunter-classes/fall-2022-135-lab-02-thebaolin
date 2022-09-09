#include <iostream>

int main() {
  int myData[10];
  int index,value;

  //initializes all indices in myData to be one
  for(int i=0; i<=9; i++)
    myData[i] = 1;

  
  //does these action while index is in range
  do{

    for(int i=0; i<=9; i++){
      std::cout<<myData[i] << " ";
    }
    std::cout<<"\nInput Index: ";
    std::cin>> index;
    std::cout<<"\nInput Value: ";
    std::cin>> value;

    if(index >= 0 && index <=9){
      myData[index] = value;
    }

    std::cout<<"\n";
      
  }while(index >= 0 && index <=9);

  std::cout<<"Index Out of Range. Exit\n";
  
}