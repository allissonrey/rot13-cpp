#include <iostream>
#include <cstdio>
#include <unistd.h>
using namespace std;

size_t strlen(char* str){
    size_t len = 0;
    for(int i = 0; str[i] != '\0'; i++){len++; }
    return len; }

int main(int argc, char* argv[]){

    if(!argv[1]){ printf("Wrong usage!\n"); return -1; };
    char* message = (char *)argv[1];
    int len = strlen(message); 
    int rot = 13;
    cout << message << "\r";
    fflush(stdout);
    usleep(200000);
    for(int i = 0; i <= len; i++){
        cout<< message << "\r"; fflush(stdout); usleep(50000);
        
        // lowercase characters a-z
        if(message[i] >= 'a' && message[i] <= 'z'){
            if(message[i] < 'n'){  message[i] = message[i] + rot; }
            else{ message[i] = message[i] - rot;}}
        
        // uppercase characters A-Z
        if(message[i] >= 'A' && message[i] <= 'Z'){
            if(message[i] < 'N'){ message[i] += rot; }
            else{ message[i] -= rot; }} }

    cout<<message << "\n";
    return 0; }
