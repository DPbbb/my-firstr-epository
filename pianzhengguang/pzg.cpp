#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	double x=0;double y=0;int n=0;double pai=3.14159;
	ifstream ifile;
	ofstream ofile;
	ifile.open("c:\\Users\\86157\\Documents\\MATLAB\\fai.txt");
	ofile.open("C:\\Users\\86157\\Documents\\MATLAB\\fai1.txt");
	while(1)
	{
	   ifile>>x;
	   n++;
	   y=x*pai/180;
	   ofile<<y;
	   ofile<<endl;
	   if(ifile.eof()!=0) break;
	}
	ifile.close();
	ofile.close();
	return 0;
}