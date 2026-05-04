class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        result = []
        for i in range(1, n + 1):
            if i in target:
                result.append("Push")
            else:
                result.append("Push")
                result.append("Pop")
            if i == target[-1]:
                break
        return result
