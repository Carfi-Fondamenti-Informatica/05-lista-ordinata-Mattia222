#include <iostream>
using namespace std;

int main() {
   
   int lista[10];
    for(int i=0;i<10;i++){
        cin >> lista[i];
    }
    int a=0;
    cin >> a;

    // Inserire soluzione
    int b=0, c=0;
    for(int i=0;i<10;i++){
        if(a<lista[i]){
            b=lista[i];
            lista[i]=a;
            a=b;

        }else if(lista[i]>=a){

        }
    }


    for(int i=0;i<10;i++){
        cout << lista[i] << " ";
    }
   
   return 0;
}
