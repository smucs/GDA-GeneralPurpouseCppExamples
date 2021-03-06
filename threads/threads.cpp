#include <iostream>  
#include <boost/thread.hpp>  
#include <boost/date_time.hpp>  

//g++ threads.cpp -l boost_thread-mt  -o threads

// have a look at different mutex's out there.
boost::mutex global_stream_lock;


// this is bad do not use it if you want to make anything larger than one file
using namespace std;


void workerFunc(string message)  
{  

  boost::posix_time::seconds workTime(3);  

  global_stream_lock.lock();
  cout << message << endl;  
  global_stream_lock.unlock();
  boost::this_thread::sleep(workTime);    
  global_stream_lock.lock();
  cout << "Worker: finished" << endl;  
  cout << boost::this_thread::get_id() <<endl;
  global_stream_lock.unlock();

}  
       
int main(void) {  
  
  boost::thread_group threads;
  
  cout << "Main Entered" <<endl;

  for (unsigned int i = 0 ; i < 100; ++i) {

    threads.create_thread(boost::bind(workerFunc ,"I am a thread"));  
  }         
           
  threads.join_all();  
  cout << "Main Exit" << endl;  
           
  return 0;  
}
