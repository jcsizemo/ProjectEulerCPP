#include <cmath>
#include <set>

int p29() {

    std::set<double> nums;

    for (int a = 2; a <= 100; a++) {

        for (int b = 2; b <= 100; b++) {
            double power = pow(a, b);
            nums.insert(power);
        }

    }

    

    return nums.size();

}