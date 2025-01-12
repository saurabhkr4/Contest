
	while(t--){
	    int n;
	    cin>>n;
        int odd = 0, even = 0;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                if(i%2==1) odd++;
                else even++;
            }
        }
        if(even>odd) cout<<1<<endl;
        else if(even==odd) cout<<0<<endl;
        else cout<<-1<<endl;
	}