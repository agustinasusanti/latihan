#include <iostream>
using namespace std;

int iteratif (int n, int a, int b, int c){
    a=0, b=1;

    if (n == 1) return b;
    if (n == 0) return a;

    else{
    for(int i=2; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
        }
    return c;
    }
}

int main(){
int n, a, b, c;

cout<<"Masukkan nilai n: ";

cin>>n;
cout<<"\nBilangan fibonacci untuk "<<n<<" adalah ";
cout<< iteratif (n, a, b, c);
return 0;
}
