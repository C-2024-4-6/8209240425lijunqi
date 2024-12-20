/*1、输入自然数m和n，
（1）求他们的最大公约数（或称最大公因数）。
 要求输入、输出在主函数中进行，求公约数由函数实现。
（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数)
*/
#include<iostream>
using namespace std;
int gcd(int m, int n)
{
    while (n != 0)
    {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}
int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int m, n;
    cout << "请输入：";
	cin >> m >> n;
    cout << "最大公约数是" << gcd(m, n) << '\n';
    cout << "最小公倍数是" << lcm(m, n);
	return 0;
}