class Queue(object):
    def __init__(self):
        self.items = []
    def isEmpty(self):
        return self.items == []

    def enQueue(self, item):
        self.items.insert(0,item)
        print(self.items)

    def deQueue(self):
        self.items.pop()
        print(self.items)

Q = Queue()

Q.enQueue(10)
Q.enQueue(20)
Q.deQueue()
print(Q.isEmpty())