#include <zmq.hpp>
#include <string>
#include <iostream>

using namespace std;

int main ()
{
  zmq::message_t request (5);
  memcpy (request.data (), "Hello", 5);
 
  int count = request.size(); 
  cout << "message size: " << count << endl;

  char* bytes = (char*) request.data();

  for (int i = 0; i < count; i++) {
    cout << bytes[i] << endl;
  }
}
