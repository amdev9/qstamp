#include "quicksand.h"
#include <iostream>
#include <cstdlib>

int main(int argc, char** argv){
  if (argc == 1){
    std::cout<<"qs_timestamp generator\nUsage: qs iterations size edgePercentage shift header\n";
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

   // 7 42 100 10 eaL1905NgvXFM2j2cvTcRueCuY5giYne

  std::cout<<result<<std::endl;
  return 0;
}


// {\"shift\":10,
// \"header\":\"eaL1905NgvXFM2j2cvTcRueCuY5giYne\",
// \"edges\":100,
// \"blob\":\"AQBb4754up0oFnI8ApfhA7coB1MU_jyQZwjdbw4esQpplbEepZv5TGBTN4veiKFKZyOdpyUxYbIbMkG2DfM_aKXQp0J-5kqhgrIgHhbA93T4kAd1LRQ1l8TL199xrnyljDj6Q8a4eC-nBzN6oUpkChfzaIylmlMcI500emTpq2-x4tydRjoWgZzvvfpAXuZaGBAEL88bGFII-zZRAtvTFjcUKLagd_hYzCw0OQczdl_sU_JtBwMtpx2tMjgLNroClqA\",
// \"iterations\":7,
// \"size\":42}",
// }
