	// TASK3 running at every 4ms
	int j = 1;
  EnableInterrupts(); // interrupts needed for grader to run
  while(1){
    /*
    Task0: desired time between executions is 1000�s (starter code runs at 100,000�s)
    Task1: desired time between executions is 100,000�s
    Task2: desired time between executions is 1,000,000�s
    Task3: desired time between executions is every 4ms
    Task4: desired time between executions is 100,000�s
    Task5: desired time between executions is 1,000,000�s
    */
    for(int i=0; i<100; i++){ // run for 100 millisec
      Task0();  // sample microphone
      BSP_Delay1ms(1);
			while(i % 4 == 0)  //condition for running for every  4ms
			{
				Task3();  // check the buttons and change mode if pressed
			}
      if(i == 99)
      {
        Task1();  // sample accelerometer
        Task4();  // update the plot..................................................................................................................................................................................... 
        j++;
      }
      if(j == 10)
      {
        Task2();   // sample light at 1 Hz
        Task5();   // update the LCD text at 1 Hz
        j = 0;
      }
    }
      //Time++;    // 1 Hz
      Profile_Toggle6();
    }