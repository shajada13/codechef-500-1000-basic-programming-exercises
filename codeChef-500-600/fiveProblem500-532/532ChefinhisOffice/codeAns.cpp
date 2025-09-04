// Chef in his Office / 532

/*Key C++ constructs used:
1. while          -> লুপ স্টেটমেন্ট
2. if, else       -> কন্ডিশনাল স্টেটমেন্ট
3. অপারেটর (*, +, <) -> গাণিতিক এবং তুলনা
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T ;
    cin >> T ;
    
    while (T--){
        int X , Y ;
        cin >> X >> Y ;
        
        int hours = X * 4 ;
        int totalH = hours + Y ;
        if (Y < X){
            cout << totalH << endl ;
        } else {
            cout << " Y is grater than X " << endl;
        }
    }
    return 0 ;
}

/*
কোডের কাজ:

1. T ইনপুট নেওয়া হয়, যা টেস্ট কেসের সংখ্যা।
2. প্রতিটি টেস্ট কেসে X (সাধারণ কাজের দৈনিক ঘণ্টা), Y (শুক্রবারের ঘণ্টা) ইনপুট নেওয়া হয়।
3. সপ্তাহে সোমবার থেকে বৃহস্পতিবার পর্যন্ত মোট ঘণ্টা hours = X * 4 হিসাব করা হয়।
4. totalH = hours + Y দিয়ে পুরো সপ্তাহের ঘণ্টা হিসাব করা হয়।
5. যদি Y < X হয়, totalH প্রিন্ট করা হয়, নাহলে সতর্কবার্তা প্রিন্ট করা হয়।


