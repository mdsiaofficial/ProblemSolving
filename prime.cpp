for(int i=2; i<n; i++){

    if(n%i==0){
        c++;
        break;
    }
}
if(c==0){
    cout<<"Prime"<<endl;
}else{
    cout<<"Not Prime"<<endl;
}