#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int int_array[3];
    char char_array[8] = {'Y', 'o', 'u', ' ', 's', 'u', 'c', 'k'};
    string str_array[2] = {"William", "smells"};
    for (int a = 0; a < 3; a++){
       cin >> int_array[a];
    }
    cout << int_array[0] + int_array[1] + int_array[2] << endl;

    for (int a = 0; a < 8; a++){
       cout << char_array[a];
    }
    cout << endl;
    cout << str_array[0] << " " << str_array[1] << endl;

    cout << "size of int " << sizeof(int_array) << endl;
    cout << "array length " << sizeof(int_array)/sizeof(int_array[0]);

    int int_3darray[3][3][3] = {
        {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}},  
        {{9, 10, 11}, {12, 13, 14}, {15, 16, 17}},
        {{18, 19, 20}, {21, 22, 23}, {24, 25, 26}}
        };

    for (int a = 0; a<3; a++){
        for (int b = 0; b<3; b++){
            for (int c = 0; c<3; c++){
                cout << int_3darray[a][b][c] << endl;
            }
        }
    }
    
    int int_2d_array[3][3] = {
        {0,1,2},
        {3,4,5},
        {6,7,8}
    };
    string str_2d_array[3][3] = {
        {"00","01","02"},
        {"10","11","12"},
        {"20","21","22"}
    };
    for (int a = 0; a<3; a++){
        for (int b = 0; b<3; b++){
            cout << int_2d_array[a][b] << endl;
        }
    }

    for (int a = 0; a<3; a++){
        for (int b = 0; b<3; b++){
            cout << str_2d_array[a][b] << endl;
        }
    }

    string str_3d_array[3][3][3] = {
        {{"000","001","002"},    {"010","011","012"},    {"020","021","022"}},
        {{"100","101","102"},    {"110","111","112"},    {"120","121","122"}},
        {{"200","201","202"},    {"210","211","212"},    {"220","221","222"}},
    };
    for (int a = 0; a<3; a++){
        for (int b = 0; b<3; b++){
            for (int c = 0; c<3; c++){
                cout << str_3d_array[a][b][c] << ", ";
            }
        }
        cout << endl;
    }
    return 0; 
}