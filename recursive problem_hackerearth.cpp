
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int no_of_usecases{0},temp{0};
    int total_boys_room{0}, total_girls_room{0};
    cin>>no_of_usecases;
    
    vector<vector<int>> usecase(no_of_usecases,vector <int> ());
    
    for(int i=0;i<no_of_usecases; i++){
        for(int j = 0; j<3; j++){
            cin>>temp;
            usecase.at(i).push_back(temp);
        }
    }
    
    for(int i=0;i<no_of_usecases; i++){
//        temp = (usecase[i][0]/usecase[i][2])+((usecase[i][0])==usecase[i][2]?0:1)+(usecase[i][1]/usecase[i][2])+((usecase[i][1])==usecase[i][2]?0:1);
        
        if (usecase[i][0]!=0) {
            total_boys_room = (usecase[i][0]/usecase[i][2])+((usecase[i][0])%usecase[i][2]==0?0:1);
        }
        else{
            total_boys_room = 0;
        }
        temp =(usecase[i][0]!=0?(usecase[i][0]/usecase[i][2])+((usecase[i][0])%usecase[i][2]==0?0:1):0)+(usecase[i][1]!=0?(usecase[i][1]/usecase[i][2])+((usecase[i][1])%usecase[i][2]==0?0:1):0);
//        cout<<"\ntotal boys room: "<<total_boys_room;
        
        if (usecase[i][1]!=0) {
            total_girls_room = (usecase[i][1]/usecase[i][2])+((usecase[i][1])%usecase[i][2]==0?0:1);
        }
        else{
            total_girls_room = 0;
        }
//        cout<<"\ntotal girls room: "<<total_girls_room<<endl;
        temp = total_boys_room + total_girls_room;
        printf("%d\n",temp);
    }
    
    
    return 0;
}
