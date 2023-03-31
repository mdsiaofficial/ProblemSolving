
    int sss=0;
    int mmm=0;
    for(int i=0; i<s.length(); i++){
        int x=(int)s[i];
        int y=(int)m[i];
        sss=sss+x;
        mmm=mmm+y;
    }

    if(sss>mmm) cout<<1<<endl;
    else if (sss<mmm) cout<<-1<<endl;
    else cout<<0<<endl;
