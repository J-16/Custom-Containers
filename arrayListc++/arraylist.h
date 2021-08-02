#ifndef customArray_h
#define customArray_h

template <class A>
class customArray{
  public:
    A first;
};

template <class B, class C>
class customArray2{
  public:
    B first;
    C second;
};

template<class T, class S>
class ArrayList{
  
  public:
    customArray<T> *s1;
    customArray2<T,S> *s;

    ArrayList(){
      s = new customArray2<T, S>[10]();
    }

    int iterator = 0;

    void add(T a){
      s1[iterator++].first = a;
    }

    void add(T a, S b){
      s[iterator].first = a;
      s[iterator].second = b;
      iterator++;
    }

    customArray2<T, S> get(int item){
      return s[item];
    }

    // customArray<T> get(int item){
    //   return s1[item];
    // }

    int size(){
      return iterator;
    }

    ~ArrayList(){
      delete s1;
      delete s;
    }

};

#endif