#include <iostream>
using namespace std;

int main()
{
	cout << "BMI kalkulacka" << endl;
	float vaha;
	float vyska;
	float BMI;
	cout << "zadj svoju vysku v metroch" << endl;
	cin >> vyska;
	float vsk;
	vsk = vyska * vyska;
	cout << "zadaj svoju vahu v kilogramoch" << endl;
	cin >> vaha;
	BMI = vaha / vsk;
	
	if (BMI < 18.5)
	{
		cout << "Tvoj BMI : Podvyziva" << endl;
	}
	else if (BMI >= 18.5 && BMI <= 24.99)
	{
		cout << "Tvoj BMI : Normalna hmotnost" << endl;
	}
	else if (BMI >= 25 && BMI <= 29.99)
	{
		cout << "Tvoj BMI : Nadvaha" << endl;
	}
	else if (BMI > 30)
	{
		cout << "Tvoj BMI : Obezita" << endl;
	}






}