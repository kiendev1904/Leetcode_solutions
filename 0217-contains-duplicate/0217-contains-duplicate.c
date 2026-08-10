#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


typedef struct{
    int key;
    int value;
    int is_used;
} HashEntry;

typedef struct HashTable{
    HashEntry *entries;
    int size;
}HashTable;

int hash_func(int key, int table_size){
    return (key%table_size + table_size) % table_size;

}

void init_table(HashTable *table,int size){
    table -> size = size;
    table -> entries = (HashEntry*)calloc(size,sizeof(HashEntry));

}
void insert_table(HashTable *table,int key, int value){
    int index = hash_func(key, table->size);
    while (table->entries[index].is_used) {
        index = (index + 1) % table->size;
    }
    table->entries[index].key = key;
    table->entries[index].value = value;
    table->entries[index].is_used = 1;
}
int search(HashTable* table, int key) {
    int index = hash_func(key, table->size);
    int start = index;
    while (table->entries[index].is_used) {
        if (table->entries[index].key == key) {
            return table->entries[index].value;
        }
        index = (index + 1) % table->size;
        if (index == start) break; // Đã dò hết vòng, thoát
    }
    return -1;
}
void free_table(HashTable *table){
    free(table -> entries);
}
bool containsDuplicate(int* nums, int numsSize) {
    HashTable table;
    init_table(&table,2*numsSize + 1);
    for (int i = 0; i < numsSize; i++) {
        int found_nums = search(&table, nums[i]);
        
        if (found_nums != -1) {
            free_table(&table);
            return true;
        }

        insert_table(&table, nums[i], i);
    }
    free_table(&table);
    return false;


} 