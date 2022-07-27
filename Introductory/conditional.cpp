#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);
    string s;

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    if (n == 1){
        s = "one";
    } else if (n == 2){
        s = "two";
    } else if (n == 3){
        s = "three";
    } else if (n == 4){
        s = "four";
    } else if (n == 5){
        s = "five";
    } else if (n == 6){
        s = "six";
    } else if (n == 7){
        s = "seven";
    } else if (n == 8){
        s = "eight";
    } else if (n == 9){
        s = "nine";
    } else {
        s = "Greater than 9";
    }

    cout << s << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
