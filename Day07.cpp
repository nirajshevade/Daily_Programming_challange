#include <iostream>
using namespace std;

int trapWater(int height[], int n) {
    if (n < 3) {
        
        return 0;
    }

    int left_max[n], right_max[n];
    int total_water = 0;

    
    left_max[0] = height[0];
    for (int i = 1; i < n; i++) {
        if (left_max[i-1] > height[i]) {
            left_max[i] = left_max[i-1];
        } else {
            left_max[i] = height[i];
        }
    }

    
    right_max[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--) {
        if (right_max[i+1] > height[i]) {
            right_max[i] = right_max[i+1];
        } else {
            right_max[i] = height[i];
        }
    }

    
    for (int i = 0; i < n; i++) {
        int water_above;
        if (left_max[i] < right_max[i]) {
            water_above = left_max[i];
        } else {
            water_above = right_max[i];
        }

        if (water_above > height[i]) {
            total_water += water_above - height[i];
        }
    }

    return total_water;
}

int main() {
    int n;
    cout << "Enter the number of bars: ";
    cin >> n;

    int height[n];
    cout << "Enter the heights of the bars: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int result = trapWater(height, n);
    cout << "Total water trapped: " << result << endl;

    return 0;
}
