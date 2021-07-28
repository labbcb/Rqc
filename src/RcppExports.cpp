// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// toRRDNA
StringVector toRRDNA(StringVector dnas);
RcppExport SEXP _Rqc_toRRDNA(SEXP dnasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type dnas(dnasSEXP);
    rcpp_result_gen = Rcpp::wrap(toRRDNA(dnas));
    return rcpp_result_gen;
END_RCPP
}
// fromRRDNA
StringVector fromRRDNA(StringVector rrdnas);
RcppExport SEXP _Rqc_fromRRDNA(SEXP rrdnasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type rrdnas(rrdnasSEXP);
    rcpp_result_gen = Rcpp::wrap(fromRRDNA(rrdnas));
    return rcpp_result_gen;
END_RCPP
}
// matdist
IntegerMatrix matdist(StringVector rrdnas);
RcppExport SEXP _Rqc_matdist(SEXP rrdnasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type rrdnas(rrdnasSEXP);
    rcpp_result_gen = Rcpp::wrap(matdist(rrdnas));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rqc_toRRDNA", (DL_FUNC) &_Rqc_toRRDNA, 1},
    {"_Rqc_fromRRDNA", (DL_FUNC) &_Rqc_fromRRDNA, 1},
    {"_Rqc_matdist", (DL_FUNC) &_Rqc_matdist, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rqc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
