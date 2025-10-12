#include <iostream>
#include<string>

using std::cout;
using std::string;

double get_gc_content(const std::string& dna) 
{
    int gc_count = 0;
    for (char nucleotide : dna) {
        if (nucleotide == 'G' || nucleotide == 'C') {
            gc_count++;
        }
    }
    return dna.empty() ? 0.0 : static_cast<double>(gc_count) / dna.length();
}

std::string get_reverse_string(const std::string& dna) {
    return std::string(dna.rbegin(), dna.rend());
}
int get_dna_component(const std::string& dna, char nucleotide) {
	int count = 0;
	for (char n : dna) {
		if (n == nucleotide) {
			count++;
		}
    }
    return count;
}
int main() 
{
    return 0;
}
