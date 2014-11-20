#include <Rcpp.h>
using namespace Rcpp;

// Below is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar)

// For more on using Rcpp click the Help button on the editor toolbar

// [[Rcpp::export]]
SEXP plus(NumericVector x1, NumericVector x2) {
  // checking length
  NumericVector retval(x1.size());
  for(int i = 0;i < x1.size();i++) {
    retval[i] = x1[i] + x2[i];
  }
  return retval;
}
