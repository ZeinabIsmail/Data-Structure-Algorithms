/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
   int num_refill=0;
   stops.push_back(dist);
   stops.insert(stops.begin(), 0);
   int n = stops.size();
   int current_refill= 0;
   while ( current_refill < stops.size()){ 
       int last_refill = current_refill;
       while(current_refill< n && stops[current_refill+1] - stops[last_refill]<= tank ){
           current_refill++;
       }
       if (current_refill == last_refill){
           return -1;
       }
       else if (current_refill<n)
       num_refill++;
   }
    return num_refill;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}