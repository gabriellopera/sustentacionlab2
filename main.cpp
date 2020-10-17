#include <iostream>

using namespace std;
void cadena(char , char , int , int );
int main()
{
    int n1=0,n2=0;
    cout<< "Ingrese tamanio de la cadena A: ";
    cin>>n1;
    cout<< "Ingrese tamanio de la cadena B: ";
    cin>>n2;
    char A[n1], B[n2];
    cout<< "Ingrese la cadena A: ";
    cin>>A;
    cout<< "Ingrese la cadena B: ";
    cin>>B;//prueba

    int cont=1, sum=0;
    for(int i=0;i<=n1;i++){
        for(int j=0;A[j]!='\0';j++){
            if(A[i]==B[j]){
                if(A[i+cont]==B[j]){
                    sum+=1;
                    cont+=1;

                }

            }
        }
    }
    cout<<sum<<endl;

    return 0;
}

