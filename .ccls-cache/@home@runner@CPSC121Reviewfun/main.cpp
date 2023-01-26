#include <iostream>
#include <vector>

using namespace std;

void fillVector(vector<int> &);

int main() {

  vector<int> userNums;
  fillVector(userNums);
  return 0;
}

void fillVector(vector<int> &vec) {
  int num;
  int i;
  for (i = 0; i < 5; i++) {
    cout << "Enter an int: ";
    cin >> num;
    vec.push_back(num);
  }
}