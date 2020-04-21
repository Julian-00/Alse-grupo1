#include <iostream>
using namespace std;

class punto{
	public:
		float x,y;
		void pide_num(const char mensaje[]){
			cout<<"Ingrese la coordenada x del "<<mensaje<<" punto"<<endl;
			cin>>x;
			cout<<"Ingrese la coordenada y del "<<mensaje<<" punto"<<endl;
			cin>>y;
		}
		void muestra_punto(const char mensaje[]){
			cout<<mensaje<<":("<<x<<","<<y<<")"<<endl;
		}
};

template <class TEST>
inline void swapo(TEST& d, TEST& e)
{
	TEST temp = d;
	d = e;
	e = temp;
}
template <class TEST>
 void pendiente(TEST& punto1, TEST& punto2){
	float m;
	m=(punto2.y-punto1.y)/(punto2.x-punto1.x);
	cout<<"y su respectiva pendiente es "<<m<<endl;
 }
			
int main(){
	punto punto1,punto2;
	punto1.pide_num("primer");
	punto2.pide_num("segundo");
	cout<<"Los punto ingresados son:"<<endl;
	punto1.muestra_punto("P1");
	punto2.muestra_punto("P2");
	pendiente(punto1,punto2);
	swapo(punto1,punto2);
	cout<<"Puntos intercambiados"<<endl;
	punto1.muestra_punto("P1");
	punto2.muestra_punto("P2");
	return 0;
}
	