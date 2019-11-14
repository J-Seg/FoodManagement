#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip>



class food{
    char food[20];
    char location[20]; 
    public: 
        void new_food(){
            std::cout << "New Food Entry\n";
            std::cout << "Enter the new food\n";
            std::cin >> food;



        }
        void location(){
            std::cout << "Location\n";
            std::cout << "Enter where food is located\n";
            std::cin >> location;        
        }

}
//deletes food stored
void delete_food(){
    char delete;
    std::cout << "Food Deletion\n";
    std::cout << "Enter the food that you want to delete\n";
    std::cin >> delete;
}



int main(){
    int n = 0, option = 0, count_n = 0;
    
    //menu options 
    while(option != 5){
        std::cout << "\n Available Options: \n1. Add New Food\n2. Select Location\n3. Deletion\n4.
        Deletion\n5. Exit\n6.";
        std::cin >> option;

    } 

    if(option == 1){
        new_food();
    }
    else if(option == 2){
        location();

    }
    else if(option == 3){
        delete_food();
    }





}