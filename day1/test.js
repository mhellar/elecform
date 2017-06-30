  int pos = currentSteps5;

  if (currentSteps5 < pos) {
    dir5 = 'cw';
    pin5 = 11;
    highPin9 = 10;
    //    omronSonarTrig = 1;
    Timer5.setFrequency(1920).start();
  } else if (currentSteps5 > pos) {
    dir5 = 'ccw';
    pin5 = 10;
    highPin9 = 11;
    //    omronSonarTrig = 1;
    Timer5.setFrequency(1920).start();
  } else if (currentSteps5 == pos) {
    highPin9 = 11;
    highPin10 = 10;
    digitalWrite(highPin9, LOW);
    digitalWrite(highPin10, LOW);
    Timer5.stop();
    //        Timer8.stop();
  }

  if (currentSteps6 < pos) {
    dir6 = 'cw';
    pin6 = 13;
    highPin11 = 12;
    //    omronSonarTrig = 1;
    if (abs(diff6) > 5000) {
      Timer6.setFrequency(1920).start();
    } else {
      Timer6.setFrequency(920).start();
    }
  } else if (currentSteps6 > pos) {
    dir6 = 'ccw';
    pin6 = 12;
    highPin11 = 13;
    //    omronSonarTrig = 1;
    if (abs(diff6) > 5000) {
      Timer6.setFrequency(1920).start();
    } else {
      Timer6.setFrequency(920).start();
    }
  } else if (currentSteps6 == pos) {
    highPin11 = 12;
    highPin12 = 13;
    digitalWrite(highPin11, LOW);
    digitalWrite(highPin12, LOW);
    Timer6.stop();
  }

  if (currentSteps7 < pos) {
    dir7 = 'cw';
    pin7 = 15;
    highPin13 = 14;
    //    omronSonarTrig = 1;
    if (abs(diff6) > 5000) {
      Timer7.setFrequency(1920).start();
    } else {
      Timer7.setFrequency(920).start();
    }
  } else if (currentSteps7 > pos) {
    dir7 = 'ccw';
    pin7 = 14;
    highPin13 = 15;
    //    omronSonarTrig = 1;
    if (abs(diff6) > 5000) {
      Timer7.setFrequency(1920).start();
    } else {
      Timer7.setFrequency(920).start();
    }
  } else if (currentSteps7 == pos) {
    highPin13 = 14;
    highPin14 = 15;
    digitalWrite(highPin13, LOW);
    digitalWrite(highPin14, LOW);
    Timer7.stop();
  }


  if (currentSteps5 == pos && currentSteps6 == pos && currentSteps7 == pos) {
    Timer8.stop();
  }
}
