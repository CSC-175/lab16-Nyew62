// Code to implement the gcf function goes here
int gcf(int a, int b) {
    if (a%b == 0) {
        return b;
    }
    else {
        return gcf(b, a % b);
    }

}

//lab16_Nyew62 Tests/test1.cpp lab16Driver.cpp)
