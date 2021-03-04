#include <iostream>
using namespace std;
int gt(int n){
    cout << "n = " << n << " at " << &n << endl;
    if(n == 1) return 1;
    else return n*gt(n-1);
}
int main()
{
  int n;
  cin >> n;

  cout<<gt(n);

}
//mình thấy ô nhớ chưa 1 byte dữ liệu
