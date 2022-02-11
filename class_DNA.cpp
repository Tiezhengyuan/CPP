#include <iostream>
#include <cctype>

using namespace std;

class DNA{
private:
    const int capacity = 255;
    string seq;
    int length;

public:
    // constructor overloading
    DNA()
    {
        this->seq = "";
    }
    DNA(string in_seq)
    {
        this->seq = in_seq;
        this->length = this->seq.length();
    }
    ~DNA(void)
    {
        // delete seq;
        // delete this->capacity;
        // delete this->length;
    }
    
    formatSeq()
    {
        for(int i=0; i<this->length; i++)
        {
            this->seq[i] = toupper(this->seq[i]);
        }
    }
    string getSeq()
    {
        return this->seq;
    }
    string appendSeq(string in_seq)
    {
        this->seq += in_seq;
        this->length = this->seq.length();
        return this->seq;
    }
    string reverseSeq(void)
    {
        string rev = "";
        for(int i = this->length-1; i>=0; i--)
            rev += this->seq[i];
        return rev;
    }
    char complementarySeq(char nt)
    {
        switch(nt)
        {
                case 'A': return 'T';
                case 'T': return 'A';
                case 'G': return 'C';
                case 'C': return 'G';
                default: return 'N';
        }
    }
    string revComSeq(void)
    {
        string rev_com = "";
        for(int i = this->length-1; i>=0; i--)
            rev_com += this->complementarySeq(this->seq[i]);
        return rev_com;
    }
    string subSeq(int start)
    {

        return this->seq.substr(start-1);
    }
    string subSeq(int start, int end)
        {

            return this->seq.substr(start-1, end-start+1);
        }
    char at(int pos)
        {
            return this->seq[pos-1];
        }
    int getLength(void)
        {
            return this->seq.length();
        }
    int getCapacity(void)
        {
            return this->capacity;
        }
};


int main(int argc, char **argv){

    DNA *s = new DNA;
    DNA s1();
    DNA s2("ATgaGCT");
    s2.formatSeq();
    cout << s2.getSeq() << endl;
    cout << s2.appendSeq("CCCC") << endl;
    cout << s2.getLength() << endl;
    cout << s2.reverseSeq() << endl;
    cout << s2.revComSeq() << endl;
    cout << "sub 2nd-end: " << s2.subSeq(2) << endl;
    cout << "sub 2nd-6th: " << s2.subSeq(2,6) << endl;
    return 1;
}