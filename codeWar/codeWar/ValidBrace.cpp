#include<iostream>
#include<map>
#include<stack>
#include<queue>
using namespace std;

bool valid_bracesl(std::string braces){
	//map<char, int> valid = { {'{',0},{'[',0},{'(',0} };
	queue<int> q1;
	if (braces.size() % 2 == 1) return false;
	for (int i = 0; i < braces.size();i++) {
		if (i < braces.size() / 2) {
			if (braces[i] == '{') {
				q1.push('}');
			}
			if (braces[i] == '[') {
				q1.push(']');
			}
			if (braces[i] == '(') {
				q1.push(')');
			}
		}
		else {
			if (q1.back() == braces[i]) {
				q1.pop();
			}
			else {
				return false;
			}
		}
		//cout << braces[i] << endl;
	}
	if (q1.empty()) return true;
}

bool valid_bracesll(std::string braces) {
	stack<char> q1;
	if (braces.size() % 2 == 1) return false;
	for (int i = 0; i < braces.size(); i++) {
		if ((braces[i] == '{') || (braces[i] =='(') || (braces[i] == '[')) {
			q1.push(braces[i]);
		}
		else {
			if ((q1.top() == '(') && (braces[i] == ')')) {
				q1.pop();
			}else if ((q1.top() == '{') && (braces[i] == '}')) {
				q1.pop();
			}else if ((q1.top() == '[') && (braces[i] == ']')) {
				q1.pop();
			}else {
				return false;
			}
		}
	}
	if (q1.empty()) return true;
	//return false;
}

bool valid_braceslll (std::string braces) {
	stack<char> q1;
	for (char c : braces) {
		switch (c) {
		case '{':
		case '[':
		case '(': q1.push(c); break;
		case '}': if (q1.empty() || q1.top() != '{') return false; q1.pop(); break;
		case ')': if (q1.empty() || q1.top() != '(') return false; q1.pop(); break;
		case ']': if (q1.empty() || q1.top() != '[') return false; q1.pop(); break;
		default: return false;
		}
	}
	return q1.empty();
}

bool valid_braces(std::string braces) {
	stack<char> q;
	map<char, char> pairs = { {'(', ')'}, {'[', ']'}, {'{', '}'}, {'<', '>'} };
	for (auto ch : braces) {
		if (pairs.find(ch) != pairs.end()) {
			q.push(ch);
		}
		else if (!q.empty() && pairs[q.top()] == ch) {
			q.pop();
		}
		else {
			return false;
		}
	}
	return q.empty();
}