class Solution {
public:
  bool isPrimeNum(int n)
{
	bool isPrime = true;

	for (int i = 2; i <= n / 2; ++i) 
		if (!(n % i)) 
		{
			isPrime = false;
			break;
		}

	return isPrime;
}

bool isThree(int n) {
	return n != 1 && n != 2 && (int)sqrt(n)*sqrt(n) == n && isPrimeNum(sqrt(n));

}
};