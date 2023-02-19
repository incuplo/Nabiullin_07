#include iostream
using namespace std;

void my_func(int , int n, int counter);

int main(){
    setlocale(0, );
    int n, counter = 1; cin  n;
    int arr = new int[n];
    for (int i = 0; i  n; i++){
        cin  arr[i];
    }
    my_func(arr, n, counter);
}

void my_func(int arr, int n, int counter){
    for (int i = 0; i  n; i++){
        if (arr[i]  0){
            counter = arr[i];
        }
    }

    for (int j = 0; j  n; j++){
        if (arr[j]  0){
            arr[j] = j;
            
            break;
        }
    }
}
