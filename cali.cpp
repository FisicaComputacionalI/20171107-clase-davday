//programa para calcular calificación
#include <iostream>
using namespace std;

int main() {
  int v;
  float ca;
  int x;
  int t;
  int p;
  int t1=10;
  int p1=10;

  cout<<"Calificación de examen"<<endl;
  cin>>x;

  cout<<"Cuantas tareas entregaste"<<endl;
  cin>>t;

  cout<<"Cuantas participaciones hiciste"<<endl;
  cin>>p;

  if(x<=10)
    {
  if(x<8)
    v=1;
  if (x>=8)
    {
      if((t!=0)&&(p!=0))
	v=1;
      if((t==0)&&(p==0))
	v=2;
      if((t!=0)&&(p==0))
	 v=3;
      if((t==0)&&(p!=0))
	v=4;
    }
    }
  else
    v=0;
  
  switch(v)
    {
    case 1:
      ca=x*0.7+((t/t1)*1.5)+((p/p1)*1.5);
      cout<<"Tu calificación es "<<ca<<endl;
      break;
    case 2:
      ca=x;
      cout<<"Tu calificación es "<<ca<<endl;
      break;
    case 3:
      ca=x*0.85+(t/t1)*1.5;
      cout<<"Tu calificación es "<<ca<<endl;
      break;
    case 4:
      ca=x*0.85+(p/p1)*1.5;
      cout<<"Tu calificación es "<<ca<<endl;
      break;
    default:
      cout<<"Opción no valida"<<endl;
    }
  return 0;
}
      

  
  
