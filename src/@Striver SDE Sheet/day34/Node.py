
class Node:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next
        self.tail = self

    def insert(self, val):        
        newNode = Node(val)
        self.tail.next = newNode
        self.tail = self.tail.next

    def print(self):
        head = self
        while head:
            print(head.val, end=" ")
            head = head.next


def main():
    head = Node(3)
    head.insert(5)
    head.insert(6)
    head.insert(9)
    head.insert(11)
    head.insert(17)
    head.insert(14)
    head.print()
    temp1, temp2 = head, head

    while temp2.next:
        if temp2.val == 9:
            temp1 = temp2
        temp2 = temp2.next 
    print()
    print(temp1.val, temp2.val)

if __name__ == "__main__":
    main()



