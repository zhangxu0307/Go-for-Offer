#include <iostream>
#include <vector>
using namespace std;


int isBit(int x, int index){
    return (x>>index)&1;
}

void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
    int size = data.size();
    if(size<2)
        return;
    int res = data[0];
    for(int i = 1; i < size; i++){
        res = res^data[i];
    }
    if(res == 0)
        return;
    int index = 0;
    while((res&1) == 0){
        res = res >> 1;
        index++;
    }
    *num1 = *num2 = 0;
    for(int x : data){
        if(isBit(x,index))
            *num1 ^= x;
        else
            *num2 ^= x;
    }
}



int main() {

    int a[] = {2,4,3,6,3,2,5,5};
    vector<int> v(a,a+8);
    int num1,num2;
    FindNumsAppearOnce(v,&num1, &num2);
    cout<<num1<<" "<<num2<<endl;
}