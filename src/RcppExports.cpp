// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// binom_category_test
void binom_category_test(std::string directory, int cutoff, std::string root, bool silent);
RcppExport SEXP _ABAEnrichment_binom_category_test(SEXP directorySEXP, SEXP cutoffSEXP, SEXP rootSEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type directory(directorySEXP);
    Rcpp::traits::input_parameter< int >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< std::string >::type root(rootSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    binom_category_test(directory, cutoff, root, silent);
    return R_NilValue;
END_RCPP
}
// binom_randset
void binom_randset(std::string nodes_per_gene, int number_of_randomsets, std::string directory, std::string root, bool silent);
RcppExport SEXP _ABAEnrichment_binom_randset(SEXP nodes_per_geneSEXP, SEXP number_of_randomsetsSEXP, SEXP directorySEXP, SEXP rootSEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type nodes_per_gene(nodes_per_geneSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_randomsets(number_of_randomsetsSEXP);
    Rcpp::traits::input_parameter< std::string >::type directory(directorySEXP);
    Rcpp::traits::input_parameter< std::string >::type root(rootSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    binom_randset(nodes_per_gene, number_of_randomsets, directory, root, silent);
    return R_NilValue;
END_RCPP
}
// conti_category_test
void conti_category_test(std::string directory, int cutoff, std::string root, bool silent);
RcppExport SEXP _ABAEnrichment_conti_category_test(SEXP directorySEXP, SEXP cutoffSEXP, SEXP rootSEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type directory(directorySEXP);
    Rcpp::traits::input_parameter< int >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< std::string >::type root(rootSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    conti_category_test(directory, cutoff, root, silent);
    return R_NilValue;
END_RCPP
}
// conti_randset
void conti_randset(std::string nodes_per_gene, int number_of_randomsets, std::string directory, std::string root, bool silent);
RcppExport SEXP _ABAEnrichment_conti_randset(SEXP nodes_per_geneSEXP, SEXP number_of_randomsetsSEXP, SEXP directorySEXP, SEXP rootSEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type nodes_per_gene(nodes_per_geneSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_randomsets(number_of_randomsetsSEXP);
    Rcpp::traits::input_parameter< std::string >::type directory(directorySEXP);
    Rcpp::traits::input_parameter< std::string >::type root(rootSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    conti_randset(nodes_per_gene, number_of_randomsets, directory, root, silent);
    return R_NilValue;
END_RCPP
}
// hyper_category_test
void hyper_category_test(std::string directory, int cutoff, std::string root, bool silent);
RcppExport SEXP _ABAEnrichment_hyper_category_test(SEXP directorySEXP, SEXP cutoffSEXP, SEXP rootSEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type directory(directorySEXP);
    Rcpp::traits::input_parameter< int >::type cutoff(cutoffSEXP);
    Rcpp::traits::input_parameter< std::string >::type root(rootSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    hyper_category_test(directory, cutoff, root, silent);
    return R_NilValue;
END_RCPP
}
// hyper_randset
void hyper_randset(std::string nodes_per_gene, int number_of_randomsets, std::string directory, std::string root, std::string mod, bool silent);
RcppExport SEXP _ABAEnrichment_hyper_randset(SEXP nodes_per_geneSEXP, SEXP number_of_randomsetsSEXP, SEXP directorySEXP, SEXP rootSEXP, SEXP modSEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type nodes_per_gene(nodes_per_geneSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_randomsets(number_of_randomsetsSEXP);
    Rcpp::traits::input_parameter< std::string >::type directory(directorySEXP);
    Rcpp::traits::input_parameter< std::string >::type root(rootSEXP);
    Rcpp::traits::input_parameter< std::string >::type mod(modSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    hyper_randset(nodes_per_gene, number_of_randomsets, directory, root, mod, silent);
    return R_NilValue;
END_RCPP
}
// unlock_environment
bool unlock_environment(Environment env);
RcppExport SEXP _ABAEnrichment_unlock_environment(SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    rcpp_result_gen = Rcpp::wrap(unlock_environment(env));
    return rcpp_result_gen;
END_RCPP
}
// wilcox_category_test
void wilcox_category_test(std::string directory, int cut, std::string root, bool silent);
RcppExport SEXP _ABAEnrichment_wilcox_category_test(SEXP directorySEXP, SEXP cutSEXP, SEXP rootSEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type directory(directorySEXP);
    Rcpp::traits::input_parameter< int >::type cut(cutSEXP);
    Rcpp::traits::input_parameter< std::string >::type root(rootSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    wilcox_category_test(directory, cut, root, silent);
    return R_NilValue;
END_RCPP
}
// wilcox_randset
void wilcox_randset(std::string nodes_per_gene, int number_of_randomsets, std::string directory, std::string root, bool silent);
RcppExport SEXP _ABAEnrichment_wilcox_randset(SEXP nodes_per_geneSEXP, SEXP number_of_randomsetsSEXP, SEXP directorySEXP, SEXP rootSEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type nodes_per_gene(nodes_per_geneSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_randomsets(number_of_randomsetsSEXP);
    Rcpp::traits::input_parameter< std::string >::type directory(directorySEXP);
    Rcpp::traits::input_parameter< std::string >::type root(rootSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    wilcox_randset(nodes_per_gene, number_of_randomsets, directory, root, silent);
    return R_NilValue;
END_RCPP
}
