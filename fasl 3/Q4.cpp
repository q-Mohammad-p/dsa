

BigNumber factorial(int n) {
    if (n < 0 || n > 100) { cout << "Number must be between 1 and 100"; }
    BigNumber result(1);
    for (int i = 2; i <= n; ++i) {
        result = result * i;
    }
    return result;
}
