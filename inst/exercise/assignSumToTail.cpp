#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
void assignSumToTail(NumericVector x) {
  if (x.size() > 1) {
    // put the sum to the last element
    // ...
  } 
}

/*** R
x1 <- as.integer(1:5)
x2 <- as.numeric(1:5)
*/

