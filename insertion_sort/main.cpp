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




<h2 align="left">Hi 👋! My name is ... and I'm a ..., from ....</h2>

###

<div align="center">
  <img src="https://github-readme-stats.vercel.app/api?username=maurodesouza&hide_title=false&hide_rank=false&show_icons=true&include_all_commits=true&count_private=true&disable_animations=false&theme=dracula&locale=en&hide_border=false" height="150" alt="stats graph"  />
  <img src="https://github-readme-stats.vercel.app/api/top-langs?username=maurodesouza&locale=en&hide_title=false&layout=compact&card_width=320&langs_count=5&theme=dracula&hide_border=false" height="150" alt="languages graph"  />
</div>

###

<img align="right" height="150" src="https://i.imgflip.com/65efzo.gif"  />

###

<div align="left">
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/javascript/javascript-original.svg" height="30" alt="javascript logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/typescript/typescript-original.svg" height="30" alt="typescript logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/react/react-original.svg" height="30" alt="react logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/html5/html5-original.svg" height="30" alt="html5 logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/css3/css3-original.svg" height="30" alt="css3 logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/python/python-original.svg" height="30" alt="python logo"  />
  <img width="12" />
  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/csharp/csharp-original.svg" height="30" alt="csharp logo"  />
</div>

###

<div align="left">
  <img src="https://img.shields.io/static/v1?message=Youtube&logo=youtube&label=&color=FF0000&logoColor=white&labelColor=&style=for-the-badge" height="35" alt="youtube logo"  />
  <img src="https://img.shields.io/static/v1?message=Instagram&logo=instagram&label=&color=E4405F&logoColor=white&labelColor=&style=for-the-badge" height="35" alt="instagram logo"  />
  <img src="https://img.shields.io/static/v1?message=Twitch&logo=twitch&label=&color=9146FF&logoColor=white&labelColor=&style=for-the-badge" height="35" alt="twitch logo"  />
  <img src="https://img.shields.io/static/v1?message=Discord&logo=discord&label=&color=7289DA&logoColor=white&labelColor=&style=for-the-badge" height="35" alt="discord logo"  />
  <img src="https://img.shields.io/static/v1?message=Gmail&logo=gmail&label=&color=D14836&logoColor=white&labelColor=&style=for-the-badge" height="35" alt="gmail logo"  />
  <img src="https://img.shields.io/static/v1?message=LinkedIn&logo=linkedin&label=&color=0077B5&logoColor=white&labelColor=&style=for-the-badge" height="35" alt="linkedin logo"  />
</div>

###

<br clear="both">

<img src="https://raw.githubusercontent.com/maurodesouza/maurodesouza/output/snake.svg" alt="Snake animation" />

###