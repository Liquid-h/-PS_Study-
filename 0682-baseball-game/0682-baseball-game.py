class Solution:
    def calPoints(self, operations: List[str]) -> int:
        stack = []
        for func in operations:
            if func == 'C':
                stack.pop()
            elif func == 'D':
                stack.append(stack[-1] * 2)
            elif func == '+':
                stack.append(stack[-1] + stack[-2])
            else:
                stack.append(int(func))
        return sum(stack)