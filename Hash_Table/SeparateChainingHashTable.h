#ifndef _HashSep_H

struct ListNode;
typedef struct ListNode *Position;
struct HashTbl;
typedef struct HashTbl *HashTable;

HashTable InitializeTable(int tableSize);
void DestroyTable(HashTable H);
Position Find(ElementType key, HashTable H);
void Insert(ElementType key, HashTable H);
ElementType Retrieve(Position P);

#endif /* _HashSep_H */