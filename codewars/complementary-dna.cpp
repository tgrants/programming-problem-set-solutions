#include <string>

std::string DNAStrand(std::string dna) {
	for (int i = 0; i < dna.length(); i++) {
		switch (dna[i]) {
			case 'A': dna[i] = 'T'; break;
			case 'C': dna[i] = 'G'; break;
			case 'G': dna[i] = 'C'; break;
			case 'T': dna[i] = 'A'; break;
		}
	}
	return dna;
}