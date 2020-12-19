#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <limits>
using namespace std;


/**
* 10進数 v を base進数の文字列へ変換する。
* @param [in] v    10進数の整数
* @param [in] base 変換した 2~36 のN進数の値
* @return base進数へ変換した文字列
*/
template<typename TypeInt>
string Itoa(const TypeInt v, int base)
{
    static const char table[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ret;
    static numeric_limits<TypeInt> t;
    TypeInt n = v;
    if (t.is_signed) {
        if (v < 0) n *= -1;
    }

    while (n >= base) {
        ret += table[n%base];
        n /= base;
    }
    ret += table[n];
    if (t.is_signed) {
        if (v < 0 && base == 10) ret += '-';
    }
    // 文字列の順番を逆にする
    reverse(ret.begin(), ret.end());

    return ret;
}

bool judge(string s){
    bool ans=true;
    for(int64_t i=0;i<s.size();i++){
        if(s.at(i)=='7'){
            ans=false;
            break;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(judge(to_string(i)) && judge(Itoa(i,8))){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}