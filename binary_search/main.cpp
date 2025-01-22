#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void display_array(int *array, const int * BUFFER_MAX) {
    for (int i = 0; i < *BUFFER_MAX; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int binary_search(int *tab, int * value, const int * BUFFER_MAX) {
    int value_position = 0;
    int lower_index = 0;
    int higher_index = *BUFFER_MAX;
    bool is_found = false;
    int middle_index = lower_index + (higher_index - lower_index) / 2;
 
    while(is_found == false && higher_index >= lower_index) {
        if (tab[middle_index] == *value) {
            is_found = true;
            break;
        }else if (tab[middle_index] < *value) {
            lower_index = middle_index + 1;
        }else {
            higher_index = middle_index - 1;    
        }
        middle_index = lower_index + (higher_index - lower_index) / 2;
    }

    if(is_found) {
        return middle_index + 1;
    }

    return -1;
}

int main() {
    const int BUFFER_MAX = 15;
    int array_after_sort[BUFFER_MAX]{};
    int value = 0;
    int position = 0;

    for (int i = 0; i < BUFFER_MAX; i++) {
        array_after_sort[i] = i + 10;
    }

    display_array(array_after_sort, &BUFFER_MAX);
    cout << "Which number are you searching for?: ";
    cin >> value;

    position = binary_search(array_after_sort, &value, &BUFFER_MAX);
    
    if(position == -1) {
        cout << "Value not found" << endl;
        return -1;
    }
    cout << "Value: " << value << " founded in position: " << position << endl;

    return 0;
}