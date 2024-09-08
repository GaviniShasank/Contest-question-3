#include <bits/stdc++.h>

using namespace std;

#define int long
signed main()

{

    int n = 1e4 + 1;

    vector<int> v(n, 1);

    v[0] = 0;

    v[1] = 0;

    for (int i = 2; i * i <= n; i++)

    {

        if (v[i])

            for (int j = i * i; j < n; j += i)

                v[j] = 0;
    }

    vector<int> primes;

    for (int i = 0; i < n; i++)

        if (v[i])

            primes.push_back(i);

    // primes 1220

    // wind -10 to 10
    int limit = 500000;

    cout << 100 << endl;

    cout << limit << endl;

    for (int i = 1; i <= limit; i++)

    {

        if (i % 4 == 0)

        {

            int in = (rand()) % 1200;

            int random_prime = primes[in];

            int wind = ((rand()) % 20) - 10;

            int target = random_prime + wind;

            if (target < 0)

                target = 0;

            cout << target << " " << wind << endl;
        }

        else

        {

            int wind = ((rand()) % 20) - 10;

            int target = (rand()) % 9998;

            if (target < 0)

                target = 0;

            cout << target << " " << wind << endl;
        }
    }

    return 0;
}
