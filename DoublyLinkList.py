class DoublyLinkList(object):
    def __init__(self, value):
        self.value = value
        self.next_node = None
        self.prev_node = None

a = DoublyLinkList(1)

b = DoublyLinkList(2)

c = DoublyLinkList(3)

a.next_node = b

b.prev_node = a

b.next_node = c

c.prev_node = b

print(c.prev_node.value)