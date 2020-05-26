    
	int n,q,k;
    cin >> n >> q;
    int *values = (int *)alloca(sizeof(int) * n);
    
    for(int a_i = 0; a_i < n; a_i++){
        cin >> k;
        vector< vector<int> > arr(a_i,vector<int>(k));       
        for(int a_j = 0; a_j < k; a_j++){
            cin >> arr[a_i][a_j];
        }
    }
    
    vector< vector<int>> qrr(q,vector<int>(2));
    
    for(int l = 0; l < q; l++){
        cin >> qrr[l][0];
        cin >> qrr[l][1];
    }
     
    for(int l = 0; l < q; l++){
        cout << arr[qrr[l][0]][qrr[l][1]];
    }
	
	
	
     //vector< vector<int>> qrr(q,vector<int>(2));       
    
        
   /*     vector< vector<int> > a(n,vector<int>(n));
    
        for(int a_i = 0;a_i < n;a_i++){
           for(int a_j = 0;a_j < n;a_j++){
              cin >> a[a_i][a_j];
           }
        } */

		