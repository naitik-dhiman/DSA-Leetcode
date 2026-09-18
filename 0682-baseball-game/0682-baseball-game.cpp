class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> record;

        for (int i = 0; i < operations.size(); i++) {

            if (operations[i] == "C") {
                record.pop();
            }

            else if (operations[i] == "D") {
                record.push(record.top() * 2);
            }

            else if (operations[i] == "+") {
                int top1 = record.top();
                record.pop();

                int top2 = record.top();

                record.push(top1);
                record.push(top1 + top2);
            }

            else {
                int num = stoi(operations[i]);
                record.push(num);
            }
        }

        int sum = 0;

        while (!record.empty()) {
            int top = record.top();
            sum += top;
            record.pop();
        }

        return sum;
    }
};