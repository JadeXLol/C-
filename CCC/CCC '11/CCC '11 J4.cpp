#include <bits/stdc++.h>
 
using namespace std; 
int main() { 
    int input, drillPos[2] = {-1, -5}, moveCounter = 0;
    vector <int> drilledTilesX = {0, 0, 0, 1, 2, 3, 3, 3, 4, 5, 5, 5, 6, 7, 7, 7, 7, 7, 6, 5, 4, 3, 2, 1, 0, -1, -1, -1};
    vector <int> drilledTilesY = {-1, -2, -3, -3, -3, -3, -4, -5, -5, -5, -4, -3, -3, -3, -4, -5, -6, -7, -7, -7, -7, -7, -7, -7, -7, -7, -6, -5};
    char direction;
    while(true){
        cin >> direction;
        cin >> input;
        if(direction == 'q'){
            return 0;
        }
        while(moveCounter < input){
            if(direction == 'd'){
                drillPos[1] -= 1;       
            }
            if(direction == 'u'){
                drillPos[1] += 1;
            }
            else if(direction == 'l'){
                drillPos[0] -= 1;
            }
            else if(direction == 'r'){
                drillPos[0] += 1;
            }
        drilledTilesX.push_back(int(drillPos[0]));
        drilledTilesY.push_back(int(drillPos[1]));
        moveCounter++;
        }


        cout << drillPos[0] << ' ' << int(int(drillPos[1])) << ' ';
        for(int i = 0; i < int(drilledTilesX.size()); i++){
            for(int j = i+1; j < int(drilledTilesX.size()); j++){
                if(drilledTilesX[i] == drilledTilesX[j] && drilledTilesY[i] == drilledTilesY[j]){
                    cout << "DANGER";
                    return 0;
                }
            }
        }

        cout << "safe" << endl;
        moveCounter = 0;
    }

    return 0; 
}