#include <bits/stdc++.h>
using namespace std;

struct Movie {
    int start, end;
};

bool comp(Movie &a, Movie &b){
    return a.end < b.end;
}

int main(){
    int n;
    cin >> n;

    vector<Movie> movies(n);

    for(int i = 0; i < n; i++){
        cin >> movies[i].start >> movies[i].end;
    }

     sort(movies.begin() , movies.end()   , comp);
    int count = 0;
    int last_end = 0;

    for(auto movie : movies){
        if(movie.start >= last_end){
            count++;
            last_end = movie.end;
        }
    }

    cout << count << endl;
}