    #include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    char my_char;
//    cin >> my_char;
//    switch (my_char) {
//        case 'a': 
//            cout << "It is a!" << endl;
//            break;
//        case 'b': 
//            cout << "It's b" << endl;
//            break;
//        default :
//            cout << "It's not a or b." << end
//    }

//    if (my_char == 'a'){
//        cout << "It is a!" <<endl;
//    } else if (my_char == 'b'){
//        cout << "It is b!" <<endl;
//    } else if (my_char == 'c'){
//        cout << "It is c!" <<endl;
//    } else {
//        cout << "It is not a, b or c." << endl;
//    }
//    for (int i = 0; i < 10; i ++){
//        cout << i << endl;
//    }

//    for (int i = 0; i < 10; i +=2){
//        cout << i << endl;
//    }
    char a;
    while (true){   // ((a!='Q') && (a!='q'))
        cin >> a;
        cout << a << endl;

        // if ((a!='Q') && (a!='q'))
        //     break;

        if ((a=='Q') || (a=='q'))
            break;
    }
    return 0; 
}