#include<iostream>
#include<string>

using namespace std;

class Zapatos{
	public: 
	string marca;
	string color;
	int talla;
	double precio;
	
	Zapatos(string _marca, string _color, int _talla, double _precio) {
		marca = _marca;
		color = _color;
		talla = _talla;
		precio = _precio;
		  
		  cout<<" Se creo el objeto zapatos " << marca<< endl;
	}
		~Zapatos(){
	cout<<" Se destruyo el objeto zapatos " << marca <<endl;
		}
		
		void mostrarInformacion() {
			cout << "Marca: " << marca << endl;
			cout << "Color: " << color << endl;
			cout << "Talla " << talla << endl;
			cout << "precio: " << precio << endl;
	}
	
	void calzar() {
		cout << "Los Zapatos han sido utilizados. " << endl;
	}
};

int main(){
	Zapatos zapato1("Nike", "Blanco", 42, 59.99);
	Zapatos zapato2("Converse", "Negro", 38, 49.99);
	Zapatos zapato3("Adidas", "Blanco", 40, 49.99);
	Zapatos zapato4("Loro Piana", "Blanco", 42, 499.99);
	Zapatos zapato5("Nike", "Blanco/negro", 39, 59.99);
	
	zapato1.mostrarInformacion();
	cout << endl;
	zapato2.mostrarInformacion();
	cout<< endl;
	zapato3.mostrarInformacion();
	cout << endl;
	zapato4.mostrarInformacion();
	cout << endl;
	zapato5.mostrarInformacion();
	cout << endl;
	zapato1.calzar();
	cout << endl;
	
	return 0;
}

