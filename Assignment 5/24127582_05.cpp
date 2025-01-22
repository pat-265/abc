#include <iostream>

using namespace std;

int emerald(int a, int b){
    if(2 * a <= b) return a; //Neu so kim cuong nhieu hon hoac bang hai lan so que go thi nghia la chung ta co the dung tat ca so que go do de tao duoc toi da so xeng
    if(2 * b <= a) return b; //Neu so que go nhieu hon hoac bang hai lan so kim cuong thi nghia la chung ta co the dung tat ca so kim cuong do de tao duoc toi da cay kiem
    return (a + b) / 3; //Neu khong thi chung ta se dung het so kim cuong va que go de tao ra cay kiem va xeng (vi kiem va xeng duoc tao ra tu 3 que go va 3 kim cuong)
}
int main(){
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        int eme = emerald(a, b); // Goi ham giai bai toan
        cout << eme << endl; // in ra ket qua
    }

    return 0;
}