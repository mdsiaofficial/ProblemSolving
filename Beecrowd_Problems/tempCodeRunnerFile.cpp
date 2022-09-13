    
    if(x>y){
        for(int i=y; i<x; i++){
            if(i%2!=0){
                odds=odds+i;
            }
        }
        cout<<odds<<endl;
    }else{
        for(int i=x; i<y; i++){
            if(i%2!=0){
                odds=odds+i;

            }
        }
        cout<<odds<<endl;
    }