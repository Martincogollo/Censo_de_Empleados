#include <iostream>
#include <iomanip>
#include<string> 
using namespace std;
int main() {
  string nom;
  char bebe,fuma,contr;
  int numtra,contt=0,contv=0,contm=0,conth=0,may=1,contfinal=0,sumanos=0,contbebe=0,contbebeN=0,contps=0,sumps=0;
  float deve,men=999999999;
  cout<<"\ndigite su nombre: ";
  cin>>nom;
  while((nom!="JAIRO")){
  do{
  cout<<"digite si bebe [S: Sí y N: No] ";
  cin>>bebe;
  }while(!(bebe=='S' ||bebe=='N' ));
  do{
  cout<<"digite si fuma [S: Sí y N: No] ";
  cin>>fuma;
  }while(!(fuma=='S' ||fuma=='N' ));
  do{
  cout<<"digite el número de años de estar trabajando: ";
  cin>>numtra;
  }while(!(numtra>=1 && numtra<=40));
  if (numtra>=1 && numtra<=40){
  sumanos+=numtra;
  }
  if (numtra>may){
  may=numtra;
  }
  do{
  cout<<"digite el salario devengado: ";
  cin>>deve;
  }while(!(deve>=200000 && deve<=5000000));
  if (deve<men){
 men=deve;
  }
  cout<<"\nT: Temporal \nV: Vinculado \nM: Medio tiempo  \nH: Honorarios \ndigite el tipo de contrato : ";
  cin>>contr;
  if (contr=='T')
 contt++;

  
  else if(contr=='V')
 contv++;

  else if(contr=='M')
 contm++;
  
  else if(contr=='H')
 conth++;
  contfinal++;

 if (contr=='T' && (deve>=200000 && deve<=5000000) &&fuma=='S' && bebe=='N'){
 contps++;
 sumps+=contps;

 if (contr=='V' && bebe=='S' )
  contbebe++;

 if (contr=='V' && bebe=='N' )
  contbebeN++;
 }

 cout<<"\ndigite su nombre: ";
  cin>>nom;
  }
 cout<<"\nCantidad de empleados con contrato TEMPORAL: "<<contt<<endl;
 cout<<"Cantidad de empleados con contrato VINCULADO: "<<contv<<endl;
 cout<<"Cantidad de empleados con contrato MEDIO TIEMPO: "<<contm<<endl;
 cout<<"Cantidad de empleados con contrato HONORARIOS: "<<conth<<endl;
 cout<<"Cantidad total de empleados: "<<contfinal<<endl;
 cout<<"\nTotal años que acumulan todos los empleados:"<<sumanos<<endl;
 cout<<"el promedio de años en general: "<<(float)contfinal/sumanos<<endl;
 cout<<"\nPorcentaje de empleados vinculados que beben: "<<(float)contbebe/contfinal*100<<endl;
 cout<<"Porcentaje de empleados vinculados que NO beben: "<<(float)contbebeN/contfinal*100<<endl;
 cout<<"Promedio de salario devengados de empleados que estén con contrato temporal que fume y no beba: "<<(float)contps/sumps<<endl;
 cout<<"\nMayor valor número de años de estar trabajando: "<<may<<endl;
 cout<<"Menor salario devengado: "<<men<<endl;
  return 0;
}