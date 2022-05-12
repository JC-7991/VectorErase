#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main(){

  std::vector<int> v ;
  int x, i, j; 
  int n; 
  
  std::cin >> n;
  for(i = 0; i < n; i++){
    std::cin >> x; 
    v.push_back(x);
  }
  
  int q1, q2, q3;
  std::cin >> q1;
  std::cin >> q2 >> q3;
  
  v.erase(v.begin() + (q1 - 1));
  v.erase(v.begin() + q2 - 1, v.begin() + q3 - 1);
  
  std::cout << v.size() << "\n";
  
  for(j = 0; j < v.size(); j++){
    std::cout << v.at(j) << " " ;  
  }
    
  return 0;

}