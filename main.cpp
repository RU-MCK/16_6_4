#include <iostream>
using namespace std;
enum note {
  DO = 1,
  RE = 2,
  MI = 4,
  FA = 8,
  SOL = 16,
  LA = 32,
  SI = 64
};
void print_note(int n) {
  if (n & DO)
    cout << "DO" << " ";
  if (n & RE)
    cout << "RE" << " ";
  if (n & MI)
    cout << "MI" << " ";
  if (n & FA)
    cout << "FA" << " ";
  if (n & SOL)
    cout << "SOL" << " ";
  if (n & LA)
    cout << "LA" << " ";
  if (n & SI)
    cout << "SI" << " ";
  cout << endl;
}

int main() {
  const int size = 12;
  int melody[size];
  cout << "Input combination: " << endl;
  int combination;
  for (int i = 0; (i < size); ++i) {
    cin >> combination;
    melody[i] = combination;
  }
  for (int i = 0; (i < size); ++i) {
    print_note(melody[i]);
  }

}