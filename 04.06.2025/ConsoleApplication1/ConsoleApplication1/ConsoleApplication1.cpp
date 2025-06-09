#include <iostream>
#include <cstring>
#include <stack>
#include <vector>
#include <random>
#include <ctime> 
#include <queue>



using namespace std;



bool is_digit(char str) {

    vector<char> numerals = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };
    for (char i : numerals) {
        if (i == str) {
            return true;
        }
    }
    return false;

}

bool is_operator(char str) {

    vector<char> numerals = { '+', '-', '*', '/'};
    for (char i : numerals) {
        if (i == str) {
            return true;
        }
    }
    return false;

}


int oper_priority(char op) {
    if ((op == '+') or (op == '-')) {
        return 1;
    }
    if ((op == '*') or (op == '/')) {
        return 2;
    }

}


int main()
{
    queue <string> answer;
    stack <char> operators;
 
    string token;

    string num;

    cin >> token;

     
    for (int i = 0; i < token.size(); i++) {
        if (is_digit(token[i])) {
            num += token[i];
        }
        else if (num != "") {
            answer.push(num);
            num = "";

        }
        if (is_operator(token[i])) {
            if (operators.empty()) {
                operators.push(token[i]);
            }
            else {
                if (oper_priority(operators.top()) > oper_priority(oper_priority(token[i]))) {
                    while (!operators.empty()) {
                        answer.push({ operators.top() });
                        operators.pop();
                    }
                    operators.push(token[i]);
                }
                if (oper_priority(operators.top()) <= oper_priority(oper_priority(token[i]))) {
                    operators.push(token[i]);
                }
            }
        }
    }

    while (!operators.empty()) {
        answer.push({ operators.top() });
        operators.pop();
    }
    while (!operators.empty()) {
        cout << answer.front();
        // еще что-то
    }


  //  random_device rd;
  //  mt19937 g(rd());

  //  vector<int> start = { 0, 1, 2 };

  //  shuffle(start.begin(), start.end(), g);
  // 
  //  stack<int> t0;
  //  stack<int> t1;
  //  stack<int> t2;

  //  t2.push(start.back());
  //  start.pop_back();
  //  t2.push(start.back());
  //  start.pop_back();
  //  t2.push(start.back());
  ///* 
  //  cout << t2.top();
  //  t2.pop();
  //  cout << t2.top();
  //  t2.pop();
  //  cout << t2.top();*/



  //  string token = "";

  //  while (token != "end") {

  //      cin >> token;
  //      
  //      if (token == "0R") {
  //          t1.push(t0.top());
  //          t1.pop();
  //      }
  //      if (token == "1R") {
  //          t2.push(t1.top());
  //          t1.pop();
  //      }
  //    
  //      if (token == "1L") {
  //          t0.push(t1.top());
  //          t1.pop();
  //      }
  //    
  //      if (token == "2L") {
  //          t1.push(t2.top());
  //          t2.pop();
  //      }
  //      else {
  //          cout << "incorrect word";
  //      }
  //    
  //  }


    return 0;
}
