void forking(){
	fork();
	forking();
}

void main(){
	int pid = fork();
	if(pid == 0){
		forking();
	}
}
