#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>vec, int size){
    cout <<"Printing vector:"
    for (int i=0; i<size; i++){
        cout<<vec[i]<<",";
    }
    cout<<endl;
}

bool isPrime(int number, vector<int>&vec){
    
    bool isPrime=true;
    
    for (int i=2; i<=number/2; i++){
        if (number%i==0){
            isPrime = false;
            vec.push_back(number);
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> vectorForCompositeNumbers;
    int num;
    
    for (;;){
        cin>>num;
        if (num == -1){     //quit if user enters -1
            break;
        }
        if (isPrime(num, vectorForCompositeNumbers)){
            cout <<num<<" is prime"<<endl;
        }
        else{
            cout <<num<<" is not prime"<<endl;
        }
    }
    
    printVector(vectorForCompositeNumbers, vectorForCompositeNumbers.size());
    
    cout <<"Exiting program"<<endl;
    
}
