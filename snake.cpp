snake[x[0]][y[0] - 1] = '0';
		snake[x[0]][y[0]] = '0';
		snake[x[2]][y[2]] = ' ';
		snake[x[1]][y[1]] ='0';
		snake[x[2]][y[2]] =  ' ';
		snake[x[1]][y[1]] = ' ';
		snake[x[0]][y[0]] = ' ';
		tmp[0] = y[0] - 1;
		tmp[1] = y[0];
		tmp[2] = y[1];
		y[0] = tmp[0];
		y[1] = tmp[1];
		y[2] = tmp[2];
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				cout << " " << snake[i][j];
