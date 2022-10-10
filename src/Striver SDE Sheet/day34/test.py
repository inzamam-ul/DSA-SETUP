
class Node:
    def __init__(self, x, next=None, random=None):
        self.val = int(x)
        self.next = next
        self.random = random

class Solution(object):
    
    
    def copyRandomList(self, head):
        cpHead = Node(0)
        cpTail = cpHead
        
        temp = head
        while temp:
            cpTail.next = Node(temp.val)
            cpTail = cpTail.next
            temp = temp.next
            

        oldToNew = {}
        cpNode = cpHead.next
        oriNode = head
        
        while oriNode:
            oldToNew[oriNode] = cpNode
            cpNode = cpNode.next
            oriNode = oriNode.next
        
        cpNode = cpHead.next
        oriNode = head
        while oriNode:
            cpNode.random = oldToNew[oriNode.random]
            cpNode = cpNode.next
            oriNode = oriNode.next
        return cpHead
        
        
obj = Solution()

node1 = Node(1)
node2 = Node(2)
node3 = Node(3)
node4 = Node(4)
node5 = Node(5)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5
node5.next = None

node1.random = node4
node2.random = node1
node3.random = node5
node4.random = node2
node5.random = node3

newHead = obj.copyRandomList(node1)


while newHead: 
    print(newHead.val)
    newHead = newHead.next


print(10%5)