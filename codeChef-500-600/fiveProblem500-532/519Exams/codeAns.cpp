// Exams / 519

/*Key C++ constructs used:

1. while          -> লুপ স্টেটমেন্ট
2. if, else       -> কন্ডিশনাল স্টেটমেন্ট
3. অপারেটর (*, /, >) -> গাণিতিক এবং তুলনা
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X , Y , Z ;
        cin >> X >> Y >> Z ;
        int student = X * Y ;
        
        double result = (1.0 * Z / student) * 100;
        
        if (result > 50) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

/*
কোডের কাজ:

1. T ইনপুট নেওয়া হয়, যা টেস্ট কেসের সংখ্যা।
2. প্রতিটি টেস্ট কেসে X (স্কুল সংখ্যা), Y (প্রতি স্কুলের ছাত্রসংখ্যা), Z (পাস করা ছাত্র) ইনপুট নেওয়া হয়।
3. student = X * Y দিয়ে মোট ছাত্র সংখ্যা বের করা হয়।
4. result = (Z / student) * 100 দিয়ে পাসের শতকরা হার বের করা হয়।
5. যদি result > 50 হয়, আউটপুট "YES", না হলে "NO"।

