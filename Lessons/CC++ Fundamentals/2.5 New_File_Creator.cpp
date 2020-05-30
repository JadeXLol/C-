#include <bits/stdc++.h>    

using namespace std;
int main() {
    ofstream fout ("new_file.cpp");
    string str = "#include <bits/stdc++.h>\n \n using namespace std; \n int main() { \n \n return 0; \n}";
    fout << str;
    return 0;
}