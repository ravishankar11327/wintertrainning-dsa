#include<iostream>
using namespace std;
int main ()
{
    int age ;
    cout<<" age of person"<<endl;
    cin>> age;
    if(  age >=18){
        cout<< "He/she age is"<<age<<" allowed to vote"<< endl;
    }
    else{
        cout<<"He/she is below 18 not allawed to vote "<<endl;

    }
}