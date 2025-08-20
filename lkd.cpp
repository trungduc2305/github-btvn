#include <iostream>

// Cho dinh dang node nhu sau:
typedef struct LinklistNode {
    int value;
    LinklistNode* next;
} LinklistNode;

LinklistNode* start = NULL;

// Hoan thien cac function duoi day
void DisplayLinklist() {
    LinklistNode* ptr;
    ptr = start;

    while (ptr != NULL)
    {
        std::cout << ptr->value << ", ";
        ptr = ptr->next;
    }

    std::cout << std::endl;
}

void DisplayAddressLinklist() {
    LinklistNode* ptr;
    ptr = start;
    while (ptr != NULL)
    {
        std::cout << ptr << std::endl;
        ptr = ptr->next;
    }
    
}

void InitLinklistWithVector(int* array, int size) {
    LinklistNode* ptr;
    LinklistNode* newNode;
    for (int i=0; i<size; i++) {
        newNode = new LinklistNode;
        newNode->value = array[i];
        newNode->next = NULL;

        if (start == NULL) {
            start = newNode;
            continue;
        }
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = newNode;
    }
}

main () {
    int arr[] = {1 ,2,3,4,5,6};
    
    InitLinklistWithVector (arr,6);

    std::cout <<"Danh sach lien ket";
    DisplayLinklist();

    std::cout << "Dia chi node" << std::endl;
    DisplayAddressLinklist();
}