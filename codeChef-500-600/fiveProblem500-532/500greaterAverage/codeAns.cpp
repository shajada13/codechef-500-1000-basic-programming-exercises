// Greater Average / 500
/*
Key C++ constructs used:

1. if, else       -> কন্ডিশনাল স্টেটমেন্ট
2. while          -> লুপ স্টেটমেন্ট
3. অপারেটর (+, /, >) -> অরিথমেটিক ও তুলনা
*/


#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while(T--) {
        float A, B, C;
        cin >> A >> B >>  C ;

        float  ans = (A + B) / 2;
        if (ans > C) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


/*
কোডের কাজ:

1. প্রথমে T মান ইনপুট নেয়া হয়, যা টেস্ট কেসের সংখ্যা।
2. প্রতিটি টেস্ট কেসে তিনটি সংখ্যা (A, B, C) ইনপুট নেয়া হয়।
3. isGreaterAverage ফাংশন ব্যবহার করে A এবং B এর গড় C এর চেয়ে বড় কিনা চেক করা হয়।
4. যদি বড় হয় "YES" প্রিন্ট হয়, নাহলে "NO"।
*/


