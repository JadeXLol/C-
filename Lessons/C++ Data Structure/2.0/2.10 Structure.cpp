#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    //declare structure
    struct phone {
        string name;
        string brand;
        int price;
    };

    //declare member
    phone s20_u = {"S20 Ultra", "Samsung", 1400};
    cout << "The " << s20_u.name << " is from " << s20_u.brand << " and costs " << s20_u.price << " USD." << endl;
    cout << "Enter name, brand and price." << endl;

    //declare member method 2
    phone new_phone;
    getline (cin, new_phone.name);
    getline (cin, new_phone.brand);
    cin >> new_phone.price;
    cout << "The " << new_phone.name << " is from " << new_phone.brand << " and costs " << new_phone.price << " USD." << endl;

    //structure array (multiple entries with one name)
    phone iphone_11[3] = { 
        {"iPhone 11", "Apple", 699},
        {"iPhone 11 Pro", "Apple", 999},
        {"iPhone 11 Pro Max", "Apple", 1099}
    };
    int n = sizeof(iphone_11)/sizeof(iphone_11[0]);
    cout << "There are " << n " iPhone 11 models.";

    for (int i = 0; i < n; i++) {
        cout << iphone_11[i].name << " " << iphone_11[i].brand << " " << iphone_11[i].price << endl;
    }

    return 0; 
}