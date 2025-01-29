std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i < vec.size(); ++i) {
  vec.erase(vec.begin() + i);
}

//This will result in unexpected behaviour because the indexes will shift every time vec.erase() is called
//Correct way to remove elements from a vector

std::vector<int> vec2 = {1, 2, 3, 4, 5};
for (auto it = vec2.begin(); it != vec2.end(); ++it){
    //remove element from vector based on some condition
    if (*it == 2){
        vec2.erase(it);
        break;
    }
}
//Another way is to use remove_if
std::vector<int> vec3 = {1, 2, 3, 4, 5};
vec3.erase(std::remove_if(vec3.begin(), vec3.end(), [](int n){ return n == 2;}), vec3.end());
//Or use a loop in reverse
std::vector<int> vec4 = {1, 2, 3, 4, 5};
for (int i = vec4.size()-1; i>=0; --i){
    if (vec4[i] == 2){
        vec4.erase(vec4.begin() + i);
    }
}
