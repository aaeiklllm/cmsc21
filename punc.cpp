#include <iostream>
#include <fstream> //File Stream
#include <map>
#include <cctype>
using namespace std;

/*
Removes punctuations and changes each letter to lowercase.
*/
string removePunctuations(string word)
{
  for(int i = 0; i < word.size(); i++)
  {
    //using ctype in C library, check if the given character is a punctuation
    if (ispunct(word[i]))
        {
            word.erase(i--, 1);
        }
    //using tolower in C library, change the case of a letter to lowercase.
    word[i] = tolower(word[i]);
  }
  return word;
}

void wordFrequency(string filename, map<string, int>& counts)
{
  //create a file stream.
  ifstream inputFile;
  //variable containing a word
  string word;
  //specify the file name of text to read. 
  inputFile.open(filename.c_str());

  //Using the filestream, read each word tokenized by spaces in a file.
  while(inputFile >> word)
  {
    //apply preprocessing to the word
    string preproc = removePunctuations(word);
    //if the word is encountered the first time, add it to the map
    if(counts.count(preproc) == 0)
    {
      counts[preproc] = 1;
    }
    //else increment it.
    else
    {
      counts[preproc]++;
    }

  }
}


int main() {
  map<string, int> counts;

  wordFrequency(string("poem.txt"), counts);
  for(auto x: counts)
  {
    cout << x.first <<" " << x.second << "\n";
  }
  
  std::cout << "Hello World!\n";
}