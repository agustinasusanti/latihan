#include <iostream>
using namespace std;

int rekursif (int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return (rekursif (n-1) + rekursif(n-2));
}
int main(){
    int n;

    cout<<"Masukkan nilai n: ";

    cin>>n;
    cout<<"\nBilangan fibonacci untuk "<<n<<" adalah ";
    cout<< rekursif (n);
return 0;
}
