     int a, b, *c;
 a = 7;
 b = 4;
 c = &a;
 a = *c - a;
 *c = *c + 4;
 a = b + a;
 c = &b;
 a = a - b;
 *c = b + a;
 *c = *c - 1;
 a = a * 1;
 a = b - *c;
 a = a - *c;
 cout << a << endl;
 cout << b << endl;
 cout << *c << endl;
 