#include<iostream>
using namespace std;

//1->Even
//0-> odd
bool isEven(int a){
    //odd
    if(a&1){
        return 0;

    }
}
int main(){
    int num;
    cin>>num;
    if (isEven(num)) {
        cout<<"Number is Even" <<endl;


    }
    else{
        cout<<"Number is odd" <<endl;
    }

return 0;

}