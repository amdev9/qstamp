#include "quicksand.h"
#include <iostream>
#include <cstdlib>

int main(int argc, char** argv){
  if (argc == 1){
    std::cout<<"";
    std::cout<<" [*] Quicksand generator: example usage \n [-] ./quicksand [iterations] [size] [edges] [shift] [header] \n [-] ./quicksand 10 42 100 18 VcgkAma6zq7wP4TsRGfESjoLQtriNOIB\n";
    return 1;
  }
  if (argc !=6) {
    std::cout<<"Wrong number of parameters."<<std::endl;
    return 1;
  }
  unsigned int iterations = std::atoll(argv[1]);
  unsigned int size = std::atoll(argv[2]);
  int edgePercentage = std::atoi(argv[3]);
  unsigned int shift = std::atoll(argv[4]);

  std::string header{argv[5]};
  auto result = quicksand::generateStamp(iterations, size, edgePercentage, shift, header);


  std::cout<<result<<std::endl;
  return 0;
} 
