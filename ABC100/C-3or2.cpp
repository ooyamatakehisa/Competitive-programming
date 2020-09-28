#include <iostream>
#include <math.h>

using namespace std;



main(){
    int i, j, N, thrTm, num = 0;
    int an[10009];
    bool dvFin = false;
    cin >> N;
    for (i = 0; i < N ; i++){
        cin >> an[i];
    }
    while (true){
        thrTm = 0;
        for (j = 0; j < N; j++){
            if (!dvFin){
                if (an[j] % 2 == 0){
                    an[j] = an[j] / 2;
                    dvFin = true;
                }
                else{
                    thrTm += 1;
                }
            }
            else{
                thrTm += 1;
            }
        }
        if(thrTm == N)break;
        else {
            num += 1;
            dvFin = false;
        }
    }
    cout << num <<endl;
}