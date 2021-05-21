// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// proj_version
NumericVector proj_version();
RcppExport SEXP _meteogrid_proj_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(proj_version());
    return rcpp_result_gen;
END_RCPP
}
// mg_project
Rcpp::DataFrame mg_project(NumericVector x, NumericVector y, std::string proj_string, bool inverse);
RcppExport SEXP _meteogrid_mg_project(SEXP xSEXP, SEXP ySEXP, SEXP proj_stringSEXP, SEXP inverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type proj_string(proj_stringSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    rcpp_result_gen = Rcpp::wrap(mg_project(x, y, proj_string, inverse));
    return rcpp_result_gen;
END_RCPP
}
// upscale_by_mean
NumericMatrix upscale_by_mean(NumericVector px, NumericVector py, NumericVector pval, int gnx, int gny);
RcppExport SEXP _meteogrid_upscale_by_mean(SEXP pxSEXP, SEXP pySEXP, SEXP pvalSEXP, SEXP gnxSEXP, SEXP gnySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type px(pxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type py(pySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pval(pvalSEXP);
    Rcpp::traits::input_parameter< int >::type gnx(gnxSEXP);
    Rcpp::traits::input_parameter< int >::type gny(gnySEXP);
    rcpp_result_gen = Rcpp::wrap(upscale_by_mean(px, py, pval, gnx, gny));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_meteogrid_proj_version", (DL_FUNC) &_meteogrid_proj_version, 0},
    {"_meteogrid_mg_project", (DL_FUNC) &_meteogrid_mg_project, 4},
    {"_meteogrid_upscale_by_mean", (DL_FUNC) &_meteogrid_upscale_by_mean, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_meteogrid(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}