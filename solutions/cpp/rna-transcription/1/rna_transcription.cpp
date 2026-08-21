#include "rna_transcription.h"

namespace rna_transcription {
/* RNA transcription rules 
G -> C
C -> G
T -> A
A -> U
*/
std::string to_rna(std::string rna)
{
    for (auto& c: rna){
        switch (c)
        {
        case 'G':
            c = 'C';
            break;
        case 'C':
            c = 'G';
            break;
        case 'T':
            c = 'A';
            break;
        case 'A':
            c = 'U';
            break;
        default:
            break;
        }
    }
    return rna;
}

char to_rna(char rna)
{
    switch (rna)
    {
    case 'G':
        rna = 'C';
        break;
    case 'C':
        rna = 'G';
        break;
    case 'T':
        rna = 'A';
        break;
    case 'A':
        rna = 'U';
        break;
    default:
        break;
    }
return rna;
}

} // namespace rna_transcription
