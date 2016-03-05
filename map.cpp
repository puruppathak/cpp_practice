//Name: Puru Pathak

#include <iostream>
#include <string>
using namespace std;
#include <map>
using std::cout;

int main ()
{

  cout<<"Hello. This program inputs log file, finds unique users and lists them. \n\n";

  multimap<string,string> page_records;                       //Creating a multimap
  multimap<string,string>::iterator It1;                      //Initializing an iterator
  pair<multimap<string,string>::iterator,multimap<string,string>:: iterator> bidirect_iterator;   // Bi-directional iterator
  page_records.insert(pair<string,string>("yahoo","ap42"));             // Inserting values in map
  page_records.insert(pair<string,string>("google","ap42"));
  page_records.insert(pair<string,string>("twitter", "thl76"));
  page_records.insert(pair<string,string>("google", "aa314"));
  page_records.insert(pair<string,string>("google", "thl76"));
  page_records.insert(pair<string,string>("twitter", "aa314"));
  page_records.insert(pair<string,string>("twitter", "ap42"));
  page_records.insert(pair<string,string>("yahoo", "aa314"));


  bidirect_iterator=page_records.equal_range("yahoo");             //Finding unique users for yahoo
  
cout  << "Unique users for yahoo are: \n";

  for (It1=bidirect_iterator.first; It1!=bidirect_iterator.second; ++It1)
  {
      cout  << " "  << (*It1).second<<"\n";

  }
cout<<"\n";

cout  << "Unique users for google are: \n";

bidirect_iterator=page_records.equal_range("google");
  
  for (It1=bidirect_iterator.first; It1!=bidirect_iterator.second; ++It1)
  {
      cout  << " "  << (*It1).second<<"\n";

  }


cout<<"\n";

cout  << "Unique users for twitter are: \n";

bidirect_iterator=page_records.equal_range("twitter");
  
  for (It1=bidirect_iterator.first; It1!=bidirect_iterator.second; ++It1)
  {
      cout  << " "  << (*It1).second<<"\n";

  }



cout<<"\n"; 

cout<< "Result count for each page id:\n";              // Printing unique user count
cout << "yahoo has " << page_records.count("yahoo") << " unique users" <<  endl;
cout << "google has " << page_records.count("google") << " unique users" <<  endl;
cout << "twitter has " << page_records.count("twitter") << " unique users" <<  endl;



  cout  <<  endl;
  return 0;
}