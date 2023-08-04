class Solution {
public:
    void Reverse(stack<int> &St) {
        queue<int> temp;
        while (!St.empty()) {
            temp.push(St.top());
            St.pop();
        }
        while (!temp.empty()) {
            St.push(temp.front());
            temp.pop();
        }
    }
};
