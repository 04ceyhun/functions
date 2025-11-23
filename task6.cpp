// 6. 1-den n-e qeder cüt ededlerin kvadratları cemi
void task6() {
    int n, sum = 0;
    cout << "N daxil edin: ";
    cin >> n;
    for (int i = 2; i <= n; i += 2)
        sum += i * i;
    cout << "Cemi: " << sum << endl;
}