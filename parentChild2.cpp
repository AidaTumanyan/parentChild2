#include <iostream>
#include <unistd.h>
#include <sys/wait.h>


int main(int argc, char **argv){

for(int i = 1; i < argc; i++){
 
  char* args[] {argv[i], nullptr};
  pid_t pid = fork();

if(pid == -1){
 
 std::cout<<"Error, something went wrong"<<std::endl;

}

if(pid == 0){
 
 execvp(argv[i], args);

}

else{
 
 int status;
 wait(&status);
 if(WIFEXITED(status)){
	 int status_ = WEXITSTATUS(status);
	 if(status_ == 0){
		 break;
	 }
      
      }
  
    }
   
  }

}
