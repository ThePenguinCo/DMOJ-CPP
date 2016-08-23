#include "stdafx.h"
#include <bits/stdc++.h>

using namespace std;

int mx, my, x, y, a=1,b=1;

int main() {
	cin.sync_with_stdio(0);cin.tie(0);
	cin >> mx >> my >> x >> y;
	while (a != 0 && b != 0) {
		cout << x << " " << y << "\n";
		cin >> a >> b;
		if (x + a > mx) { x = mx; }
		else if (x + a < 0) { x = 0; }
		else { x += a; }
		if (y + b > my) { y = my; }
		else if (x + b < 0) { y = 0; }
		else { y += b; }
	}
}