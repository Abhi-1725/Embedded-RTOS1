	// TASK3 running for 5ms
	int j = 0;
	int k = 0;
  EnableInterrupts(); // interrupts needed for grader to run
  while(1){
    /*
    Task0: desired time between executions is 1000탎 (starter code runs at 100,000탎)
    Task1: desired time between executions is 100,000탎
    Task2: desired time between executions is 1,000,000탎
    Task3: desired time between executions for every 5ms
    Task4: desired time between executions is 100,000탎
    Task5: desired time between executions is 1,000,000탎
    */
    for(int i=1; i<101; i++){ // run for 100 millisec
      Task0();  // sample microphone
      BSP_Delay1ms(1);
			if(i % 5 == 0) // condition for running for every  5ms
			{
				Task3(); // check the buttons and change mode if pressed00
			}
      if(i == 100)
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