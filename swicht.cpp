//usando switch
#include <iostream>
using namespace std;

int main() {
  
  char variable;
  
  cout<<"Da una variable entre a, b, c, d, f"<<endl;
  cin>>variable;
		 
  switch(variable)
    {
    case 'a':
      cout<<"Exelente"<<endl;
      break;
    case 'b':
      cout<<"Muy bien"<<endl;
      break;
    case 'c':
      cout<<"Bien"<<endl;
      break;
    case 'f':
      cout<<"Intenta de nuevo"<<endl;
      break;
    default:
      cout<<"Opción no valida"<<endl;
    }
  return 0;
}

      
      
      
