// Charlie Orch
#include <iostream>

using namespace std;

double power(double x, int y)
{
  double product;
  int count;

  if (y >= 0)
  {
    product = 1;
    for (count = 1; count <= y; ++count){
      product = product * x;
    }
    return product;
  }
    else{
      return 1/power(x, -y);
    }
}

int main()
{
	cout << "To calculate x^y ..." << endl;

	double x;
	int y;
	cout << "Please enter x: ";
	cin >> x;
	cout << "Please enter y: ";
	cin >> y;

	if(x == 0) {
		if (y > 0)
			cout << 0 << endl;
		else
			cout << "x^y is not defined" <<endl;
	}
	else
		cout << power(x,y) << endl;


	return 0;
}
