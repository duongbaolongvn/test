#include <iostream>
using namespace std;
void fun(int n){
    if(n>0){
        
        fun(n-1);
        cout << n <<"\n";fsdf
    }
}
int main(){
    int n;
    cin >> n;
    fun(n);
}