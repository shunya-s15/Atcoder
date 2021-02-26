#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int64_t> x(n);
    for(int i=0;i<n;i++){
        int y;
        cin >> y;
        if(y>0){
            x.at(i) = y;
        }else{
            x.at(i) = -y;
        }
    }
    int64_t manhattan=0,yukurido=0,chebishef=0;
    for(int i=0;i<n;i++){
        manhattan += x.at(i);
        yukurido += x.at(i)*x.at(i);
        chebishef = max(chebishef,x.at(i));
    }
    cout << manhattan << endl;
    cout << setprecision(11) << sqrt(yukurido) << endl;
    cout << chebishef << endl;
    return 0; 
}