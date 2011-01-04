#include <Eigen/Core>
#include <Eigen/Array>
#include <Eigen/LU>
#include <Eigen/Cholesky>
#include <Eigen/Geometry>

using namespace Eigen;
using namespace std;

int main(int, char**)
{
  Matrix3d m;
m << 1,1,0,
     1,3,2,
     0,1,1;
cout << "Here is the matrix m:" << endl << m << endl;
cout << "Notice that the middle column is the sum of the two others, so the "
     << "columns are linearly dependent." << endl;
cout << "Here is a matrix whose columns have the same span but are linearly independent:"
     << endl << m.lu().image() << endl;

  return 0;
}
