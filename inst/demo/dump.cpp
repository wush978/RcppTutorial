#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
SEXP dump0(List x) {
  IntegerVector a(x[0]);
  return a;
}

// [[Rcpp::export]]
SEXP dump1(List x) {
  // ...
}

// [[Rcpp::export]]
SEXP dump2(List x) {
  // ...
}

// [[Rcpp::export]]
SEXP dump3(List x) {
  // ...
}
