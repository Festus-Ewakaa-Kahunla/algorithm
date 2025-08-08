class DynamicArray:
    def __init__(self):
        self.capacity = 10
        self._size = 0
        self.fixed_array = [None] * self.capacity

    def get(self, i):
        if i < 0 or i >= self._size:
            raise IndexError("Index out of bounds")
        return self.fixed_array[i]
    
    def set(self, i, x):
        if i < 0 or i >= self._size:
            raise IndexError("Index out of bounds")
        self.fixed_array[i] = x

    def size(self):
        return self._size