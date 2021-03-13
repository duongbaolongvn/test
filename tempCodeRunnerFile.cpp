#include <iostream>
using namespace std;
void fun(int n){
    if(n>0){
        cout << n <<"\n";
        fun(n-1);
        
    }
}
int main(){
    int n;
    cin >> n;
    fun(n);
}