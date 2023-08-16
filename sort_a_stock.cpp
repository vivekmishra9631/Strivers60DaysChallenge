#include <bits/stdc++.h> 
void sortedInsert(stack<int> &stack,int x){
	if(stack.empty() ||(!stack.empty()&& stack.top()<x) ){
		stack.push(x);
		return;
	}
	int a=stack.top();
	stack.pop();
	sortedInsert(stack,x);
	stack.push(a);

	
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty()){
		return;
	}
	int a=stack.top();
	stack.pop();
	sortStack(stack);
	sortedInsert(stack,a);




}
