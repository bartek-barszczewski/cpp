#include <iostream>
#include <cstdlib>
#include <ctime>

constexpr int BUFFER_MAX = 20;
constexpr int BUFFER_MAX_AMOUNT = 100;

using std::cin;
using std::cout;
using std::endl;

void display_array(int (&array)[BUFFER_MAX]) {
    for (int i = 0; i < BUFFER_MAX; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
                           
void sort_count(int (&array)[BUFFER_MAX], int (&array_amount)[BUFFER_MAX_AMOUNT]) {
    int index = 0;
                           
    for (int i = 0; i < BUFFER_MAX; i++) {
        array_amount[array[i]]++;
    }

    for (int i = 0; i < BUFFER_MAX_AMOUNT; i++){
        while(array_amount[i] > 0 ) {
            array[index++] = i;
            array_amount[i]--;
        }
    }

    for (int i = 0; i < BUFFER_MAX; i++) {
        
    }

}

int main() {
    srand(time(NULL));
    
    int array_to_sort[BUFFER_MAX]{}; 
    int array_amount[BUFFER_MAX_AMOUNT]{0}; 
    int random_number = 0;

    for (int i = 0; i < BUFFER_MAX; i++) 
    {
        random_number = rand() % BUFFER_MAX_AMOUNT ;
        array_to_sort[i] = random_number; 
    }

    cout << "Before:  ";
    display_array(array_to_sort);

    sort_count(array_to_sort, array_amount);
    cout << endl;

    cout << "Current: ";   
    display_array(array_to_sort);

    return 0;
}