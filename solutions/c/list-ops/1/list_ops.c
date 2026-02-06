#include "list_ops.h"

list_t *new_list(size_t length, list_element_t elements[]) {
    list_t *list = malloc(sizeof(list_t) + length * sizeof(list_element_t));
    if (!list)
        return NULL;

    list->length = length;

    for (size_t i = 0; i < length; i++)
        list->elements[i] = elements[i];
    
    return list;
}

list_t *append_list(list_t *list1, list_t *list2) {
    if (!list1 || !list2)
        return NULL;

    size_t len = list1->length + list2->length;
    if (len < list1->length)
        return NULL;
    
    list_t *list = malloc(sizeof(list_t) + len * sizeof(list_element_t));
    if (!list)
        return NULL;

    list->length = len;

    size_t i = 0;
    while (i < list1->length) {
        list->elements[i] = list1->elements[i];
        i++;
    }

    size_t j = 0;
    while (j < list2->length) {
        list->elements[i] = list2->elements[j];
        i++;
        j++;
    }

    return list;
}

list_t *filter_list(list_t *list, bool (*filter)(list_element_t)) {
    if (!list || !filter)
        return NULL;

    list_element_t *tmp = malloc(sizeof(list_element_t) * list->length);
    if (!tmp)
        return NULL;
    
    size_t filtered = 0;
    for (size_t i = 0; i < list->length; i++)
        if (filter(list->elements[i])) {
            tmp[filtered] = list->elements[i];
            filtered++;
        }

    list_t *new_l = new_list(filtered, tmp);
    free(tmp);
    
    return new_l;
}

size_t length_list(list_t *list) {
    if (!list)
        return 0;

    return list->length;
}

list_t *map_list(list_t *list, list_element_t (*map)(list_element_t)) {
    if (!list || !map)
        return NULL;
    
    size_t len = length_list(list);
    list_t *new_l = malloc(sizeof(list_t) + len * sizeof(list_element_t));
    if (!new_l)
        return NULL;

    new_l->length = len;

    for (size_t i = 0; i < len; i++) 
        new_l->elements[i] = map(list->elements[i]);

    return new_l;
}

list_element_t foldl_list(list_t *list, list_element_t initial,
                          list_element_t (*foldl)(list_element_t,
                                                  list_element_t)) {
    if(!list || !foldl)
        return 0;

    for (size_t i = 0; i < list->length; i++)
        initial = foldl(list->elements[i], initial);

    return initial;
}

list_element_t foldr_list(list_t *list, list_element_t initial,
                          list_element_t (*foldr)(list_element_t,
                                                  list_element_t)) {
    if(!list || !foldr)
        return 0;

    size_t i = length_list(list);
    while (i)
        initial = foldr(list->elements[--i], initial);

    return initial;
}

list_t *reverse_list(list_t *list) {
    if (!list)
        return NULL;

    size_t len = length_list(list);
    
    list_t *new_l = malloc(sizeof(list_t) + len * sizeof(list_element_t));
    if (!new_l)
        return NULL;

    new_l->length = len;

    for (size_t i = 0; i < len; i++)
        new_l->elements[i] = list->elements[len - i - 1];

    return new_l;
}

void delete_list(list_t *list) {
    free(list);
}






















































