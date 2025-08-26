//PROBLEM OF SORTING 
//NAME: PRASHANT MISHRA

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};

    sort(arr, arr + 3);
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << a << endl << b << endl << c << endl;

    return 0;
}
