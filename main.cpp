#include <cstdlib>
#include <iostream>

using namespace std;

int faktorial(int n)
{
    if(n==0){
        return 1;
    }else{
        return n*faktorial(n-1);
    }   
}
int main(int argc, char *argv[])
{ int n, hasil;
    cout<<"Masukkan nilai faktorial = ";
    cin>>n;
    hasil = faktorial(n);
    cout<<"Faktorial "<<n<<" = "<<hasil<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
