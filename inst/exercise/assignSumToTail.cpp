#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
void assignSumToTail(NumericVector x) {
  if (x.size() > 1) {
    // put the sum to the last element
    // ...
  } 
}

// [[Rcpp::export]]
void assignSumToTail2(NumericMatrix X) {
  if (X.size() > 1) {
    // put the sum to the last, bottom-right, element
    // ...
  }
}

/*** R
x1 <- as.integer(1:5)
x2 <- as.numeric(1:5)
X1 <- matrix(1:9, 3, 3)
X2 <- matrix(as.numeric(1:9), 3, 3)
*/

