#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of coin denominations: ";
    cin >> n;
    
    int coins[n];
    cout << "Enter the coin denominations: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int max_value = amount + 1;
    int dp[amount + 1];
    
    for (int i = 0; i <= amount; i++) {
        dp[i] = max_value;
    }
    
    dp[0] = 0;
    
    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i) {
                dp[i] = (dp[i] < dp[i - coins[j]] + 1) ? dp[i] : (dp[i - coins[j]] + 1);
            }
        }
    }

    if (dp[amount] > amount) {
        cout << -1;
    } else {
        cout << dp[amount];
    }

    return 0;
}
