#include<iostream>
using namespace std;

int fun1(int n)
{
	if (n > 0)
	{
		cout << n << endl;
		fun1(n - 1);
		return n ;
	}
}
int fun2(int m)
{
	if (m > 0)
	{
		fun2(m - 1);
		printf("%d", m);
		return m;
	}
}

int main()
{
	int n, m;
	cout << "Enter N & M respectively" << endl;
	cin >> m >> n;
	cout << "Print before call :" << endl;
	fun1(n);
	cout << "\n\n\nPrint after call :" << endl;
	fun2(m);
}


/*OUTPUT
Enter N & M respectively
4
4

Print before call :
4
3                 <<<----------- Here each value of n is printed brfore self calling so this is in sequence of operation
2
1

Print after call :
1234    <<<<--------------------Here values of M are printed after self calling recursion thus the values are printed while returning, 
                                thus sequence is opposite to the before call recursion
