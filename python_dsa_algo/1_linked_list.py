class Node:
    def __init__ (self, val):
        self.val = val
        self.next = None
    def createLL(self, l):
        head=Node(l[0])
        curr=head
        for x in l[1:]:
            curr.next=Node(x)
            curr=curr.next
        return head
    def printLL(self, head):
        curr=head
        while curr:
            print(curr.val, end=" -> ")
            curr = curr.next
        print("None")
    def reverseLL(self, head):
        prev,curr=None,head
        while curr:
            next_node=curr.next
            curr.next=prev
            prev=curr
            curr=next_node
        return prev
if __name__=="__main__":
    l=[1,2,3,4,5]
    head=Node(0).createLL(l)
    print("Original Linked List:")
    Node(0).printLL(head)
    
    reversed_head = Node(0).reverseLL(head)
    print("\nReversed Linked List:")
    Node(0).printLL(reversed_head)
