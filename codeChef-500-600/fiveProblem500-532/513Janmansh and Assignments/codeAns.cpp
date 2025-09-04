// Janmansh and Assignments / 513
/*Key C++ constructs used:

1. while          -> লুপ স্টেটমেন্ট
2. if, else       -> কন্ডিশনাল স্টেটমেন্ট
3. অপারেটর (-, >=) -> গাণিতিক এবং তুলনা
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X ;
        cin >> X ;
        int ans = 10 - X ;
        if (ans >= 3){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }
}

/*
কোডের কাজ:

1. প্রথমে T ইনপুট নেওয়া হয়, যা টেস্ট কেসের সংখ্যা।
2. প্রতিটি টেস্ট কেসে X ইনপুট নেওয়া হয় (অ্যাসাইনমেন্ট দেওয়া পেজ সংখ্যা)।
3. ans = 10 - X দিয়ে বের করা হয় কতটি পেজ বাকি আছে।
4. যদি ans >= 3 হয়, আউটপুট "Yes", অন্যথায় "No"।

