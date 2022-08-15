#include <string>

std::string DNAStrand(const std::string& dna) {
    std::string comp;
    for (char c : dna) {
        switch (c) {
            case 'A':
                c = 'T';
                break;
            case 'C':
                c = 'G';
                break;
            case 'G':
                c = 'C';
                break;
            case 'T':
                c = 'A';
                break;
        }
        comp += c;
    }
    return comp;
}
