#include "leap.h"

namespace leap {
	bool is_leap_year (int n) {
    if (n%100==0) {
        if (n%400==0) {
					return true;
				}
        else {
					return false;
				}
    }
    else if (n%4==0) {
			return true;
		}
    else {
			return false;
		}
	}
}
