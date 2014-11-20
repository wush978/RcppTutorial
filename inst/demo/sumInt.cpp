#include <Rcpp.h>
using namespace Rcpp;

// Below is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar)

// For more on using Rcpp click the Help button on the editor toolbar

// [[Rcpp::export]]
int sumInt(IntegerVector x) {
  int retval = 0;
  for(int i = 0;i < x.size();i++) {
    retval = retval + x[i];
  }
  return retval;
}

int prodInt(IntegerVector x) {
  // ...
}