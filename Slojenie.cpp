#include <iostream>
using namespace std;

int main() {
  int n, m;
  cout << "Введите размер массива: " << endl;
  cin >> n >> m;
  cout << endl;
  int a[n][m], b[n][m], c[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  cout << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> b[i][j];
    }
  }
  cout << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      c[i][j] = a[i][j] + b[i][j];
      cout << c[i][j] << " ";
    }
    cout << endl;
  }
}
