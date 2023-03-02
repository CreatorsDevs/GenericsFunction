#include <iostream>
using namespace std;

template <typename T>
T SumOfScores(T x, T y){
  return x + y;
}


int main() {
  int n1;
  int n2;
  float n3;
  float n4;
  
  cout << "\nEnter the first int score: ";
  cin >> n1;

  cout << "Enter the second int score: ";
  cin >> n2;
  
  cout << "Sum of int scores is: " << SumOfScores<int>(n1, n2) << endl;

  cout << "\nEnter the first float score: ";
  cin >> n3;

  cout << "Enter the second float score: ";
  cin >> n4;
  
  cout << "Sum of float scores is: " << SumOfScores<float>(n3, n4) << endl;
  
  return 0;
}