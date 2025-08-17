#include<iostream>
using namespace std;

int main()
{
 int feby;
 cout<<"Pengeng pera"<<endl;
 cout<<"Magkano bibigay mo?:";
 cin>>feby;

if(feby <= 20) {
 cout<<endl<<"Too low, taasan mo";
}else if (feby <=50){
 cout<<endl<<"Higher!, mahal bilihin";
}else if (feby <=100){
 cout<<endl<<"Pwede na,todo nabayan?";
}else{
 cout<<endl<<"Yan, yan ang gusto ko";
}

    return 0;
}
