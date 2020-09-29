#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

// 問題文の形式でvec値を出力
void print_vec(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}

// 変数名を読み取りイコールを読み飛ばす
string read_name(){
    string ans,equal;
    cin >> ans >> equal;
    return ans;
}

// int式の項を1つ読み取る。
// 数字ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
/*int read_int(map<string, int> &var_int){

}*/

// int式全体を読み取って計算する
// var_int : intの変数を保持するmap
int calc_int(map<string, int> &var_int){
    int ans;
    string x,s;
    cin >> x >> s;
    if(isdigit(x.at(0))){
        ans = stoi(x);
    }else{
        ans = var_int.at(x);
    }
    //cout << "ans1: " << ans << endl;
    int key;
    while(s != ";"){
        cin >> x;
        if(isdigit(x.at(0))){
            key = stoi(x);
        }else{
            key = var_int.at(x);
        }
        if(s == "+"){
            ans += key;
        }else{
            ans -= key;
        }
        cin >> s;
    }
    return ans;
}

// vec値を読み取る
// 最初の"["は読み取ってある前提であることに注意
// var_int : intの変数を保持するmap
/*vector<int> read_vec_val(map<string, int> &var_int){

}*/

// vec式の項を1つ読み取る
// vec値ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
// var_vec : vecの変数を保持するmap
/*vector<int> read_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec){

}*/

// vec式全体を読み取って計算する
// var_int : intの変数を保持するmap
// var_vec : vecの変数を保持するmap
vector<int> calc_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec){
    string num;
    string hiraku,tojiru;
    int key = 0;
    vector<int> ans;
    cin >> hiraku;
    if(hiraku == "["){
        cin >> num >> tojiru;
        while(tojiru != "]"){
            if(isdigit(num.at(0))){
                key = stoi(num);
            }else{
                key = var_int.at(num);
            }   
            ans.push_back(key);
            cin >> num >> tojiru;
        }
        if(isdigit(num.at(0))){
            key = stoi(num);
        }else{
            key = var_int.at(num);
        }
        ans.push_back(key);
    }else{
        ans = var_vec.at(hiraku);
        //cout << "ans1: " << ans.at(0) << endl;
    }
    cin >> tojiru;
    while(tojiru != ";"){
        //cout << "tojiru: " << tojiru << endl;
        cin >> hiraku;
        //cout << "hiraku: " << hiraku << endl;
        int i = 0;
        if(tojiru == "+"){
            if(hiraku == "["){
                cin >> num >> tojiru;
                while(tojiru != "]"){
                    if(isdigit(num.at(0))){
                        key = stoi(num);
                    }else{
                        key = var_int.at(num);
                    }   
                    ans.at(i) += key;
                    cin >> num >> tojiru;
                    i++;
                }
                if(isdigit(num.at(0))){
                    key = stoi(num);
                }else{
                    key = var_int.at(num);
                }
                ans.at(i) += key;
            }else{
                while(i<ans.size()){
                    ans.at(i) += var_vec.at(hiraku).at(i);
                    i++;
                }
                //cout << "ans2: " << ans.at(0) << endl;
            }
        }else{
            if(hiraku == "["){
                cin >> num >> tojiru;
                while(tojiru != "]"){
                    if(isdigit(num.at(0))){
                        key = stoi(num);
                    }else{
                        key = var_int.at(num);
                    }   
                    ans.at(i) -= key;
                    cin >> num >> tojiru;
                    i++;
                }
                if(isdigit(num.at(0))){
                    key = stoi(num);
                }else{
                    key = var_int.at(num);
                }
                ans.at(i) -= key;
            }else{
                while(i<ans.size()){
                    ans.at(i) -= var_vec.at(hiraku).at(i);
                    i++;
                }
            }
        }
        cin >> tojiru;
    }
    return ans;
}


int main() {

    // 命令の行数を取得
    int N;
    cin >> N;

    map<string, int> var_int; // intの変数を管理するmap
    map<string, vector<int>> var_vec; // vectorの変数を管理するmap

    // 行数分の処理
    for (int i = 0; i < N; i++) {

        // 命令を受け取る
        string s;
        cin >> s;

        // int命令の処理
        if (s == "int") {
            // 変数名を読み取る
            string name = read_name();
            // 右辺の式を計算して変数に代入
            var_int[name] = calc_int(var_int);
        }

        // vec命令の処理
        if (s == "vec") {
            // 変数名を読み取る
            string name = read_name();
            // 右辺の式を計算して変数に代入
            var_vec[name] = calc_vec(var_int, var_vec);
        }

        // print_int命令の処理
        if (s == "print_int") {
        // 式を計算して出力
        cout << calc_int(var_int) << endl;
        }

        // print_vec命令の処理
        if (s == "print_vec") {
        // 式を計算して出力
        print_vec(calc_vec(var_int, var_vec));
        }
    }
}
/*
9
int d = 9 + 1 + 2 - 3 + 1 ;
int x = d - 3 - 2 + 1 + d ;
int k = x - d + d + x - x ;
vec c = [ d , x , k , 1 , x ] ;
vec u = [ 8 , 9 ] ;
vec n = [ 1 , 2 , 3 , 4 , 5 ] ;
vec s = [ 6 , 7 ] ;
print_vec u + s + u + s - u ;
print_int x + k + k - d + x ;
*/
/*
5
vec u = [ 8 , 9 ] ;
vec s = [ 6 , 7 ] ;
print_vec u ;
print_vec s ;
print_vec u + s + u + s - u ;
*/