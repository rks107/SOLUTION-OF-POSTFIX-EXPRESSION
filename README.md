# SOLUTION-OF-POSTFIX-EXPRESSION
postfix expression solution


The Postfix notation is used to represent algebraic expressions. 
The expressions written in postfix form are evaluated faster compared to infix notation as parenthesis are not required in postfix. 
We have discussed infix to postfix conversion. In this post, evaluation of postfix expressions is discussed.

Following is algorithm for evaluation postfix expressions.
1) Create a stack to store operands (or values).
2) Scan the given expression and do following for every scanned element.
…..a) If the element is a number, push it into the stack
…..b) If the element is a operator, pop operands for the operator from stack. Evaluate the operator and push the result back to the stack
3) When the expression is ended, the number in the stack is the final answer
