#include <QCoreApplication>
#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //    INCLUDEPATH += $$PWD/armadillo-8.600.0/include

    //    LIBS += -L$$PWD/armadillo-8.600.0/lib_win64/ -lblas_win64_MT

    //
    //    INCLUDEPATH += $$PWD/armadillo-3.930.0/include


    //    LIBS += -L$$PWD/armadillo-3.930.0/lib/ -lblas_win32_MT

    //    LIBS += -L$$PWD/armadillo-3.930.0/lib/ -llapack_win32_MT
    cout<<"Armadillo version: "<<arma_version::as_string()<<endl;

    mat A(2, 3);  // directly specify the matrix size (elements are uninitialised)

    cout<<"A.n_rows: "<<A.n_rows<<endl;  // .n_rows and .n_cols are read only
    cout<<"A.n_cols: "<<A.n_cols<<endl;
    cout<<A.is_empty()<<endl;
    cout<<static_cast<bool>(A.memptr())<<endl;


    A(1, 2) = 456.0;  // directly access an element (indexing starts at 0)
    A.print("A:");

    A = 5.0;         // scalars are treated as a 1x1 matrix
    A.print("A:");

    A.set_size(4, 5); // change the size (data is not preserved)

    A.fill(5.0);     // set all elements to a particular value
    A.print("A:");




    return a.exec();
}
