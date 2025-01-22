#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, x;
    int a[100000]; // mang dem so luong loai sushi lien tiep
    for (int i = 0; i < 100000; ++i) a[i] = 1; // khoi tao mang a co tat ca ca gia tri la 1
    vector<int> sushi;
    cin >> n;
    for (int i = 0; i < n; ++i){ // nhap mang sushi
        cin >> x;
        sushi.push_back(x);
    }

    int index = 0, len = 0, ans = 0;
    for (int i = 1; i < n; i++) {
        if (sushi[i] == sushi[i - 1]) {
            a[index]++; //neu sushi giong sushi truoc, tang so luong sushi cua loai do len 1 
        } 
        else {
            index++; // neu khong chuyen sang nhom sushi moi
        }
    }

    for (int i = 1; i <= index; i++) {
        if (a[i] == a[i - 1]) { // so luong sushi nhom nay = nhom truoc -> doan hop le co do dai = 2 * a[i]
            len = 2 * a[i];
            ans = max(ans, len);
        }
        else if (a[i] > a[i - 1]) { // so luong sushi nhom nay > nhom truoc -> lay doan truoc do va 1 phan doan nay lam doan hop le do dai 2 * a[i - 1]
            len = 2 * a[i - 1];
            ans = max(ans, len); 
        } 
        else { // so luong sushi nhom nay < nhom truoc -> lay doan hien tai va 1 phan doan truoc do lam doan hop le do dai 2 * a[i]
            len = 2 * a[i];
            ans = max(ans, len);
        }
    }
    cout << ans << endl; // in ra ket qua

    return 0;
}