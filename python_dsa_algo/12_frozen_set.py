l=[1,2,3,4,5]
frozen_set=frozenset(l)
print(frozen_set)
frozen_set.append(6)  # AttributeError: 'frozenset' object has no attribute 'append'