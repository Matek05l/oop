#include <iostream>
#include <string>
using namespace std;

class trojkat
{
public:

	int dla;
	int dlh;

	trojkat()
	{
		cout << "podaj a: \n";
		cin >> dla;
		cout << "podaj h: \n";
		cin >> dlh;
	}


	void licz()
	{
		cout << "pole wynosi: " << ((dla * dlh) / 2) << endl;
	}

};

int main()
{
	int ileo = 0;
	while (true)
	{
		
		trojkat abc;
		abc.licz();
		ileo++;
		cout << "licznik: " << ileo << endl;
	}

}