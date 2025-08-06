class DynamicArray:
    def __init__(self):
        self.capacity = 10
        self._size = 0
        self.fixed_array = [None] * self.capacity

    def get(self, i):
        if i < 0 or i >= self._size():
            