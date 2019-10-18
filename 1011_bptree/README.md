# Assignment 2: B+ Tree

**Description**
```
for (int j = leaf->nkey; j > i; j--) {
  leaf->chi[j] = leaf->chi[j-1];
  leaf->key[j] = leaf->key[j-1];
}
leaf->key[i] = key;
leaf->chi[i] = (NODE *)data;
```

The loop shifts exisiting keys and pointers to make space for inserting a new given key and data to that space.

**Example**
```
make && ./bptree
Key: 1
[1]
Key: 2
[1 2]
Key: 3
[1 2 3]
```

```
make && ./bptree
Key: 3
[3]
Key: 2
[2 3]
Key: 1
[1 2 3]
```
