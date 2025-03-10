#include <iostream>
#include <cmath>

using namespace std;

class Electric_Field {

private:
    double *E;

public:
   
    Electric_Field() {
	E = new double[3]; 
        E[0] = 0.0;
        E[1] = 0.0;
        E[2] = 0.0;
}

Electric_Field(double x, double y, double z) {
	E = new double[3]; 
        E[0] = x;
        E[1] = y;
        E[2] = z;
	}

~Electric_Field() {
	delete[]E;
}

double calculateMagnitude() const {
	return sqrt(E[0]*E[0] + E[1]*E[1] + E[2]*E[2]);
    }

    double getX() const { return E[0]; }
    double getY() const { return E[1]; }
    double getZ() const { return E[2]; }

    void setX(double x) { E[0] = x; }
    void setY(double y) { E[1] = y; }
    void setZ(double z) { E[2] = z; }

double calculateInnerProduct() const {
	return E[0]*E[0] + E[1]*E[1] + E[2]*E[2];
    }
};



int main(){
	Electric_Field E_default;
	Electric_Field E_components(1e5, 10.9, 1.7e2);

	cout << "Magnitude of E_default: " << E_default.calculateMagnitude() << endl;
	cout << "Magnitude of E_components: " << E_components.calculateMagnitude() << endl;

	cout << "Inner product of E_components: " << E_components.calculateInnerProduct() << endl;

	return 0;
}
