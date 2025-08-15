//sqrt(x) PROBLEM
//NAME : PRASHANT MISHRA

class Solution {
public:
    int mySqrt(int x) {
    if (x < 2) return x;
        long y = x;
    while (y * y > x) {
        y = (y + x / y) / 2;
    }
    return (int)y;
    }
};

//I HAVE USED THE NEWTON'S METHOD to do this question.
//THIS ALL WORKS ON GUESSES AND REPEAT THIS FORMULA UNTIL y*y is close to x;
//EASY METHOD TO APPLY. 
//y = (y+x/y)/2
