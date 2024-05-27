#include<iostream>

using namespace std;

class test{
    private:
    int testcode;
    char description[40];
    int nocandidate;
    int centereqd;
    int calcntr(int nocandidate);

    public:
    void schedule(){
    cout << "\nEnter the testcode:";
    cin  >> testcode;

    cout << "\nEnter the no. of candiate:";
    cin  >> nocandidate;

    cout << "\nEnter the description:";
    cin  >> description;

    calcntr(nocandidate);
    }
    void disptest(){
        cout << "\ttestcode: "<<testcode<<endl;
        cout << "\tnocandidate: "<<nocandidate<<endl;
        cout << "\tcentereqd: "<<centereqd<<endl;
        cout << "\tdescription: "<< description<<endl;
        
    }
};
    int test ::calcntr(int nocandidate){
        centereqd=(nocandidate/100+1);
    }
    
int main(){
    class test t1;
    t1.schedule();
    t1.disptest();
    return 0;
}