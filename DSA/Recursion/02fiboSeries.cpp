// Fibonaaci Series 
#include<bits/stdc++.h>
using namespace std;

int fiboSeries(int n) {
    if(n <= 1) return n;
    int val = fiboSeries(n-1) + fiboSeries(n-2);
    return val;
}
int main() {
    int n;
    cout << "Enter the number till you want the fibo series: " << endl;
    cin >> n;
    for(int i = 0; i < n; i++) cout << fiboSeries(i) << " ";
    return 0;
}