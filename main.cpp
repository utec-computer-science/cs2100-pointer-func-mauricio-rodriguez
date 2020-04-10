//
// Created by mauri on 09-Apr-20.
//
#include <iostream>

using namespace std;

void * _bubblesort_(
        void * _array_,
        void (*_puntero_) (void *, int _i, int _k),
        int _tam_
){
    int _k = 0;
    for (int i = 0; i < _tam_ ; i ++)
        for(int k = 0; k < _tam_-1; k++)
            _puntero_(_array_,k,_k);
    return _array_;
}

void  _b_int_ (void * _vector_, int _i,int _k){
    int *intPtr{static_cast<int*>(_vector_) };
    if (intPtr[_i] > intPtr[_i + 1 ]){
        swap(intPtr[_i],intPtr[_i + 1]);
    }
}

void  _b_float_ (void * _vector_, int _i,int _k){
    float *floatPtr{static_cast<float*>(_vector_) };
    if (floatPtr[_i] > floatPtr[_i + 1 ]){
        swap(floatPtr[_i],floatPtr[_i + 1]);
    }
}

void  _b_double_ (void * _vector_, int _i,int _k){
    double *doublePtr{static_cast<double*>(_vector_) };
    if (doublePtr[_i] > doublePtr[_i + 1 ]){
        swap(doublePtr[_i], doublePtr[_i + 1]);
    }
}

void  _b_char_ (void * _vector_, int _i,int _k){
    char *charPtr{static_cast<char*>(_vector_) };
    if (charPtr[_i] > charPtr[_i + 1 ]){
        swap(charPtr[_i], charPtr[_i + 1]);
    }
}

int main(){
    int i = 0;
    int _array_1 [5] = {2,20,7,108,9}; // RANDOMS
    float _array_2 [5] = {4.4,5.4,9.1,7.4,2.2};
    double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
    char _array_4 [6] = {'k','a','r','l','o','s'};

    _bubblesort_(_array_1,_b_int_,5);
    cout<<"_array_1 sorted: "<<endl;
    for (int j : _array_1) {
        std::cout<<j<<endl;
    }
    _bubblesort_(_array_2,_b_float_,5);
    cout<<"_array_1 sorted: "<<endl;
    for (float j : _array_2) {
       std::cout<<j<<endl;
   }
    _bubblesort_(_array_3,_b_double_,5);
    cout<<"_array_3 sorted: "<<endl;
    for (double j : _array_3) {
        std::cout<<j<<endl;
    }
    _bubblesort_(_array_4,_b_char_,6);
    cout<<"_array_4 sorted: "<<endl;
    for (char j : _array_4) {
        std::cout<<j<<endl;
    }
    return 0;
}
