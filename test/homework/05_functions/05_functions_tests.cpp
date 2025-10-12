#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
// Returns the GC content (percentage of 'G' and 'C') in a DNA string
double get_gc_content(const std::string& dna) {
    int gc_count = 0;
    for (char nucleotide : dna) {
        if (nucleotide == 'G' || nucleotide == 'C') {
            gc_count++;
        }
    }
    return dna.empty() ? 0.0 : static_cast<double>(gc_count) / dna.length();
}

// Returns the reverse of a DNA string
std::string get_reverse_string(const std::string& dna) {
    return std::string(dna.rbegin(), dna.rend());
}
// Returns the count of a specific nucleotide in a DNA string
int get_dna_component(const std::string& dna, char nucleotide) {
	int count = 0;
	for (char n : dna) {
		if (n == nucleotide) {
			count++;
		}
	}
	return count;
}
