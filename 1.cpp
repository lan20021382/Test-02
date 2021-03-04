#include <iostream>
using namespace std;

int main()
{
    int a[3];
    char b[3];
    for(int i = 1 ; i <= 3;i++) {
        cin >>a[i];
    }
     for(int i = 1 ; i <= 3;i++){
        cout<<a[i]<<" "<<&a[i]<<endl;
     }
     for(int i = 1 ; i <= 3;i++) {
        cin >>b[i];
     }
     for(int i = 1 ; i <= 3;i++) {
        cout<<b[i]<<" "<<&b[i]<<endl;
     }
}
