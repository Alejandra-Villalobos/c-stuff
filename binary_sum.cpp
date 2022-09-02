#include <iostream>

using namespace std;

void showNum (int* res, int n){
    for(int i = 0; i < n; i++){
        cout << res[i];
    }
}

int main()
{
    int n = 4, m = 5, temp = 0;
    int A[n] = {1,0,1,1};
    int B[n] = {1,1,0,1};
    int result[m];
    
    for(int i = n-1; i > -1; i--){
        if((A[i]+B[i]+temp)==3){
            temp = 1;
            result[i+1] = 1;
        } else if((A[i]+B[i]+temp)==2){
            temp = 1;
            result[i+1] = 0;
        } else {
            result[i+1] = A[i]+B[i]+temp;
            temp = 0;
        };
    }
    result[0] = temp;
    
    showNum(result, n+1);

    return 0;
}
