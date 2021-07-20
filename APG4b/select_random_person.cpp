#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    vector<string> name_list(3);
    name_list.at(0) = "tsuji";
    name_list.at(1) = "jinkama";
    name_list.at(2) = "sumiya";
    srand(time(NULL));
    cout << name_list.at(rand()%3) << endl;
    return 0;
}