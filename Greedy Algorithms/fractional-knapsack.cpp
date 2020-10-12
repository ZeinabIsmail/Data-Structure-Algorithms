#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

double get_optimal_value(double capacity, vector<double> weights, vector<double> values) {
  double value = 0.0;
  map <double, double, greater <double> > fractions;
  for (int i = 0; i<weights.size(); i++){
      fractions.insert(pair<double, double>(values[i]/weights[i], weights[i]));
  }
  while(!fractions.empty() && capacity>0){
      map<double, double>::iterator i = fractions.begin();
      if((*i).second <= capacity){
          capacity = capacity - (*i).second;
          value = value + (*i).first*(*i).second;
          fractions.erase(i);
      }
      else{
         
          value = value + (*i).first*capacity;
          fractions.erase(i);
          capacity = 0 ;
      }
  }
 
  return value;
}

int main() {
  int n;
  double capacity;
  std::cin >> n >> capacity;
  vector<double> values(n);
  vector<double> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}



