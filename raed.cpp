#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>

using namespace std;


void main()
{
	ifstream infile;

	//infile.open("G:/29project/modle/slurm-299493.out", ios::in);
	//if (!infile.is_open())
	//{
	//	cout << "duqushibai" << endl;
	//	return;
	//}

	//char s[1000];
	//vector<string> v2;

	//while (infile.getline(s,1000))
	//{
	//	v2.push_back(s);
	//	cout << s << endl;
	//}
	//infile.close();

	infile.open("F:/03-project/mexico_wind_turbine_-2.3deg_all-0.50.cnv", ios::in);
	if (!infile.is_open())
	{
		cout << "duqushibai" << endl;
		return;
	}

	char s1[1000];
	vector<string> v1;

	while (infile.getline(s1, 1000))
	{
		v1.push_back(s1);
		//cout << s1 << endl;
	}
	infile.close();


	ofstream ofile;
	//ofile.open("G:/29project/modle/temp.out", ios::out);
	//if (!ofile.is_open())
	//{
	//	cout << "duqushibai" << endl;
	//	return;
	//}

	//for (int i = 0; i < v2.size(); i++)
	//{
	//	ofile << v2[i] << endl;
	//	//Sleep(100);
	//}

	//ofile.close();

	ofile.open("F:\\04-tempcode\\cfdread\\cfdread\\x64\\Release/mexico_wind_turbine_-2.3deg_all-0.50.cnv", ios::out);
	if (!ofile.is_open())
	{
		cout << "duqushibai" << endl;
		return;
	}

	for (int i = 0; i < v1.size(); i++)
	{
		if (!v1[i].empty())
		{	
			ofile << v1[i] << endl;
			cout << v1[i] << endl;
			Sleep(1000);
		}
		
	}

	ofile.close();
}