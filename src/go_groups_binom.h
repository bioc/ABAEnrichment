
#ifndef GO_GROUPS_BINOM_H
#define GO_GROUPS_BINOM_H

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <set>
//#include "overall_sign.h" 

using namespace std ;


/*******************
 * encapsulates parsing and analysis of randomset-lines
 ********************/
class go_groups_binom {
	public:
		/**********
		 * save name and boolean (if more genes than co in group) for 
		 * each group
		 ***********/
		go_groups_binom( string &groups, istream *in=0, int co=1, 
					string root_go = "GO:0003675" ) ;
		
		/**********
		 * calculates number of significant groups at different cutoffs
		 * returns array with these numbers of groups
		 * side effect: 1. saves the p-values to overall_significance
		 *              2. saves pvalues to data_pvals_{c,h}
		 ***********/
		int *calculate_data( string &data, ostream *os=0 ) ;


		/**********
		 * equal to calculate_data, except side effect 2:
		 *              2. saves smallest pvalue over all groups to 
		 *					smallest_rand_p_{c,h}
		 ***********/
		int *calculate_rand( string &data, ostream *os=0 ) ;

		/**********
		 * prints statistics to os, uses nr_randsets to calculate
		 * FWER. Runs overall_significance test and FDR estimate
		 * using c_sig and h_sig.
		 ***********/
		void print_pvals( int nr_randsets, ostream &os ) ;
	private:
		vector<string> names ; // group_id
		vector<bool> check ; // whether #genes in group i is > cutoff

		// pvalues for all groups in dataset
		vector<double> data_pvals_c ;
		vector<double> data_pvals_h ;

		// smallest pvalue of each randomset
		multiset<double> smallest_rand_p_c ;
		multiset<double> smallest_rand_p_h ;

		// index of root node
		int root_idx ;
		
		//overall_significance c_sig, h_sig ;

	
} ;

#endif
