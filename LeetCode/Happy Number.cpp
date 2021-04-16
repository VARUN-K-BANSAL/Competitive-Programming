class Solution {
public:
    int sum(int n)
    {
        int temp=0;
        while(n)
        {
            int temp1 = n%10;
            temp += temp1*temp1;
            n=n/10;
        }
        return temp;
    }
    bool isHappy(int n) 
    {
        set<int> s;
        while(n!=1)
        {
            n = sum(n);
            if(s.count(n))
                return false;
            s.insert(n);
        }
        return true;
    }
};