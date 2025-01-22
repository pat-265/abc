#include <iostream>

using namespace std;

int Sol(int n, int k){
    int time = 240 - k; // vi phai ve som k phut nen thoi gian toi da Limak co de giai toan la 240 - k phut
    int cnt = 0; // bien dem so bai toan Limak giai duoc
    int sum = 0; // bien tong thoi gian giai bai toan
    for (int i = 1; i <= n; ++i){
        sum += i * 5; // thoi gian giai bai toan thu i la i * 5 phut
        if (sum > time) break; // neu thoi gian giai bai toan thu i lon hon thoi gian toi da thi dung
        ++cnt; // tang bien dem len 1
    }
    return cnt; // tra ve so bai toan Limak giai duoc
}

int main(){
    int n, k;
    cin >> n >> k;
    int res = Sol(n, k); // Goi ham giai bai toan
    cout << res << endl; // in ra ket qua
    
    return 0;
}