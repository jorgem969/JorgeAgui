#include<iostream>
#include<string>

using namespace std;

class Ropa{
	public: 
	string marca;
	string color;
	string talla;
	double precio;
	
	Ropa(string _marca, string _color, string _talla, double _precio) {
		marca = _marca;
		color = _color;
		talla = _talla;
		precio = _precio;
		  
		  cout<<" Se creo el objeto ropa " << marca<< endl;
	}

		~Ropa(){
	cout<<" Se destruyo el objeto ropa " << marca <<endl;
		}
		
		void mostrarInformacion() {
			cout << "Marca: " << marca << endl;
			cout << "Color: " << color << endl;
			cout << "Talla " << talla << endl;
			cout << "precio: " << precio << endl;
	}
	
	void vestir() {
		cout << "La ropa ha sido utilizada. " << endl;
	}
};

int main(){
	Ropa camisa("Loro Piana", "Negro", "M", 599.99);
	Ropa pantalon("Forever 21", "Negro", "M", 49.99);
	Ropa calzoneta("Loro Piana", "Blanco", "M", 199.99);
	Ropa ropainterior("Calvin Klein", "Blanco", "M", 29.99);
	
	camisa.mostrarInformacion();
	cout << endl;
	pantalon.mostrarInformacion();
	cout<< endl;
	calzoneta.mostrarInformacion();
	cout << endl;
	ropainterior.mostrarInformacion();
	cout << endl;
	camisa.vestir();
	cout << endl;
	
	
	return 0;
}