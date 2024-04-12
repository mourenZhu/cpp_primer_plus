#include <iostream>
using std::cout;
using std::endl;

template <class T> void counts();
template <class T> void report(T &);

template<class TT>
class HasFriendT{
private:
    TT item;
    static int ct;
public:
    HasFriendT(const TT &i): item(i) {ct++;}
    ~HasFriendT() {ct--;}
    friend void counts<TT>();
    friend void report<>(HasFriendT<TT> &);
};

template <class T>
int HasFriendT<T>::ct = 0;

template <class T>
void counts() {
    cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
    cout << "template counts(): " << HasFriendT<T>::ct << endl;
}

template <class T>
void report(T &hf) {
    cout << "HasFriendT<int>: " << hf.item << endl;
}


int main() {
    counts<int>();
    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double> hfdb(10.5);
    report(hfi1);
    report(hfi2);
    report(hfdb);
    cout << "counts<int>() output:\n";
    counts<int>();
    cout << "counts<double>() output:\n";
    counts<double>();

    return 0;
}